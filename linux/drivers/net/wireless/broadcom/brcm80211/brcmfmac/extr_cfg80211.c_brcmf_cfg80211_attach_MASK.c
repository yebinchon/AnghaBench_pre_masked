
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct wiphy {int features; TYPE_4__* wowlan; int flags; TYPE_3__** bands; int regulatory_flags; int reg_notifier; } ;
struct net_device {TYPE_1__* ieee80211_ptr; } ;
struct cfg80211_ops {int set_rekey_data; } ;
struct brcmf_pub {struct brcmf_cfg80211_info* config; struct wiphy* wiphy; } ;
struct brcmf_if {struct brcmf_cfg80211_vif* vif; } ;
struct TYPE_7__ {struct net_device* netdev; } ;
struct brcmf_cfg80211_vif {TYPE_1__ wdev; struct brcmf_if* ifp; } ;
struct TYPE_11__ {scalar_t__ io_type; } ;
struct brcmf_cfg80211_info {struct wiphy* wiphy; int p2p; struct brcmf_pub* pub; TYPE_5__ d11inf; int vif_list; int vif_event; } ;
typedef scalar_t__ s32 ;
struct TYPE_12__ {struct net_device* ndev; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_8__ {int cap; } ;
struct TYPE_9__ {TYPE_2__ ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct brcmf_cfg80211_vif*) ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct net_device*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct brcmf_pub*,char*,...) ;
 struct brcmf_cfg80211_vif* FUNC_4 (struct brcmf_cfg80211_info*,int ) ;
 scalar_t__ FUNC_5 (struct brcmf_cfg80211_info*) ;
 int FUNC_6 (struct brcmf_cfg80211_info*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (struct brcmf_cfg80211_info*) ;
 scalar_t__ FUNC_9 (struct brcmf_if*,int ) ;
 scalar_t__ FUNC_10 (struct brcmf_if*,int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (struct brcmf_if*,char*,int) ;
 int FUNC_12 (struct brcmf_cfg80211_vif*) ;
 int FUNC_13 (struct wiphy*) ;
 scalar_t__ FUNC_14 (struct brcmf_if*) ;
 int FUNC_15 (struct brcmf_pub*,int ,int ) ;
 TYPE_6__* FUNC_16 (struct brcmf_pub*,int ) ;
 int VAR_18 ;
 scalar_t__ FUNC_17 (struct brcmf_cfg80211_info*,int) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (struct brcmf_cfg80211_info*) ;
 int FUNC_20 (struct brcmf_cfg80211_info*) ;
 int VAR_19 ;
 scalar_t__ FUNC_21 (struct wiphy*,struct brcmf_if*) ;
 scalar_t__ FUNC_22 (struct brcmf_cfg80211_info*) ;
 int FUNC_23 (TYPE_5__*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct brcmf_cfg80211_info*) ;
 struct brcmf_cfg80211_info* FUNC_26 (int,int ) ;
 struct brcmf_if* FUNC_27 (struct net_device*) ;
 int FUNC_28 (struct wiphy*,int *) ;
 int FUNC_29 (struct wiphy*) ;
 scalar_t__ FUNC_30 (struct wiphy*) ;
 int FUNC_31 (struct wiphy*) ;
 int FUNC_32 (struct brcmf_cfg80211_info*) ;
 scalar_t__ FUNC_33 (struct brcmf_cfg80211_info*) ;

struct brcmf_cfg80211_info *FUNC_34(struct brcmf_pub *VAR_20,
        struct cfg80211_ops *VAR_21,
        bool VAR_22)
{
 struct wiphy *VAR_23 = VAR_20->wiphy;
 struct net_device *VAR_24 = FUNC_16(VAR_20, 0)->ndev;
 struct brcmf_cfg80211_info *VAR_25;
 struct brcmf_cfg80211_vif *VAR_26;
 struct brcmf_if *VAR_27;
 s32 VAR_28 = 0;
 s32 VAR_29;
 u16 *VAR_30 = ((void*)0);

 if (!VAR_24) {
  FUNC_3(VAR_20, "ndev is invalid\n");
  return ((void*)0);
 }

 VAR_25 = FUNC_26(sizeof(*VAR_25), VAR_6);
 if (!VAR_25) {
  FUNC_3(VAR_20, "Could not allocate wiphy device\n");
  return ((void*)0);
 }

 VAR_25->wiphy = VAR_23;
 VAR_25->pub = VAR_20;
 FUNC_24(&VAR_25->vif_event);
 FUNC_0(&VAR_25->vif_list);

 VAR_26 = FUNC_4(VAR_25, VAR_12);
 if (FUNC_1(VAR_26))
  goto wiphy_out;

 VAR_27 = FUNC_27(VAR_24);
 VAR_26->ifp = VAR_27;
 VAR_26->wdev.netdev = VAR_24;
 VAR_24->ieee80211_ptr = &VAR_26->wdev;
 FUNC_2(VAR_24, FUNC_29(VAR_25->wiphy));

 VAR_28 = FUNC_33(VAR_25);
 if (VAR_28) {
  FUNC_3(VAR_20, "Failed to init iwm_priv (%d)\n", VAR_28);
  FUNC_12(VAR_26);
  goto wiphy_out;
 }
 VAR_27->vif = VAR_26;


 VAR_28 = FUNC_10(VAR_27, VAR_0, &VAR_29);
 if (VAR_28) {
  FUNC_3(VAR_20, "Failed to get D11 version (%d)\n", VAR_28);
  goto priv_out;
 }
 VAR_25->d11inf.io_type = (u8)VAR_29;
 FUNC_23(&VAR_25->d11inf);




 VAR_20->config = VAR_25;

 VAR_28 = FUNC_21(VAR_23, VAR_27);
 if (VAR_28 < 0)
  goto priv_out;

 FUNC_7(VAR_8, "Registering custom regulatory\n");
 VAR_23->reg_notifier = VAR_16;
 VAR_23->regulatory_flags |= VAR_13;
 FUNC_28(VAR_23, &VAR_19);





 if (VAR_23->bands[VAR_9]) {
  VAR_30 = &VAR_23->bands[VAR_9]->ht_cap.cap;
  *VAR_30 |= VAR_7;
 }




 VAR_28 = FUNC_30(VAR_23);
 if (VAR_28 < 0) {
  FUNC_3(VAR_20, "Could not register wiphy device (%d)\n", VAR_28);
  goto priv_out;
 }

 VAR_28 = FUNC_22(VAR_25);
 if (VAR_28) {
  FUNC_3(VAR_20, "Setting wiphy bands failed (%d)\n", VAR_28);
  goto wiphy_unreg_out;
 }




 if (VAR_30 && (*VAR_30 & VAR_7)) {
  VAR_28 = FUNC_8(VAR_25);
  if (!VAR_28)
   VAR_28 = FUNC_11(VAR_27, "obss_coex",
            VAR_5);
  else
   *VAR_30 &= ~VAR_7;
 }

 VAR_28 = FUNC_14(VAR_27);
 if (VAR_28) {
  FUNC_3(VAR_20, "FWEH activation failed (%d)\n", VAR_28);
  goto wiphy_unreg_out;
 }

 VAR_28 = FUNC_17(VAR_25, VAR_22);
 if (VAR_28) {
  FUNC_3(VAR_20, "P2P initialisation failed (%d)\n", VAR_28);
  goto wiphy_unreg_out;
 }
 VAR_28 = FUNC_5(VAR_25);
 if (VAR_28) {
  FUNC_3(VAR_20, "BT-coex initialisation failed (%d)\n", VAR_28);
  FUNC_18(&VAR_25->p2p);
  goto wiphy_unreg_out;
 }
 VAR_28 = FUNC_19(VAR_25);
 if (VAR_28) {
  FUNC_3(VAR_20, "PNO initialisation failed (%d)\n", VAR_28);
  FUNC_6(VAR_25);
  FUNC_18(&VAR_25->p2p);
  goto wiphy_unreg_out;
 }

 if (FUNC_9(VAR_27, VAR_3)) {
  VAR_28 = FUNC_11(VAR_27, "tdls_enable", 1);
  if (VAR_28) {
   FUNC_7(VAR_8, "TDLS not enabled (%d)\n", VAR_28);
   VAR_23->flags &= ~VAR_14;
  } else {
   FUNC_15(VAR_25->pub, VAR_1,
         VAR_18);
  }
 }


 VAR_28 = FUNC_14(VAR_27);
 if (VAR_28) {
  FUNC_3(VAR_20, "FWEH activation failed (%d)\n", VAR_28);
  goto detach;
 }


 if (FUNC_9(VAR_27, VAR_2)) {
  VAR_23->features |= VAR_11;





 }

 return VAR_25;

detach:
 FUNC_20(VAR_25);
 FUNC_6(VAR_25);
 FUNC_18(&VAR_25->p2p);
wiphy_unreg_out:
 FUNC_31(VAR_25->wiphy);
priv_out:
 FUNC_32(VAR_25);
 FUNC_12(VAR_26);
 VAR_27->vif = ((void*)0);
wiphy_out:
 FUNC_13(VAR_23);
 FUNC_25(VAR_25);
 return ((void*)0);
}
