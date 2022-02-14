
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct i40e_hw {scalar_t__ nvm_wait_opcode; int nvm_aq_event_desc; } ;
struct i40e_aq_desc {int dummy; } ;


 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (int *,struct i40e_aq_desc*,int) ;

void FUNC_2(struct i40e_hw *VAR_0, u16 VAR_1,
      struct i40e_aq_desc *VAR_2)
{
 u32 VAR_3 = sizeof(struct i40e_aq_desc);

 if (VAR_1 == VAR_0->nvm_wait_opcode) {
  FUNC_1(&VAR_0->nvm_aq_event_desc, VAR_2, VAR_3);
  FUNC_0(VAR_0);
 }
}
