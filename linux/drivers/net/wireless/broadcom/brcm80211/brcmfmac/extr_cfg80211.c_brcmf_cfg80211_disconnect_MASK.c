
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct brcmf_scb_val_le {int val; int ea; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {TYPE_1__* vif; } ;
struct brcmf_cfg80211_profile {int bssid; } ;
struct brcmf_cfg80211_info {struct brcmf_pub* pub; } ;
typedef int scbval ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int sme_state; struct brcmf_cfg80211_profile profile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct brcmf_pub*,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct brcmf_if*,int ,struct brcmf_scb_val_le*,int) ;
 int FUNC_3 (struct net_device*,int ,int *,int ,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int ) ;
 struct brcmf_if* FUNC_8 (struct net_device*) ;
 struct brcmf_cfg80211_info* FUNC_9 (struct wiphy*) ;

__attribute__((used)) static s32
FUNC_10(struct wiphy *VAR_7, struct net_device *VAR_8,
         u16 VAR_9)
{
 struct brcmf_cfg80211_info *VAR_10 = FUNC_9(VAR_7);
 struct brcmf_if *VAR_11 = FUNC_8(VAR_8);
 struct brcmf_cfg80211_profile *VAR_12 = &VAR_11->vif->profile;
 struct brcmf_pub *VAR_13 = VAR_10->pub;
 struct brcmf_scb_val_le VAR_14;
 s32 VAR_15 = 0;

 FUNC_1(VAR_6, "Enter. Reason code = %d\n", VAR_9);
 if (!FUNC_4(VAR_11->vif))
  return -VAR_3;

 FUNC_5(VAR_1, &VAR_11->vif->sme_state);
 FUNC_5(VAR_2, &VAR_11->vif->sme_state);
 FUNC_3(VAR_8, VAR_9, ((void*)0), 0, 1, VAR_5);

 FUNC_7(&VAR_14.ea, &VAR_12->bssid, VAR_4);
 VAR_14.val = FUNC_6(VAR_9);
 VAR_15 = FUNC_2(VAR_11, VAR_0,
         &VAR_14, sizeof(VAR_14));
 if (VAR_15)
  FUNC_0(VAR_13, "error (%d)\n", VAR_15);

 FUNC_1(VAR_6, "Exit\n");
 return VAR_15;
}
