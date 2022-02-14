
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_mvm_reprobe {int work; int dev; } ;
struct TYPE_9__ {scalar_t__ cur_fw_img; } ;
struct iwl_mvm {scalar_t__ fw_restart; int hw; int status; TYPE_4__ fwrt; TYPE_3__* trans; int * error_recovery_buf; TYPE_2__* fw; scalar_t__ hw_registered; int notif_wait; } ;
struct TYPE_8__ {int status; int dev; } ;
struct TYPE_6__ {int error_log_size; int error_log_addr; } ;
struct TYPE_7__ {TYPE_1__ ucode_capa; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_3__*,int,int *,int) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (int ) ;

void FUNC_14(struct iwl_mvm *VAR_7, bool VAR_8)
{
 FUNC_3(&VAR_7->notif_wait);
 FUNC_4(VAR_7->trans);
 FUNC_6(VAR_7);







 if (!VAR_7->fw_restart && VAR_8) {
  FUNC_5(&VAR_7->fwrt);
 } else if (FUNC_12(VAR_2, &VAR_7->status)) {
  struct iwl_mvm_reprobe *VAR_9;

  FUNC_1(VAR_7,
   "Firmware error during reconfiguration - reprobe!\n");






  if (!FUNC_13(VAR_5)) {
   FUNC_1(VAR_7, "Module is being unloaded - abort\n");
   return;
  }

  VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_0);
  if (!VAR_9) {
   FUNC_9(VAR_5);
   return;
  }
  VAR_9->dev = VAR_7->trans->dev;
  FUNC_0(&VAR_9->work, VAR_6);
  FUNC_10(&VAR_9->work);
 } else if (FUNC_12(VAR_1,
       &VAR_7->status)) {
  FUNC_1(VAR_7, "HW restart already requested, but not started\n");
 } else if (VAR_7->fwrt.cur_fw_img == VAR_3 &&
     VAR_7->hw_registered &&
     !FUNC_12(VAR_4, &VAR_7->trans->status)) {
  if (VAR_7->fw->ucode_capa.error_log_size) {
   u32 VAR_10 = VAR_7->fw->ucode_capa.error_log_size;
   u32 VAR_11 = VAR_7->fw->ucode_capa.error_log_addr;
   u8 *VAR_12 = FUNC_8(VAR_10, VAR_0);

   if (VAR_12) {
    VAR_7->error_recovery_buf = VAR_12;
    FUNC_7(VAR_7->trans,
        VAR_11,
        VAR_12,
        VAR_10);
   }
  }

  FUNC_5(&VAR_7->fwrt);

  if (VAR_8 && VAR_7->fw_restart > 0)
   VAR_7->fw_restart--;
  FUNC_11(VAR_1, &VAR_7->status);
  FUNC_2(VAR_7->hw);
 }
}
