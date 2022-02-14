
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ va; } ;
struct i40e_hw {TYPE_1__ nvm_buff; } ;
typedef int i40e_status ;


 int FUNC_0 (struct i40e_hw*,int) ;
 scalar_t__ FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (struct i40e_hw*,TYPE_1__*) ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (struct i40e_hw*) ;

i40e_status FUNC_5(struct i40e_hw *VAR_0)
{
 i40e_status VAR_1 = 0;

 if (FUNC_1(VAR_0))
  FUNC_0(VAR_0, 1);

 FUNC_4(VAR_0);
 FUNC_3(VAR_0);

 if (VAR_0->nvm_buff.va)
  FUNC_2(VAR_0, &VAR_0->nvm_buff);

 return VAR_1;
}
