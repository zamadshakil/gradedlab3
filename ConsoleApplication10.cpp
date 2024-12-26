#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int decr = n, incr=1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= decr; j++) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << k;
		}
		for (int m = i-1; m >= 1; m--) {
			cout << m;
		}
		cout << endl;
		incr++;
		decr--;
	}

	return 0;
}
