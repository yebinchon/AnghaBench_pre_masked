
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_tdls_config_res {int dummy; } ;
struct iwl_tdls_config_cmd {int tdls_peer_count; TYPE_1__* sta_info; void* tx_to_ap_ssn; void* tx_to_ap_tid; void* id_and_color; } ;
struct iwl_rx_packet {int dummy; } ;
struct iwl_mvm_vif {int color; int id; } ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; } ;
struct iwl_host_cmd {struct iwl_rx_packet* resp_pkt; int len; int data; int flags; int id; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ tdls_initiator; int tdls; } ;
struct TYPE_2__ {int sta_id; void* is_initiator; void* tx_to_peer_ssn; void* tx_to_peer_tid; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct ieee80211_sta*) ;
 int FUNC_3 (struct iwl_mvm*,char*,int) ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct iwl_host_cmd*) ;
 int FUNC_8 (struct iwl_mvm*,struct iwl_host_cmd*) ;
 struct iwl_mvm_vif* FUNC_9 (struct ieee80211_vif*) ;
 int FUNC_10 (struct iwl_rx_packet*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct ieee80211_sta* FUNC_13 (int ,int ) ;

__attribute__((used)) static void FUNC_14(struct iwl_mvm *VAR_3, struct ieee80211_vif *VAR_4)
{
 struct iwl_rx_packet *VAR_5;
 struct iwl_tdls_config_res *VAR_6;
 struct iwl_tdls_config_cmd VAR_7 = {};
 struct iwl_host_cmd VAR_8 = {
  .id = VAR_2,
  .flags = VAR_0,
  .data = &VAR_7, 
  .len = sizeof(struct iwl_tdls_config_cmd), 
 };
 struct ieee80211_sta *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 struct iwl_mvm_vif *VAR_13 = FUNC_9(VAR_4);

 FUNC_11(&VAR_3->mutex);

 VAR_7.id_and_color =
  FUNC_6(FUNC_1(VAR_13->id, VAR_13->color));
 VAR_7.tx_to_ap_tid = VAR_1;
 VAR_7.tx_to_ap_ssn = FUNC_5(0);




 VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3->fw_id_to_mac_id); VAR_11++) {
  VAR_9 = FUNC_13(VAR_3->fw_id_to_mac_id[VAR_11],
      FUNC_12(&VAR_3->mutex));
  if (FUNC_2(VAR_9) || !VAR_9->tdls)
   continue;

  VAR_7.sta_info[VAR_12].sta_id = VAR_11;
  VAR_7.sta_info[VAR_12].tx_to_peer_tid =
       VAR_1;
  VAR_7.sta_info[VAR_12].tx_to_peer_ssn = FUNC_5(0);
  VAR_7.sta_info[VAR_12].is_initiator =
    FUNC_6(VAR_9->tdls_initiator ? 1 : 0);

  VAR_12++;
 }

 VAR_7.tdls_peer_count = VAR_12;
 FUNC_3(VAR_3, "send TDLS config to FW for %d peers\n", VAR_12);

 VAR_10 = FUNC_8(VAR_3, &VAR_8);
 if (FUNC_4(VAR_10))
  return;

 VAR_5 = VAR_8.resp_pkt;

 FUNC_4(FUNC_10(VAR_5) != sizeof(*VAR_6));



 FUNC_7(&VAR_8);
}
