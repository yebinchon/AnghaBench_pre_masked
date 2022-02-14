
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_vif {int self_ucast_dpu_sign; int bss_index; } ;
struct wcn36xx_sta {int bss_dpu_desc_index; int bss_sta_index; } ;
struct wcn36xx_hal_config_bss_rsp_params {scalar_t__ status; int ucast_dpu_signature; int dpu_desc_index; int bss_sta_index; int bss_index; int tx_mgmt_power; int mac; int bss_bcast_sta_idx; int bss_self_sta_index; } ;
struct wcn36xx_hal_config_bss_rsp_msg {struct wcn36xx_hal_config_bss_rsp_params bss_rsp_params; } ;
struct wcn36xx {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct wcn36xx_sta* FUNC_1 (struct ieee80211_sta*) ;
 struct wcn36xx_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct wcn36xx *VAR_4,
          struct ieee80211_vif *VAR_5,
          struct ieee80211_sta *VAR_6,
          void *VAR_7,
          size_t VAR_8)
{
 struct wcn36xx_hal_config_bss_rsp_msg *VAR_9;
 struct wcn36xx_hal_config_bss_rsp_params *VAR_10;
 struct wcn36xx_vif *VAR_11 = FUNC_2(VAR_5);

 if (VAR_8 < sizeof(*VAR_9))
  return -VAR_0;

 VAR_9 = (struct wcn36xx_hal_config_bss_rsp_msg *)VAR_7;
 VAR_10 = &VAR_9->bss_rsp_params;

 if (VAR_10->status != VAR_3) {
  FUNC_3("hal config bss response failure: %d\n",
        VAR_10->status);
  return -VAR_1;
 }

 FUNC_0(VAR_2,
      "hal config bss rsp status %d bss_idx %d dpu_desc_index %d"
      " sta_idx %d self_idx %d bcast_idx %d mac %pM"
      " power %d ucast_dpu_signature %d\n",
      VAR_10->status, VAR_10->bss_index, VAR_10->dpu_desc_index,
      VAR_10->bss_sta_index, VAR_10->bss_self_sta_index,
      VAR_10->bss_bcast_sta_idx, VAR_10->mac,
      VAR_10->tx_mgmt_power, VAR_10->ucast_dpu_signature);

 VAR_11->bss_index = VAR_10->bss_index;

 if (VAR_6) {
  struct wcn36xx_sta *VAR_12 = FUNC_1(VAR_6);
  VAR_12->bss_sta_index = VAR_10->bss_sta_index;
  VAR_12->bss_dpu_desc_index = VAR_10->dpu_desc_index;
 }

 VAR_11->self_ucast_dpu_sign = VAR_10->ucast_dpu_signature;

 return 0;
}
