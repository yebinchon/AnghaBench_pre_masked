
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;

 unsigned int VAR_1 ;



 unsigned int FUNC_1 (unsigned int) ;


 unsigned int FUNC_2 (unsigned int) ;



 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_13, unsigned int *VAR_14)
{
 unsigned int VAR_15 = VAR_13 & VAR_1;
 unsigned int VAR_16;
 unsigned int VAR_17;

 switch (VAR_15) {
 case 130:
  VAR_16 = VAR_10;
  break;
 case 129:
  VAR_16 = VAR_11;
  break;
 case 128:
  VAR_16 = VAR_12;
  break;
 case 135:
  VAR_16 = VAR_3;
  break;
 case 134:
  VAR_16 = VAR_6;
  break;
 case 133:
  VAR_16 = VAR_7;
  break;
 case 132:
  VAR_16 = VAR_8;
  break;
 case 131:
  VAR_16 = VAR_9;
  break;
 case 136:
  VAR_16 = VAR_2;
  break;
 default:
  for (VAR_17 = 0; VAR_17 <= VAR_5; ++VAR_17) {
   if (VAR_15 == FUNC_2(VAR_17)) {
    VAR_16 = FUNC_4(VAR_17);
    break;
   }
  }
  if (VAR_17 <= VAR_5)
   break;
  for (VAR_17 = 0; VAR_17 <= VAR_4; ++VAR_17) {
   if (VAR_15 == FUNC_1(VAR_17)) {
    VAR_16 = FUNC_3(VAR_17);
    break;
   }
  }
  if (VAR_17 <= VAR_4)
   break;
  return -VAR_0;
 }
 *VAR_14 = FUNC_0(VAR_16);
 return 0;
}
