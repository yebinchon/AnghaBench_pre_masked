
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct brcmf_if {TYPE_2__* vif; int ifidx; TYPE_1__* drvr; struct net_device* ndev; } ;
struct brcmf_event_msg {scalar_t__ event_code; scalar_t__ addr; int flags; } ;
struct brcmf_cfg80211_profile {int bssid; } ;
struct brcmf_cfg80211_info {int vif_disabled; int channel; int wiphy; } ;
typedef int s32 ;
struct TYPE_7__ {int sme_state; struct brcmf_cfg80211_profile profile; } ;
struct TYPE_6__ {struct brcmf_cfg80211_info* config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct brcmf_cfg80211_info*,struct net_device*,struct brcmf_event_msg const*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct brcmf_cfg80211_info*,struct net_device*,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (struct brcmf_event_msg const*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,struct brcmf_event_msg const*) ;
 scalar_t__ FUNC_8 (struct brcmf_cfg80211_info*,struct brcmf_event_msg const*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (struct brcmf_event_msg const*) ;
 int FUNC_11 (struct brcmf_if*,int) ;
 int FUNC_12 (struct brcmf_cfg80211_info*,struct net_device*,struct brcmf_event_msg const*,void*) ;
 int FUNC_13 (TYPE_1__*,int ,int *) ;
 int FUNC_14 (struct net_device*,scalar_t__,struct ieee80211_channel*,int ) ;
 struct net_device* FUNC_15 (struct brcmf_cfg80211_info*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int *) ;
 struct ieee80211_channel* FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,scalar_t__,int ) ;
 int FUNC_20 (struct net_device*) ;
 int FUNC_21 (int ,int *) ;

__attribute__((used)) static s32
FUNC_22(struct brcmf_if *VAR_9,
       const struct brcmf_event_msg *VAR_10, void *VAR_11)
{
 struct brcmf_cfg80211_info *VAR_12 = VAR_9->drvr->config;
 struct net_device *VAR_13 = VAR_9->ndev;
 struct brcmf_cfg80211_profile *VAR_14 = &VAR_9->vif->profile;
 struct ieee80211_channel *VAR_15;
 s32 VAR_16 = 0;

 if ((VAR_10->event_code == VAR_0) ||
     (VAR_10->event_code == VAR_1) ||
     (VAR_10->event_code == VAR_2) ||
     ((VAR_10->event_code == VAR_3) && (!VAR_10->flags))) {
  FUNC_13(VAR_9->drvr, VAR_9->ifidx, (u8 *)VAR_10->addr);
 }

 if (FUNC_4(VAR_9->vif)) {
  VAR_16 = FUNC_12(VAR_12, VAR_13, VAR_10, VAR_11);
 } else if (FUNC_7(VAR_9->vif, VAR_10)) {
  FUNC_1(VAR_6, "Linkup\n");
  if (FUNC_5(VAR_9->vif)) {
   FUNC_2(VAR_12, VAR_13, VAR_10->addr);
   VAR_15 = FUNC_18(VAR_12->wiphy, VAR_12->channel);
   FUNC_19(VAR_14->bssid, VAR_10->addr, VAR_7);
   FUNC_14(VAR_13, VAR_10->addr, VAR_15, VAR_8);
   FUNC_16(VAR_5,
      &VAR_9->vif->sme_state);
   FUNC_21(VAR_4,
    &VAR_9->vif->sme_state);
  } else
   FUNC_0(VAR_12, VAR_13, VAR_10, 1);
  FUNC_11(VAR_9, 1);
 } else if (FUNC_6(VAR_10)) {
  FUNC_1(VAR_6, "Linkdown\n");
  if (!FUNC_5(VAR_9->vif)) {
   FUNC_0(VAR_12, VAR_13, VAR_10, 0);
   FUNC_9(VAR_9->vif,
     FUNC_10(VAR_10));
   FUNC_3(FUNC_20(VAR_13));
   if (VAR_13 != FUNC_15(VAR_12))
    FUNC_17(&VAR_12->vif_disabled);
   FUNC_11(VAR_9, 0);
  }
 } else if (FUNC_8(VAR_12, VAR_10)) {
  if (FUNC_5(VAR_9->vif))
   FUNC_16(VAR_5,
      &VAR_9->vif->sme_state);
  else
   FUNC_0(VAR_12, VAR_13, VAR_10, 0);
 }

 return VAR_16;
}
