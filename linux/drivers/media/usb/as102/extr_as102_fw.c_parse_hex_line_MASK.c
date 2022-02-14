
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_1, unsigned char *VAR_2,
     unsigned char *VAR_3, int *VAR_4,
     unsigned char *VAR_5) {

 int VAR_6 = 0;
 unsigned char *VAR_7, VAR_8;

 if (*VAR_1++ != ':') {
  FUNC_1("invalid firmware file\n");
  return -VAR_0;
 }


 for (VAR_7 = VAR_1; *VAR_7 != '\n'; VAR_7 += 2) {
  FUNC_0(&VAR_8, VAR_7);

  switch (VAR_6) {
  case 0:
   *VAR_4 = VAR_8;
   break;
  case 1:
   VAR_2[2] = VAR_8;
   break;
  case 2:
   VAR_2[3] = VAR_8;
   break;
  case 3:

   if (VAR_8 == 0x04)
    *VAR_5 = 1;
   else
    *VAR_5 = 0;
   break;
  case 4:
  case 5:
   if (*VAR_5)
    VAR_2[(VAR_6 - 4)] = VAR_8;
   else
    VAR_3[(VAR_6 - 4)] = VAR_8;
   break;
  default:
   VAR_3[(VAR_6 - 4)] = VAR_8;
   break;
  }
  VAR_6++;
 }


 return (VAR_6 * 2) + 2;
}
