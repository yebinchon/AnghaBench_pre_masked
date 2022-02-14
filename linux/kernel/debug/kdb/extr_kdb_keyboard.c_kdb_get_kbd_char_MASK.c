
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int) ;
 int** VAR_9 ;
 int* VAR_10 ;

int FUNC_6(void)
{
 int VAR_11, VAR_12;
 static int VAR_13;
 static int VAR_14;
 static int VAR_15;
 u_short VAR_16;

 if (FUNC_0(VAR_5) || FUNC_0(VAR_6) ||
     (FUNC_2(VAR_1) == 0xff && FUNC_2(VAR_0) == 0xff)) {
  VAR_7 = 0;
  return -1;
 }
 VAR_7 = 1;

 if ((FUNC_2(VAR_1) & VAR_3) == 0)
  return -1;




 VAR_11 = FUNC_2(VAR_0);
 VAR_12 = FUNC_2(VAR_1);




 if (VAR_12 & VAR_2)
  return -1;
 if (((VAR_11&0x7f) == 0x2a) || ((VAR_11&0x7f) == 0x36)) {



  if ((VAR_11 & 0x80) == 0)
   VAR_14 = 1;
  else
   VAR_14 = 0;
  return -1;
 }

 if ((VAR_11&0x7f) == 0x1d) {



  if ((VAR_11 & 0x80) == 0)
   VAR_15 = 1;
  else
   VAR_15 = 0;
  return -1;
 }

 if ((VAR_11 & 0x80) != 0) {
  if (VAR_11 == 0x9c)
   VAR_8 = 0;
  return -1;
 }

 VAR_11 &= 0x7f;





 if (VAR_11 == 0x3a) {



  VAR_13 ^= 1;




  return -1;
 }

 if (VAR_11 == 0x0e) {



  return 8;
 }


 switch (VAR_11) {
 case 0xF:
  return 9;
 case 0x53:
  return 4;
 case 0x47:
  return 1;
 case 0x4F:
  return 5;
 case 0x4B:
  return 2;
 case 0x48:
  return 16;
 case 0x50:
  return 14;
 case 0x4D:
  return 6;
 }

 if (VAR_11 == 0xe0)
  return -1;






 if (VAR_11 == 0x73)
  VAR_11 = 0x59;
 else if (VAR_11 == 0x7d)
  VAR_11 = 0x7c;

 if (!VAR_13 && !VAR_14 && !VAR_15) {
  VAR_16 = VAR_10[VAR_11];
 } else if ((VAR_13 || VAR_14) && VAR_9[1]) {
  VAR_16 = VAR_9[1][VAR_11];
 } else if (VAR_15 && VAR_9[4]) {
  VAR_16 = VAR_9[4][VAR_11];
 } else {
  VAR_16 = 0x0020;
  FUNC_4("Unknown state/scancode (%d)\n", VAR_11);
 }
 VAR_16 &= 0x0fff;
 if (VAR_16 == '\t')
  VAR_16 = ' ';
 switch (FUNC_1(VAR_16)) {
 case 129:
 case 130:
  if (FUNC_3(VAR_16))
   break;

 case 128:
  if (VAR_16 == VAR_4)
   break;

 default:
  return -1;
 }

 if (VAR_11 == 0x1c) {
  VAR_8 = 1;
  return 13;
 }

 return VAR_16 & 0xff;
}
