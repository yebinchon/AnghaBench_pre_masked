
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u16 ;
struct i40e_pf {int dummy; } ;



void FUNC_0(struct i40e_pf *VAR_0, u8 *VAR_1,
         u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_1[VAR_4] = VAR_4 % VAR_3;
}
