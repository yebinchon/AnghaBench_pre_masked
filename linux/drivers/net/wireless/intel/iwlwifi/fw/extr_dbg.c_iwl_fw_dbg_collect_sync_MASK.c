
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int active_wks; } ;
struct iwl_fw_runtime {TYPE_2__ dump; TYPE_3__* trans; int ops_ctx; TYPE_1__* ops; } ;
struct iwl_fw_dbg_params {int member_0; } ;
struct TYPE_6__ {int status; } ;
struct TYPE_4__ {int (* fw_running ) (int ) ;} ;


 int FUNC_0 (struct iwl_fw_runtime*,char*) ;
 int FUNC_1 (struct iwl_fw_runtime*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct iwl_fw_runtime*,struct iwl_fw_dbg_params*,int) ;
 int FUNC_4 (struct iwl_fw_runtime*) ;
 int FUNC_5 (struct iwl_fw_runtime*,int ) ;
 int FUNC_6 (struct iwl_fw_runtime*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct iwl_fw_runtime *VAR_1, u8 VAR_2)
{
 struct iwl_fw_dbg_params VAR_3 = {0};

 if (!FUNC_9(VAR_2, &VAR_1->dump.active_wks))
  return;

 if (VAR_1->ops && VAR_1->ops->fw_running &&
     !VAR_1->ops->fw_running(VAR_1->ops_ctx)) {
  FUNC_1(VAR_1, "Firmware not running - cannot dump error\n");
  FUNC_6(VAR_1);
  goto out;
 }


 if (FUNC_9(VAR_0, &VAR_1->trans->status)) {
  FUNC_1(VAR_1, "Skip fw error dump since bus is dead\n");
  goto out;
 }

 if (FUNC_3(VAR_1, &VAR_3, 1)) {
  FUNC_1(VAR_1, "Failed to stop DBGC recording, aborting dump\n");
  goto out;
 }

 FUNC_0(VAR_1, "WRT: Data collection start\n");
 if (FUNC_7(VAR_1->trans))
  FUNC_5(VAR_1, VAR_2);
 else
  FUNC_4(VAR_1);
 FUNC_0(VAR_1, "WRT: Data collection done\n");

 FUNC_3(VAR_1, &VAR_3, 0);

out:
 FUNC_2(VAR_2, &VAR_1->dump.active_wks);
}
