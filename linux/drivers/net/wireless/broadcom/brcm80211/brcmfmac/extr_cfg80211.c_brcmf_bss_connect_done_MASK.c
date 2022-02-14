
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cfg80211_connect_resp_params {int resp_ie_len; int resp_ie; int req_ie_len; int req_ie; int bssid; int status; } ;
struct brcmf_if {TYPE_1__* vif; } ;
struct brcmf_event_msg {int dummy; } ;
struct brcmf_cfg80211_profile {int bssid; } ;
struct brcmf_cfg80211_info {int dummy; } ;
struct brcmf_cfg80211_connect_info {int resp_ie_len; int resp_ie; int req_ie_len; int req_ie; } ;
typedef int s32 ;
typedef int conn_params ;
struct TYPE_2__ {int sme_state; struct brcmf_cfg80211_profile profile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct brcmf_cfg80211_info*,struct brcmf_if*) ;
 int FUNC_2 (struct brcmf_cfg80211_info*,struct brcmf_if*) ;
 int FUNC_3 (struct net_device*,struct cfg80211_connect_resp_params*,int ) ;
 struct brcmf_cfg80211_connect_info* FUNC_4 (struct brcmf_cfg80211_info*) ;
 int FUNC_5 (struct cfg80211_connect_resp_params*,int ,int) ;
 struct brcmf_if* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static s32
FUNC_9(struct brcmf_cfg80211_info *VAR_7,
         struct net_device *VAR_8, const struct brcmf_event_msg *VAR_9,
         bool VAR_10)
{
 struct brcmf_if *VAR_11 = FUNC_6(VAR_8);
 struct brcmf_cfg80211_profile *VAR_12 = &VAR_11->vif->profile;
 struct brcmf_cfg80211_connect_info *VAR_13 = FUNC_4(VAR_7);
 struct cfg80211_connect_resp_params VAR_14;

 FUNC_0(VAR_4, "Enter\n");

 if (FUNC_8(VAR_1,
          &VAR_11->vif->sme_state)) {
  FUNC_5(&VAR_14, 0, sizeof(VAR_14));
  if (VAR_10) {
   FUNC_1(VAR_7, VAR_11);
   FUNC_2(VAR_7, VAR_11);
   FUNC_7(VAR_0,
    &VAR_11->vif->sme_state);
   VAR_14.status = VAR_6;
  } else {
   VAR_14.status = VAR_5;
  }
  VAR_14.bssid = VAR_12->bssid;
  VAR_14.req_ie = VAR_13->req_ie;
  VAR_14.req_ie_len = VAR_13->req_ie_len;
  VAR_14.resp_ie = VAR_13->resp_ie;
  VAR_14.resp_ie_len = VAR_13->resp_ie_len;
  FUNC_3(VAR_8, &VAR_14, VAR_3);
  FUNC_0(VAR_2, "Report connect result - connection %s\n",
     VAR_10 ? "succeeded" : "failed");
 }
 FUNC_0(VAR_4, "Exit\n");
 return 0;
}
