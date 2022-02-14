
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;



 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;





__attribute__((used)) static int FUNC_5(unsigned int VAR_11, unsigned int *VAR_12)
{
 unsigned int VAR_13 = VAR_11 & VAR_10;
 unsigned int VAR_14;
 unsigned int VAR_15;

 switch (VAR_13) {
 case 130:
  VAR_14 = VAR_7;
  break;
 case 129:
  VAR_14 = VAR_8;
  break;
 case 128:
  VAR_14 = VAR_9;
  break;
 case 134:
  VAR_14 = VAR_1;
  break;
 case 131:
  VAR_14 = VAR_6;
  break;
 case 133:
  VAR_14 = VAR_4;
  break;
 case 132:
  VAR_14 = VAR_5;
  break;
 default:
  for (VAR_15 = 0; VAR_15 <= VAR_2; ++VAR_15) {
   if (VAR_13 == FUNC_3(VAR_15)) {
    VAR_14 = FUNC_1(VAR_15);
    break;
   }
  }
  if (VAR_15 <= VAR_2)
   break;
  for (VAR_15 = 0; VAR_15 <= VAR_3; ++VAR_15) {
   if (VAR_13 == FUNC_4(VAR_15)) {
    VAR_14 = FUNC_2(VAR_15);
    break;
   }
  }
  if (VAR_15 <= VAR_3)
   break;
  return -VAR_0;
 }
 *VAR_12 = FUNC_0(VAR_14);
 return 0;
}
