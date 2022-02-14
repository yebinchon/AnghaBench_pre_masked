
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct vif_params {int dummy; } ;
struct net_device {TYPE_2__* ieee80211_ptr; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int bsscfgidx; struct brcmf_cfg80211_vif* vif; } ;
struct TYPE_6__ {scalar_t__ iftype; } ;
struct brcmf_cfg80211_vif {TYPE_3__ wdev; } ;
struct TYPE_4__ {scalar_t__ p2pdev_dynamically; } ;
struct brcmf_cfg80211_info {TYPE_1__ p2p; struct brcmf_pub* pub; } ;
typedef int s32 ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_5__ {int iftype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;



 int VAR_8 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct brcmf_if*,int ,int) ;
 scalar_t__ FUNC_4 (struct brcmf_cfg80211_vif*) ;
 int FUNC_5 (struct brcmf_cfg80211_info*,int ) ;
 int FUNC_6 (struct brcmf_cfg80211_info*,struct brcmf_cfg80211_vif*,int) ;
 struct brcmf_if* FUNC_7 (struct net_device*) ;
 struct brcmf_cfg80211_info* FUNC_8 (struct wiphy*) ;

__attribute__((used)) static s32
FUNC_9(struct wiphy *VAR_9, struct net_device *VAR_10,
    enum nl80211_iftype VAR_11,
    struct vif_params *VAR_12)
{
 struct brcmf_cfg80211_info *VAR_13 = FUNC_8(VAR_9);
 struct brcmf_if *VAR_14 = FUNC_7(VAR_10);
 struct brcmf_cfg80211_vif *VAR_15 = VAR_14->vif;
 struct brcmf_pub *VAR_16 = VAR_13->pub;
 s32 VAR_17 = 0;
 s32 VAR_18 = 0;
 s32 VAR_19 = 0;

 FUNC_2(VAR_8, "Enter, bsscfgidx=%d, type=%d\n", VAR_14->bsscfgidx,
    VAR_11);
 if ((VAR_11 == 129) &&
     ((VAR_15->wdev.iftype == VAR_6) ||
      (VAR_15->wdev.iftype == 130) ||
      (VAR_15->wdev.iftype == VAR_7))) {
  FUNC_2(VAR_8, "Ignoring cmd for p2p if\n");
  if (VAR_13->p2p.p2pdev_dynamically)
   return -VAR_4;
  else
   return 0;
 }
 VAR_19 = FUNC_6(FUNC_8(VAR_9), VAR_15, VAR_11);
 if (VAR_19) {
  FUNC_0(VAR_16, "iface validation failed: err=%d\n", VAR_19);
  return VAR_19;
 }
 switch (VAR_11) {
 case 131:
 case 128:
  FUNC_0(VAR_16, "type (%d) : currently we do not support this type\n",
    VAR_11);
  return -VAR_4;
 case 133:
  VAR_17 = 0;
  break;
 case 129:
  VAR_17 = 1;
  break;
 case 132:
 case 130:
  VAR_18 = 1;
  break;
 default:
  VAR_19 = -VAR_3;
  goto done;
 }

 if (VAR_18) {
  if (VAR_11 == 130) {
   FUNC_2(VAR_5, "IF Type = P2P GO\n");
   VAR_19 = FUNC_5(VAR_13, VAR_1);
  }
  if (!VAR_19) {
   FUNC_2(VAR_5, "IF Type = AP\n");
  }
 } else {
  VAR_19 = FUNC_3(VAR_14, VAR_0, VAR_17);
  if (VAR_19) {
   FUNC_0(VAR_16, "WLC_SET_INFRA error (%d)\n", VAR_19);
   VAR_19 = -VAR_2;
   goto done;
  }
  FUNC_2(VAR_5, "IF Type = %s\n", FUNC_4(VAR_15) ?
     "Adhoc" : "Infra");
 }
 VAR_10->ieee80211_ptr->iftype = VAR_11;

 FUNC_1(&VAR_15->wdev);

done:
 FUNC_2(VAR_8, "Exit\n");

 return VAR_19;
}
