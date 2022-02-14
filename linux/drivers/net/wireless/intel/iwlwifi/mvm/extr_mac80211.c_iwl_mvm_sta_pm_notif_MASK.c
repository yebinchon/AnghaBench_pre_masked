
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm_sta {int sleeping; TYPE_1__* vif; } ;
struct iwl_mvm_pm_state_notification {int type; size_t sta_id; } ;
struct iwl_mvm {int hw; int * fw_id_to_mac_id; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_sta*) ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,struct ieee80211_sta*) ;
 int FUNC_4 (struct ieee80211_sta*,int) ;
 int FUNC_5 (struct ieee80211_sta*) ;
 int FUNC_6 (struct ieee80211_sta*,int ) ;
 struct iwl_mvm_sta* FUNC_7 (struct ieee80211_sta*) ;
 struct ieee80211_sta* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 struct iwl_rx_packet* FUNC_11 (struct iwl_rx_cmd_buffer*) ;

void FUNC_12(struct iwl_mvm *VAR_4, struct iwl_rx_cmd_buffer *VAR_5)
{
 struct iwl_rx_packet *VAR_6 = FUNC_11(VAR_5);
 struct iwl_mvm_pm_state_notification *VAR_7 = (void *)VAR_6->data;
 struct ieee80211_sta *VAR_8;
 struct iwl_mvm_sta *VAR_9;
 bool VAR_10 = (VAR_7->type != 130);

 if (FUNC_2(VAR_7->sta_id >= FUNC_0(VAR_4->fw_id_to_mac_id)))
  return;

 FUNC_9();
 VAR_8 = FUNC_8(VAR_4->fw_id_to_mac_id[VAR_7->sta_id]);
 if (FUNC_2(FUNC_1(VAR_8))) {
  FUNC_10();
  return;
 }

 VAR_9 = FUNC_7(VAR_8);

 if (!VAR_9->vif ||
     VAR_9->vif->type != VAR_1) {
  FUNC_10();
  return;
 }

 if (VAR_9->sleeping != VAR_10) {
  VAR_9->sleeping = VAR_10;
  FUNC_3(VAR_4->hw,
   VAR_10 ? VAR_3 : VAR_2,
   VAR_8);
  FUNC_4(VAR_8, VAR_10);
 }

 if (VAR_10) {
  switch (VAR_7->type) {
  case 130:
  case 131:
   break;
  case 128:
   FUNC_6(VAR_8, VAR_0);
   break;
  case 129:
   FUNC_5(VAR_8);
   break;
  default:
   break;
  }
 }

 FUNC_10();
}
