
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_7 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_8 ;




 unsigned int VAR_9 ;
 unsigned int VAR_10 ;


 unsigned int FUNC_2 (unsigned int) ;

 unsigned int FUNC_3 (unsigned int) ;


__attribute__((used)) static int FUNC_4(unsigned int VAR_11, unsigned int *VAR_12)
{
 unsigned int VAR_13;
 unsigned int VAR_14;

 switch (VAR_11) {
 case 128:
  VAR_13 = VAR_8;
  break;
 case 134:
  VAR_13 = VAR_2;
  break;
 case 129:
  VAR_13 = VAR_7;
  break;
 case 131:
  VAR_13 = VAR_5;
  break;
 case 135:
  VAR_13 = VAR_1;
  break;
 case 130:
  VAR_13 = VAR_6;
  break;
 case 133:
  VAR_13 = VAR_3;
  break;
 case 132:
  VAR_13 = VAR_4;
  break;
 default:
  for (VAR_14 = 0; VAR_14 <= VAR_10; ++VAR_14) {
   if (VAR_11 == FUNC_3(VAR_14)) {
    VAR_13 = FUNC_1(VAR_14);
    break;
   }
  }
  if (VAR_14 <= VAR_10)
   break;
  for (VAR_14 = 0; VAR_14 <= VAR_9; ++VAR_14) {
   if (VAR_11 == FUNC_2(VAR_14)) {
    VAR_13 = FUNC_0(VAR_14);
    break;
   }
  }
  if (VAR_14 <= VAR_9)
   break;
  return -VAR_0;
 }
 *VAR_12 = VAR_13;
 return 0;
}
