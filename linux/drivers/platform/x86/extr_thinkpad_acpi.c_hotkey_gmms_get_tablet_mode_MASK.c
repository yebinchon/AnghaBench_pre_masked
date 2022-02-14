
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int VAR_9, int *VAR_10)
{
 int VAR_11 = (VAR_9 >> 16) & 0xffff;
 int VAR_12 = VAR_9 & 0xffff;
 int VAR_13 = VAR_2;
 int VAR_14 = 0;

 if (VAR_10)
  *VAR_10 = 0;

 switch (VAR_11) {
 case 1:
  VAR_14 = VAR_3 |
         VAR_6 |
         VAR_5;
  break;
 case 2:
  VAR_14 = VAR_3 |
         VAR_1 |
         VAR_6 |
         VAR_4 |
         VAR_8;
  break;
 case 3:
  VAR_14 = VAR_3 |
         VAR_1;
  break;
 case 4:
 case 5:



  VAR_14 = VAR_3 |
         VAR_1 |
         VAR_6 |
         VAR_4 |
         VAR_8;
  break;
 default:
  FUNC_0("Unknown multi mode status type %d with value 0x%04X, please report this to %s\n",
         VAR_11, VAR_12, VAR_0);
  return 0;
 }

 if (VAR_10 && (VAR_14 & VAR_7))
  *VAR_10 = 1;

 switch (VAR_12) {
 case 1:
  VAR_13 = VAR_3;
  break;
 case 2:
  VAR_13 = VAR_1;
  break;
 case 3:
  VAR_13 = VAR_6;
  break;
 case 4:
  if (VAR_11 == 1)
   VAR_13 = VAR_5;
  else
   VAR_13 = VAR_4;
  break;
 case 5:
  VAR_13 = VAR_8;
  break;
 default:
  if (VAR_11 == 5 && VAR_12 == 0xffff) {
   FUNC_1("Multi mode status is undetected, assuming laptop\n");
   return 0;
  }
 }

 if (!(VAR_13 & VAR_14)) {
  FUNC_0("Unknown/reserved multi mode value 0x%04X for type %d, please report this to %s\n",
         VAR_12, VAR_11, VAR_0);
  return 0;
 }

 return !!(VAR_13 & VAR_7);
}
