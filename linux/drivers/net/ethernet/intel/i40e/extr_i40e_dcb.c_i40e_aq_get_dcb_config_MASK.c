
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40e_virt_mem {scalar_t__ va; } ;
struct i40e_hw {int dummy; } ;
struct i40e_dcbx_config {int dummy; } ;
typedef scalar_t__ i40e_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,struct i40e_virt_mem*,int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ,int ,void*,int ,int *,int *,int *) ;
 int FUNC_2 (struct i40e_hw*,struct i40e_virt_mem*) ;
 scalar_t__ FUNC_3 (int *,struct i40e_dcbx_config*) ;

i40e_status FUNC_4(struct i40e_hw *VAR_1, u8 VAR_2,
       u8 VAR_3,
       struct i40e_dcbx_config *VAR_4)
{
 i40e_status VAR_5 = 0;
 struct i40e_virt_mem VAR_6;
 u8 *VAR_7;


 VAR_5 = FUNC_0(VAR_1, &VAR_6, VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_7 = (u8 *)VAR_6.va;
 VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_2,
       (void *)VAR_7, VAR_0,
       ((void*)0), ((void*)0), ((void*)0));
 if (VAR_5)
  goto free_mem;


 VAR_5 = FUNC_3(VAR_7, VAR_4);

free_mem:
 FUNC_2(VAR_1, &VAR_6);
 return VAR_5;
}
