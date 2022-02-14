
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (unsigned int*) ;
 unsigned int FUNC_1 (int ,int ,int ) ;
 unsigned int* VAR_0 ;

int FUNC_2(u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0) - 1;
 unsigned int VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);

 while (VAR_4 >= 0 && VAR_0[VAR_4] != 0) {
  if (VAR_5 == VAR_0[VAR_4])
   return 1;
  VAR_4--;
 }
 return 0;
}
