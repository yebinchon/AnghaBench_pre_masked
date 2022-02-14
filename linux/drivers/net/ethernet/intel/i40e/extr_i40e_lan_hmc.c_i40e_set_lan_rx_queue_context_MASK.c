
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_hmc_obj_rxq {int dummy; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int **,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;

i40e_status FUNC_2(struct i40e_hw *VAR_2,
          u16 VAR_3,
          struct i40e_hmc_obj_rxq *VAR_4)
{
 i40e_status VAR_5;
 u8 *VAR_6;

 VAR_5 = FUNC_0(VAR_2, &VAR_6,
         VAR_0, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_6,
        VAR_1, (u8 *)VAR_4);
}
