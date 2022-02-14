
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct iwl_tdls_channel_switch_notif {int status; int sta_id; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm_sta {struct ieee80211_vif* vif; } ;
struct TYPE_4__ {int dwork; } ;
struct iwl_mvm {TYPE_2__ tdls_cs; int mutex; int * fw_id_to_mac_id; } ;
struct TYPE_3__ {int dtim_period; int beacon_int; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_sta {int tdls; } ;


 scalar_t__ FUNC_0 (struct ieee80211_sta*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 struct iwl_mvm_sta* FUNC_3 (struct ieee80211_sta*) ;
 int FUNC_4 (struct iwl_mvm*,int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (unsigned int) ;
 struct ieee80211_sta* FUNC_10 (int ,int ) ;
 struct iwl_rx_packet* FUNC_11 (struct iwl_rx_cmd_buffer*) ;
 int VAR_3 ;

void FUNC_12(struct iwl_mvm *VAR_4, struct iwl_rx_cmd_buffer *VAR_5)
{
 struct iwl_rx_packet *VAR_6 = FUNC_11(VAR_5);
 struct iwl_tdls_channel_switch_notif *VAR_7 = (void *)VAR_6->data;
 struct ieee80211_sta *VAR_8;
 unsigned int VAR_9;
 struct iwl_mvm_sta *VAR_10;
 struct ieee80211_vif *VAR_11;
 u32 VAR_12 = FUNC_5(VAR_7->sta_id);

 FUNC_6(&VAR_4->mutex);


 if (!FUNC_5(VAR_7->status)) {
  FUNC_4(VAR_4, VAR_2);
  return;
 }

 if (FUNC_2(VAR_12 >= VAR_0))
  return;

 VAR_8 = FUNC_10(VAR_4->fw_id_to_mac_id[VAR_12],
     FUNC_7(&VAR_4->mutex));

 if (FUNC_0(VAR_8) || FUNC_2(!VAR_8->tdls))
  return;

 VAR_10 = FUNC_3(VAR_8);
 VAR_11 = VAR_10->vif;





 VAR_9 = FUNC_1(VAR_11->bss_conf.dtim_period * VAR_11->bss_conf.beacon_int);
 FUNC_8(VAR_3, &VAR_4->tdls_cs.dwork,
    FUNC_9(VAR_9));

 FUNC_4(VAR_4, VAR_1);
}
