
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int *VAR_4)
{
 u8 VAR_5 = 0;

 switch (VAR_3) {
 case 128:
  *VAR_4 = FUNC_1();
  return 0;
 case 130:
 case 129:
  if (FUNC_2(!FUNC_0(VAR_2, &VAR_5)))
   return -VAR_0;
  *VAR_4 = VAR_5;
  return 0;
 default:
  return -VAR_1;
 }
}
