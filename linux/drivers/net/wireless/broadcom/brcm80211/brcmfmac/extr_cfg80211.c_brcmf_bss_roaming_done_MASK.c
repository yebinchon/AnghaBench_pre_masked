
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct net_device {int dummy; } ;
struct ieee80211_supported_band {int band; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_roam_info {int resp_ie_len; int resp_ie; int req_ie_len; int req_ie; int bssid; struct ieee80211_channel* channel; } ;
struct brcmu_chan {scalar_t__ band; int control_ch_num; int chspec; } ;
struct brcmf_if {TYPE_2__* vif; } ;
struct brcmf_event_msg {int addr; } ;
struct brcmf_cfg80211_profile {int bssid; } ;
struct TYPE_3__ {int (* decchspec ) (struct brcmu_chan*) ;} ;
struct brcmf_cfg80211_info {TYPE_1__ d11inf; } ;
struct brcmf_cfg80211_connect_info {int resp_ie_len; int resp_ie; int req_ie_len; int req_ie; } ;
struct brcmf_bss_info_le {int chanspec; } ;
typedef int s32 ;
typedef int __le32 ;
struct TYPE_4__ {int sme_state; struct brcmf_cfg80211_profile profile; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_if*,int ,int *,int ) ;
 int FUNC_2 (struct brcmf_cfg80211_info*,struct brcmf_if*) ;
 int FUNC_3 (struct brcmf_cfg80211_info*,struct brcmf_if*) ;
 int FUNC_4 (struct net_device*,struct cfg80211_roam_info*,int ) ;
 struct brcmf_cfg80211_connect_info* FUNC_5 (struct brcmf_cfg80211_info*) ;
 struct wiphy* FUNC_6 (struct brcmf_cfg80211_info*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 struct ieee80211_channel* FUNC_9 (struct wiphy*,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ) ;
 struct brcmf_if* FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (struct brcmu_chan*) ;

__attribute__((used)) static s32
FUNC_17(struct brcmf_cfg80211_info *VAR_11,
         struct net_device *VAR_12,
         const struct brcmf_event_msg *VAR_13)
{
 struct brcmf_if *VAR_14 = FUNC_14(VAR_12);
 struct brcmf_cfg80211_profile *VAR_15 = &VAR_14->vif->profile;
 struct brcmf_cfg80211_connect_info *VAR_16 = FUNC_5(VAR_11);
 struct wiphy *VAR_17 = FUNC_6(VAR_11);
 struct ieee80211_channel *VAR_18 = ((void*)0);
 struct ieee80211_supported_band *VAR_19;
 struct brcmf_bss_info_le *VAR_20;
 struct brcmu_chan VAR_21;
 struct cfg80211_roam_info VAR_22 = {};
 u32 VAR_23;
 s32 VAR_24 = 0;
 u8 *VAR_25;

 FUNC_0(VAR_9, "Enter\n");

 FUNC_2(VAR_11, VAR_14);
 FUNC_13(VAR_15->bssid, VAR_13->addr, VAR_5);
 FUNC_3(VAR_11, VAR_14);

 VAR_25 = FUNC_11(VAR_10, VAR_6);
 if (VAR_25 == ((void*)0)) {
  VAR_24 = -VAR_4;
  goto done;
 }


 *(__le32 *)VAR_25 = FUNC_7(VAR_10);
 VAR_24 = FUNC_1(VAR_14, VAR_0,
         VAR_25, VAR_10);

 if (VAR_24)
  goto done;

 VAR_20 = (struct brcmf_bss_info_le *)(VAR_25 + 4);
 VAR_21.chspec = FUNC_12(VAR_20->chanspec);
 VAR_11->d11inf.decchspec(&VAR_21);

 if (VAR_21.band == VAR_2)
  VAR_19 = VAR_17->bands[VAR_7];
 else
  VAR_19 = VAR_17->bands[VAR_8];

 VAR_23 = FUNC_8(VAR_21.control_ch_num, VAR_19->band);
 VAR_18 = FUNC_9(VAR_17, VAR_23);

done:
 FUNC_10(VAR_25);

 VAR_22.channel = VAR_18;
 VAR_22.bssid = VAR_15->bssid;
 VAR_22.req_ie = VAR_16->req_ie;
 VAR_22.req_ie_len = VAR_16->req_ie_len;
 VAR_22.resp_ie = VAR_16->resp_ie;
 VAR_22.resp_ie_len = VAR_16->resp_ie_len;

 FUNC_4(VAR_12, &VAR_22, VAR_6);
 FUNC_0(VAR_3, "Report roaming result\n");

 FUNC_15(VAR_1, &VAR_14->vif->sme_state);
 FUNC_0(VAR_9, "Exit\n");
 return VAR_24;
}
