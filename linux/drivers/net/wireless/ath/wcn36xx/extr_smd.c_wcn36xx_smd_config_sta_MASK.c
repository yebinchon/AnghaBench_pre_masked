
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_config_sta_params {int aid; int mac; int type; int bssid; int bssid_index; int sta_index; int action; } ;
struct wcn36xx_hal_config_sta_req_msg {TYPE_1__ header; struct wcn36xx_hal_config_sta_params sta_params; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (struct wcn36xx_hal_config_sta_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_config_sta_req_msg) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct wcn36xx*,int,int,int,int) ;
 int FUNC_7 (struct wcn36xx*,struct ieee80211_sta*,int ,int ) ;
 int FUNC_8 (struct wcn36xx*,struct wcn36xx_hal_config_sta_req_msg*) ;
 int FUNC_9 (struct wcn36xx*,int ) ;
 int FUNC_10 (struct wcn36xx*,struct ieee80211_vif*,struct ieee80211_sta*,struct wcn36xx_hal_config_sta_params*) ;

int FUNC_11(struct wcn36xx *VAR_2, struct ieee80211_vif *VAR_3,
      struct ieee80211_sta *VAR_4)
{
 struct wcn36xx_hal_config_sta_req_msg VAR_5;
 struct wcn36xx_hal_config_sta_params *VAR_6;
 int VAR_7;

 FUNC_2(&VAR_2->hal_mutex);
 FUNC_0(VAR_5, VAR_1);

 VAR_6 = &VAR_5.sta_params;

 FUNC_10(VAR_2, VAR_3, VAR_4, VAR_6);

 if (!FUNC_6(VAR_2, 1, 2, 2, 24)) {
  VAR_7 = FUNC_8(VAR_2, &VAR_5);
 } else {
  FUNC_1(VAR_2->hal_buf, VAR_5);

  FUNC_4(VAR_0,
       "hal config sta action %d sta_index %d bssid_index %d bssid %pM type %d mac %pM aid %d\n",
       VAR_6->action, VAR_6->sta_index,
       VAR_6->bssid_index, VAR_6->bssid,
       VAR_6->type, VAR_6->mac, VAR_6->aid);

  VAR_7 = FUNC_9(VAR_2, VAR_5.header.len);
 }
 if (VAR_7) {
  FUNC_5("Sending hal_config_sta failed\n");
  goto out;
 }
 VAR_7 = FUNC_7(VAR_2,
      VAR_4,
      VAR_2->hal_buf,
      VAR_2->hal_rsp_len);
 if (VAR_7) {
  FUNC_5("hal_config_sta response failed err=%d\n", VAR_7);
  goto out;
 }
out:
 FUNC_3(&VAR_2->hal_mutex);
 return VAR_7;
}
