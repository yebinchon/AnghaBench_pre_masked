
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;


 unsigned int VAR_1 ;
 unsigned int VAR_2 ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;

 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_7 ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_8, unsigned int *VAR_9)
{
 unsigned int VAR_10;
 unsigned int VAR_11;

 switch (VAR_8) {
 case 128:
  VAR_10 = VAR_7;
  break;
 case 132:
  VAR_10 = VAR_3;
  break;
 case 129:
  VAR_10 = VAR_6;
  break;
 case 130:
  VAR_10 = VAR_5;
  break;
 case 131:
  VAR_10 = VAR_4;
  break;
 default:
  for (VAR_11 = 0; VAR_11 <= VAR_2; ++VAR_11) {
   if (VAR_8 == FUNC_1(VAR_11)) {
    VAR_10 = FUNC_3(VAR_11);
    break;
   }
  }
  if (VAR_11 <= VAR_2)
   break;
  for (VAR_11 = 0; VAR_11 <= VAR_1; ++VAR_11) {
   if (VAR_8 == FUNC_0(VAR_11)) {
    VAR_10 = FUNC_2(VAR_11);
    break;
   }
  }
  if (VAR_11 <= VAR_1)
   break;
  return -VAR_0;
 }
 *VAR_9 = VAR_10;
 return 0;
}
