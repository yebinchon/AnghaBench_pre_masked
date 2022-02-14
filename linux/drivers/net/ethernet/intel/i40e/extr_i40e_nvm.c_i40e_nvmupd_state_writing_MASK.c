
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct i40e_nvm_access {int dummy; } ;
struct TYPE_4__ {scalar_t__ asq_last_status; } ;
struct TYPE_3__ {scalar_t__ hw_semaphore_timeout; } ;
struct i40e_hw {int nvm_release_on_done; TYPE_2__ aq; TYPE_1__ nvm; void* nvmupd_state; void* nvm_wait_opcode; } ;
typedef scalar_t__ i40e_status ;
typedef enum i40e_nvmupd_cmd { ____Placeholder_i40e_nvmupd_cmd } i40e_nvmupd_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;


 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;


 int VAR_10 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 void* VAR_11 ;
 int FUNC_2 (struct i40e_hw*,int ,char*,scalar_t__,...) ;
 scalar_t__* VAR_12 ;
 scalar_t__ FUNC_3 (struct i40e_hw*,struct i40e_nvm_access*,int *,int*) ;
 int FUNC_4 (struct i40e_hw*,struct i40e_nvm_access*,int*) ;
 int FUNC_5 (struct i40e_hw*) ;
 scalar_t__ FUNC_6 (struct i40e_hw*) ;
 scalar_t__ FUNC_7 (struct i40e_hw*,int ) ;

__attribute__((used)) static i40e_status FUNC_8(struct i40e_hw *VAR_13,
          struct i40e_nvm_access *VAR_14,
          u8 *VAR_15, int *VAR_16)
{
 i40e_status VAR_17 = 0;
 enum i40e_nvmupd_cmd VAR_18;
 bool VAR_19 = 0;

 VAR_18 = FUNC_4(VAR_13, VAR_14, VAR_16);

retry:
 switch (VAR_18) {
 case 129:
  VAR_17 = FUNC_3(VAR_13, VAR_14, VAR_15, VAR_16);
  if (!VAR_17) {
   VAR_13->nvm_wait_opcode = VAR_11;
   VAR_13->nvmupd_state = VAR_9;
  }
  break;

 case 128:
  VAR_17 = FUNC_3(VAR_13, VAR_14, VAR_15, VAR_16);
  if (VAR_17) {
   *VAR_16 = VAR_13->aq.asq_last_status ?
       FUNC_1(VAR_17,
             VAR_13->aq.asq_last_status) :
       -VAR_0;
   VAR_13->nvmupd_state = VAR_7;
  } else {
   VAR_13->nvm_release_on_done = 1;
   VAR_13->nvm_wait_opcode = VAR_11;
   VAR_13->nvmupd_state = VAR_8;
  }
  break;

 case 131:

  VAR_17 = FUNC_6(VAR_13);
  if (VAR_17) {
   *VAR_16 = VAR_13->aq.asq_last_status ?
       FUNC_1(VAR_17,
             VAR_13->aq.asq_last_status) :
       -VAR_0;
   VAR_13->nvmupd_state = VAR_7;
  } else {
   VAR_13->nvm_wait_opcode = VAR_11;
   VAR_13->nvmupd_state = VAR_9;
  }
  break;

 case 130:

  VAR_17 = FUNC_6(VAR_13);
  if (VAR_17) {
   *VAR_16 = VAR_13->aq.asq_last_status ?
       FUNC_1(VAR_17,
             VAR_13->aq.asq_last_status) :
       -VAR_0;
   VAR_13->nvmupd_state = VAR_7;
  } else {
   VAR_13->nvm_release_on_done = 1;
   VAR_13->nvm_wait_opcode = VAR_11;
   VAR_13->nvmupd_state = VAR_8;
  }
  break;

 default:
  FUNC_2(VAR_13, VAR_4,
      "NVMUPD: bad cmd %s in writing state.\n",
      VAR_12[VAR_18]);
  VAR_17 = VAR_6;
  *VAR_16 = -VAR_1;
  break;
 }







 if (VAR_17 && (VAR_13->aq.asq_last_status == VAR_2) &&
     !VAR_19) {
  i40e_status VAR_20 = VAR_17;
  u32 VAR_21 = VAR_13->aq.asq_last_status;
  u32 VAR_22;

  VAR_22 = FUNC_7(VAR_13, VAR_5);
  if (VAR_22 >= VAR_13->nvm.hw_semaphore_timeout) {
   FUNC_2(VAR_13, VAR_3,
       "NVMUPD: write semaphore expired (%d >= %lld), retrying\n",
       VAR_22, VAR_13->nvm.hw_semaphore_timeout);
   FUNC_5(VAR_13);
   VAR_17 = FUNC_0(VAR_13, VAR_10);
   if (VAR_17) {
    FUNC_2(VAR_13, VAR_3,
        "NVMUPD: write semaphore reacquire failed aq_err = %d\n",
        VAR_13->aq.asq_last_status);
    VAR_17 = VAR_20;
    VAR_13->aq.asq_last_status = VAR_21;
   } else {
    VAR_19 = 1;
    goto retry;
   }
  }
 }

 return VAR_17;
}
