
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_probe_resp_data_notif {int csa_counter; int noa_active; int mac_id; } ;
struct TYPE_4__ {int len_low; } ;
struct TYPE_6__ {TYPE_1__ noa_attr; } ;
struct iwl_probe_resp_data {int noa_len; TYPE_3__ notif; } ;
struct iwl_mvm_vif {int probe_resp_data; TYPE_2__* mvm; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_vendor_ie {int dummy; } ;
struct ieee80211_p2p_noa_desc {int dummy; } ;
struct TYPE_5__ {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_vif*,int) ;
 struct ieee80211_vif* FUNC_3 (struct iwl_mvm*,int ,int) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (struct iwl_rx_packet*) ;
 int FUNC_6 (struct iwl_probe_resp_data*,int ) ;
 struct iwl_probe_resp_data* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,struct iwl_probe_resp_data_notif*,int) ;
 int FUNC_11 (int ,struct iwl_probe_resp_data*) ;
 struct iwl_probe_resp_data* FUNC_12 (int ,int ) ;
 int VAR_2 ;
 struct iwl_rx_packet* FUNC_13 (struct iwl_rx_cmd_buffer*) ;

void FUNC_14(struct iwl_mvm *VAR_3,
       struct iwl_rx_cmd_buffer *VAR_4)
{
 struct iwl_rx_packet *VAR_5 = FUNC_13(VAR_4);
 struct iwl_probe_resp_data_notif *VAR_6 = (void *)VAR_5->data;
 struct iwl_probe_resp_data *VAR_7, *VAR_8;
 int VAR_9 = FUNC_5(VAR_5);
 u32 VAR_10 = FUNC_8(VAR_6->mac_id);
 struct ieee80211_vif *VAR_11;
 struct iwl_mvm_vif *VAR_12;

 if (FUNC_1(VAR_9 < sizeof(*VAR_6)))
  return;

 FUNC_0(VAR_3, "Probe response data notif: noa %d, csa %d\n",
         VAR_6->noa_active, VAR_6->csa_counter);

 VAR_11 = FUNC_3(VAR_3, VAR_10, 0);
 if (!VAR_11)
  return;

 VAR_12 = FUNC_4(VAR_11);

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return;

 FUNC_10(&VAR_8->notif, VAR_6, sizeof(VAR_8->notif));


 VAR_8->noa_len = sizeof(struct ieee80211_vendor_ie) +
       sizeof(VAR_8->notif.noa_attr) - 1;





 if (VAR_8->notif.noa_attr.len_low ==
     sizeof(struct ieee80211_p2p_noa_desc) + 2)
  VAR_8->noa_len -= sizeof(struct ieee80211_p2p_noa_desc);

 VAR_7 = FUNC_12(VAR_12->probe_resp_data,
     FUNC_9(&VAR_12->mvm->mutex));
 FUNC_11(VAR_12->probe_resp_data, VAR_8);

 if (VAR_7)
  FUNC_6(VAR_7, VAR_2);

 if (VAR_6->csa_counter != VAR_1 &&
     VAR_6->csa_counter >= 1)
  FUNC_2(VAR_11, VAR_6->csa_counter);
}
