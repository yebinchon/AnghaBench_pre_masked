
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm_eosp_notification {int sta_id; } ;
struct iwl_mvm {int * fw_id_to_mac_id; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (struct ieee80211_sta*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_sta*) ;
 size_t FUNC_3 (int ) ;
 struct ieee80211_sta* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct iwl_rx_packet* FUNC_7 (struct iwl_rx_cmd_buffer*) ;

void FUNC_8(struct iwl_mvm *VAR_1,
      struct iwl_rx_cmd_buffer *VAR_2)
{
 struct iwl_rx_packet *VAR_3 = FUNC_7(VAR_2);
 struct iwl_mvm_eosp_notification *VAR_4 = (void *)VAR_3->data;
 struct ieee80211_sta *VAR_5;
 u32 VAR_6 = FUNC_3(VAR_4->sta_id);

 if (FUNC_1(VAR_6 >= VAR_0))
  return;

 FUNC_5();
 VAR_5 = FUNC_4(VAR_1->fw_id_to_mac_id[VAR_6]);
 if (!FUNC_0(VAR_5))
  FUNC_2(VAR_5);
 FUNC_6();
}
