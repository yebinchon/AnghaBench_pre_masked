
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_nvm_access {int offset; int data_size; int config; int command; } ;
struct TYPE_2__ {int arq_mutex; } ;
struct i40e_hw {int nvmupd_state; TYPE_1__ aq; int nvm_wait_opcode; int nvm_release_on_done; } ;
typedef int i40e_status ;
typedef enum i40e_nvmupd_cmd { ____Placeholder_i40e_nvmupd_cmd } i40e_nvmupd_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int VAR_9 ;
 int FUNC_0 (struct i40e_hw*,int ,char*,...) ;
 int * VAR_10 ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (struct i40e_hw*,struct i40e_nvm_access*,int*,int*) ;
 int FUNC_3 (struct i40e_hw*,struct i40e_nvm_access*,int*,int*) ;
 int FUNC_4 (struct i40e_hw*,struct i40e_nvm_access*,int*,int*) ;
 int FUNC_5 (struct i40e_hw*,struct i40e_nvm_access*,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

i40e_status FUNC_8(struct i40e_hw *VAR_11,
    struct i40e_nvm_access *VAR_12,
    u8 *VAR_13, int *VAR_14)
{
 i40e_status VAR_15;
 enum i40e_nvmupd_cmd VAR_16;


 *VAR_14 = 0;


 VAR_16 = FUNC_5(VAR_11, VAR_12, VAR_14);

 FUNC_0(VAR_11, VAR_3, "%s state %d nvm_release_on_hold %d opc 0x%04x cmd 0x%08x config 0x%08x offset 0x%08x data_size 0x%08x\n",
     VAR_10[VAR_16],
     VAR_11->nvmupd_state,
     VAR_11->nvm_release_on_done, VAR_11->nvm_wait_opcode,
     VAR_12->command, VAR_12->config, VAR_12->offset, VAR_12->data_size);

 if (VAR_16 == VAR_7) {
  *VAR_14 = -VAR_1;
  FUNC_0(VAR_11, VAR_3,
      "i40e_nvmupd_validate_command returns %d errno %d\n",
      VAR_16, *VAR_14);
 }




 if (VAR_16 == VAR_9) {
  if (!VAR_12->data_size) {
   *VAR_14 = -VAR_1;
   return VAR_4;
  }

  VAR_13[0] = VAR_11->nvmupd_state;

  if (VAR_12->data_size >= 4) {
   VAR_13[1] = 0;
   *((u16 *)&VAR_13[2]) = VAR_11->nvm_wait_opcode;
  }


  if (VAR_11->nvmupd_state == VAR_8)
   VAR_11->nvmupd_state = 132;

  return 0;
 }


 if (VAR_11->nvmupd_state == VAR_8) {
  FUNC_0(VAR_11, VAR_3,
      "Clearing I40E_NVMUPD_STATE_ERROR state without reading\n");
  VAR_11->nvmupd_state = 132;
 }
 FUNC_6(&VAR_11->aq.arq_mutex);
 switch (VAR_11->nvmupd_state) {
 case 132:
  VAR_15 = FUNC_2(VAR_11, VAR_12, VAR_13, VAR_14);
  break;

 case 130:
  VAR_15 = FUNC_3(VAR_11, VAR_12, VAR_13, VAR_14);
  break;

 case 128:
  VAR_15 = FUNC_4(VAR_11, VAR_12, VAR_13, VAR_14);
  break;

 case 131:
 case 129:



  if (VAR_12->offset == 0xffff) {
   FUNC_1(VAR_11);
   VAR_15 = 0;
   break;
  }

  VAR_15 = VAR_5;
  *VAR_14 = -VAR_0;
  break;

 default:

  FUNC_0(VAR_11, VAR_3,
      "NVMUPD: no such state %d\n", VAR_11->nvmupd_state);
  VAR_15 = VAR_6;
  *VAR_14 = -VAR_2;
  break;
 }

 FUNC_7(&VAR_11->aq.arq_mutex);
 return VAR_15;
}
