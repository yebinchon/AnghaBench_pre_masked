
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char** VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (char*,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

const char *FUNC_3(int VAR_9)
{
 int VAR_10;
 char *VAR_11;
 int VAR_12;

 FUNC_1(&VAR_7);
 VAR_10 = VAR_8++;
 if (VAR_8 == VAR_5)
  VAR_8 = 0;
 FUNC_2(&VAR_7);

 VAR_11 = VAR_6[VAR_10];

 if (VAR_9 & VAR_0)
  *VAR_11++ = 'p';

 VAR_12 = (VAR_9 >> VAR_1) & 3;
 if (VAR_12) {
  *VAR_11++ = 'A';
  VAR_11 = FUNC_0(VAR_11, VAR_12);
 }

 VAR_12 = (VAR_9 >> VAR_3) & 3;
 if (VAR_12) {
  *VAR_11++ = 'L';
  VAR_11 = FUNC_0(VAR_11, VAR_12);
 }

 VAR_12 = (VAR_9 >> VAR_4) & 3;
 if (VAR_12) {
  *VAR_11++ = 'X';
  VAR_11 = FUNC_0(VAR_11, VAR_12);
 }

 VAR_12 = VAR_9 >> VAR_2;
 if (VAR_12) {
  *VAR_11++ = 'F';
  VAR_11 = FUNC_0(VAR_11, VAR_12);
 }

 if (VAR_11 == VAR_6[VAR_10])
  *VAR_11++ = '-';
 *VAR_11 = 0;
 return VAR_6[VAR_10];
}
