
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i40e_nvm_access {int dummy; } ;
struct TYPE_2__ {int asq_last_status; } ;
struct i40e_hw {int nvm_release_on_done; void* nvmupd_state; void* nvm_wait_opcode; TYPE_1__ aq; } ;
typedef int i40e_status ;
typedef enum i40e_nvmupd_cmd { ____Placeholder_i40e_nvmupd_cmd } i40e_nvmupd_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i40e_hw*,int ) ;
 int FUNC_1 (int ,int ) ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_2 (struct i40e_hw*,int ,char*,int ) ;
 int * VAR_11 ;
 int FUNC_3 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_4 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_5 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_6 (struct i40e_hw*,struct i40e_nvm_access*,int*) ;
 int FUNC_7 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_8 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_9 (struct i40e_hw*,struct i40e_nvm_access*,int*) ;
 int FUNC_10 (struct i40e_hw*) ;
 int FUNC_11 (struct i40e_hw*) ;

__attribute__((used)) static i40e_status FUNC_12(struct i40e_hw *VAR_12,
       struct i40e_nvm_access *VAR_13,
       u8 *VAR_14, int *VAR_15)
{
 i40e_status VAR_16 = 0;
 enum i40e_nvmupd_cmd VAR_17;

 VAR_17 = FUNC_9(VAR_12, VAR_13, VAR_15);

 switch (VAR_17) {
 case 132:
  VAR_16 = FUNC_0(VAR_12, VAR_7);
  if (VAR_16) {
   *VAR_15 = FUNC_1(VAR_16,
           VAR_12->aq.asq_last_status);
  } else {
   VAR_16 = FUNC_7(VAR_12, VAR_13, VAR_14, VAR_15);
   FUNC_10(VAR_12);
  }
  break;

 case 131:
  VAR_16 = FUNC_0(VAR_12, VAR_7);
  if (VAR_16) {
   *VAR_15 = FUNC_1(VAR_16,
           VAR_12->aq.asq_last_status);
  } else {
   VAR_16 = FUNC_7(VAR_12, VAR_13, VAR_14, VAR_15);
   if (VAR_16)
    FUNC_10(VAR_12);
   else
    VAR_12->nvmupd_state = VAR_5;
  }
  break;

 case 130:
  VAR_16 = FUNC_0(VAR_12, VAR_8);
  if (VAR_16) {
   *VAR_15 = FUNC_1(VAR_16,
           VAR_12->aq.asq_last_status);
  } else {
   VAR_16 = FUNC_6(VAR_12, VAR_13, VAR_15);
   if (VAR_16) {
    FUNC_10(VAR_12);
   } else {
    VAR_12->nvm_release_on_done = 1;
    VAR_12->nvm_wait_opcode = VAR_9;
    VAR_12->nvmupd_state = VAR_4;
   }
  }
  break;

 case 129:
  VAR_16 = FUNC_0(VAR_12, VAR_8);
  if (VAR_16) {
   *VAR_15 = FUNC_1(VAR_16,
           VAR_12->aq.asq_last_status);
  } else {
   VAR_16 = FUNC_8(VAR_12, VAR_13, VAR_14, VAR_15);
   if (VAR_16) {
    FUNC_10(VAR_12);
   } else {
    VAR_12->nvm_release_on_done = 1;
    VAR_12->nvm_wait_opcode = VAR_10;
    VAR_12->nvmupd_state = VAR_4;
   }
  }
  break;

 case 128:
  VAR_16 = FUNC_0(VAR_12, VAR_8);
  if (VAR_16) {
   *VAR_15 = FUNC_1(VAR_16,
           VAR_12->aq.asq_last_status);
  } else {
   VAR_16 = FUNC_8(VAR_12, VAR_13, VAR_14, VAR_15);
   if (VAR_16) {
    FUNC_10(VAR_12);
   } else {
    VAR_12->nvm_wait_opcode = VAR_10;
    VAR_12->nvmupd_state = VAR_6;
   }
  }
  break;

 case 136:
  VAR_16 = FUNC_0(VAR_12, VAR_8);
  if (VAR_16) {
   *VAR_15 = FUNC_1(VAR_16,
           VAR_12->aq.asq_last_status);
  } else {
   VAR_16 = FUNC_11(VAR_12);
   if (VAR_16) {
    *VAR_15 = VAR_12->aq.asq_last_status ?
       FUNC_1(VAR_16,
             VAR_12->aq.asq_last_status) :
       -VAR_0;
    FUNC_10(VAR_12);
   } else {
    VAR_12->nvm_release_on_done = 1;
    VAR_12->nvm_wait_opcode = VAR_10;
    VAR_12->nvmupd_state = VAR_4;
   }
  }
  break;

 case 135:
  VAR_16 = FUNC_3(VAR_12, VAR_13, VAR_14, VAR_15);
  break;

 case 133:
  VAR_16 = FUNC_5(VAR_12, VAR_13, VAR_14, VAR_15);
  break;

 case 134:
  VAR_16 = FUNC_4(VAR_12, VAR_13, VAR_14, VAR_15);
  break;

 default:
  FUNC_2(VAR_12, VAR_2,
      "NVMUPD: bad cmd %s in init state\n",
      VAR_11[VAR_17]);
  VAR_16 = VAR_3;
  *VAR_15 = -VAR_1;
  break;
 }
 return VAR_16;
}
