
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_mvm_vif {scalar_t__ ap_sta_id; } ;
struct TYPE_4__ {int bt_activity_grading; } ;
struct iwl_mvm {scalar_t__ bt_force_ant_mode; TYPE_3__* cfg; TYPE_1__ last_bt_notif; int mutex; } ;
struct TYPE_5__ {int bssid; } ;
struct ieee80211_vif {TYPE_2__ bss_conf; } ;
typedef enum ieee80211_rssi_event_data { ____Placeholder_ieee80211_rssi_event_data } ieee80211_rssi_event_data ;
struct TYPE_6__ {scalar_t__ bt_shared_single_ant; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ,char*) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_3 (struct iwl_mvm*,scalar_t__,int) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct iwl_mvm *VAR_6, struct ieee80211_vif *VAR_7,
      enum ieee80211_rssi_event_data VAR_8)
{
 struct iwl_mvm_vif *VAR_9 = FUNC_4(VAR_7);
 int VAR_10;

 FUNC_6(&VAR_6->mutex);


 if (FUNC_7(VAR_6->bt_force_ant_mode != VAR_1))
  return;





 if (VAR_9->ap_sta_id == VAR_3)
  return;


 if (FUNC_5(VAR_6->last_bt_notif.bt_activity_grading) == VAR_2)
  return;

 FUNC_0(VAR_6, "RSSI for %pM is now %s\n", VAR_7->bss_conf.bssid,
         VAR_8 == VAR_4 ? "HIGH" : "LOW");





 if (VAR_8 == VAR_5 || VAR_6->cfg->bt_shared_single_ant ||
     FUNC_2(VAR_6, VAR_7) == VAR_0)
  VAR_10 = FUNC_3(VAR_6, VAR_9->ap_sta_id,
        0);
 else
  VAR_10 = FUNC_3(VAR_6, VAR_9->ap_sta_id, 1);

 if (VAR_10)
  FUNC_1(VAR_6, "couldn't send BT_CONFIG HCMD upon RSSI event\n");
}
