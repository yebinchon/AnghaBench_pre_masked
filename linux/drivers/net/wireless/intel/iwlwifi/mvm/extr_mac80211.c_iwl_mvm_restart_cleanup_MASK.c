
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int conf; } ;
struct TYPE_4__ {TYPE_1__ dump; } ;
struct iwl_mvm {int ps_disabled; int rfkill_safe_init_done; int monitor_on; TYPE_2__ fwrt; scalar_t__ rx_ba_sessions; scalar_t__ vif_count; int hw; int last_bt_ci_cmd; int last_bt_notif; int * fw_key_table; int * p2p_device_vif; scalar_t__ scan_status; scalar_t__ cur_aid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct iwl_mvm*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int VAR_1 ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (int *,int ,int) ;

__attribute__((used)) static void FUNC_9(struct iwl_mvm *VAR_2)
{
 FUNC_7(VAR_2);

 VAR_2->cur_aid = 0;

 VAR_2->scan_status = 0;
 VAR_2->ps_disabled = 0;
 VAR_2->rfkill_safe_init_done = 0;


 FUNC_4(VAR_2);
 FUNC_1(VAR_2->hw);

 FUNC_5(VAR_2);





 FUNC_0(VAR_2->hw, 0, VAR_1, VAR_2);

 VAR_2->p2p_device_vif = ((void*)0);

 FUNC_6(VAR_2);
 FUNC_8(VAR_2->fw_key_table, 0, sizeof(VAR_2->fw_key_table));
 FUNC_8(&VAR_2->last_bt_notif, 0, sizeof(VAR_2->last_bt_notif));
 FUNC_8(&VAR_2->last_bt_ci_cmd, 0, sizeof(VAR_2->last_bt_ci_cmd));

 FUNC_2(VAR_2->hw);

 VAR_2->vif_count = 0;
 VAR_2->rx_ba_sessions = 0;
 VAR_2->fwrt.dump.conf = VAR_0;
 VAR_2->monitor_on = 0;


 FUNC_3(VAR_2);
}
