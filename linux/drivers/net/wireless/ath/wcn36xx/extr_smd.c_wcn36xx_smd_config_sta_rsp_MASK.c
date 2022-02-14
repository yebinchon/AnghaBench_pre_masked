
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_sta {int ucast_dpu_sign; int dpu_desc_index; int sta_index; } ;
struct config_sta_rsp_params {scalar_t__ status; int p2p; int uc_ucast_sig; int bssid_index; int sta_index; int dpu_index; } ;
struct wcn36xx_hal_config_sta_rsp_msg {struct config_sta_rsp_params params; } ;
struct wcn36xx {int dummy; } ;
struct ieee80211_sta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,int ,int ,int ,int ) ;
 struct wcn36xx_sta* FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct wcn36xx *VAR_4,
          struct ieee80211_sta *VAR_5,
          void *VAR_6,
          size_t VAR_7)
{
 struct wcn36xx_hal_config_sta_rsp_msg *VAR_8;
 struct config_sta_rsp_params *VAR_9;
 struct wcn36xx_sta *VAR_10 = FUNC_1(VAR_5);

 if (VAR_7 < sizeof(*VAR_8))
  return -VAR_0;

 VAR_8 = (struct wcn36xx_hal_config_sta_rsp_msg *)VAR_6;
 VAR_9 = &VAR_8->params;

 if (VAR_9->status != VAR_3) {
  FUNC_2("hal config sta response failure: %d\n",
        VAR_9->status);
  return -VAR_1;
 }

 VAR_10->sta_index = VAR_9->sta_index;
 VAR_10->dpu_desc_index = VAR_9->dpu_index;
 VAR_10->ucast_dpu_sign = VAR_9->uc_ucast_sig;

 FUNC_0(VAR_2,
      "hal config sta rsp status %d sta_index %d bssid_index %d uc_ucast_sig %d p2p %d\n",
      VAR_9->status, VAR_9->sta_index, VAR_9->bssid_index,
      VAR_9->uc_ucast_sig, VAR_9->p2p);

 return 0;
}
