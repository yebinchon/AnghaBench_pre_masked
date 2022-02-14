
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ arq_last_status; } ;
struct i40e_hw {int nvm_release_on_done; int nvmupd_state; TYPE_1__ aq; scalar_t__ nvm_wait_opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (struct i40e_hw*,int ,char*,scalar_t__) ;
 int FUNC_1 (struct i40e_hw*) ;

void FUNC_2(struct i40e_hw *VAR_4)
{
 FUNC_0(VAR_4, VAR_0,
     "NVMUPD: clearing wait on opcode 0x%04x\n",
     VAR_4->nvm_wait_opcode);

 if (VAR_4->nvm_release_on_done) {
  FUNC_1(VAR_4);
  VAR_4->nvm_release_on_done = 0;
 }
 VAR_4->nvm_wait_opcode = 0;

 if (VAR_4->aq.arq_last_status) {
  VAR_4->nvmupd_state = VAR_1;
  return;
 }

 switch (VAR_4->nvmupd_state) {
 case 129:
  VAR_4->nvmupd_state = VAR_2;
  break;

 case 128:
  VAR_4->nvmupd_state = VAR_3;
  break;

 default:
  break;
 }
}
