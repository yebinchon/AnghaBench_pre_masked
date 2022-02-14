
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int *,int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int **,int ,int ) ;

i40e_status FUNC_2(struct i40e_hw *VAR_1,
            u16 VAR_2)
{
 i40e_status VAR_3;
 u8 *VAR_4;

 VAR_3 = FUNC_1(VAR_1, &VAR_4,
         VAR_0, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_0(VAR_1, VAR_4, VAR_0);
}
