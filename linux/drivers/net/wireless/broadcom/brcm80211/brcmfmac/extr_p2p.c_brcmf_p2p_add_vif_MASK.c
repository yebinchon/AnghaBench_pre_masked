
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct vif_params {int macaddr; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {TYPE_2__* vif; TYPE_3__* ndev; } ;
struct brcmf_cfg80211_vif {struct brcmf_if* ifp; } ;
struct TYPE_9__ {TYPE_1__* bss_idx; int int_addr; } ;
struct brcmf_cfg80211_info {TYPE_4__ p2p; struct brcmf_pub* pub; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
typedef enum brcmf_fil_p2p_if_types { ____Placeholder_brcmf_fil_p2p_if_types } brcmf_fil_p2p_if_types ;
struct TYPE_8__ {unsigned char name_assign_type; int name; } ;
struct TYPE_7__ {struct wireless_dev wdev; } ;
struct TYPE_6__ {struct brcmf_cfg80211_vif* vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct wireless_dev* FUNC_0 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct brcmf_cfg80211_vif*) ;



 size_t VAR_11 ;
 int FUNC_2 (struct brcmf_pub*,char*) ;
 struct brcmf_cfg80211_vif* FUNC_3 (struct brcmf_cfg80211_info*,int) ;
 int FUNC_4 (struct brcmf_cfg80211_info*,struct brcmf_cfg80211_vif*) ;
 scalar_t__ FUNC_5 (struct brcmf_cfg80211_info*) ;
 int FUNC_6 (struct brcmf_cfg80211_info*,int ,int ) ;
 int FUNC_7 (int ,char*,char const*,int) ;
 int FUNC_8 (struct brcmf_if*,int ,int ) ;
 int FUNC_9 (struct brcmf_if*,char*,int) ;
 int FUNC_10 (struct brcmf_cfg80211_vif*) ;
 int FUNC_11 (struct brcmf_if*,int) ;
 struct wireless_dev* FUNC_12 (TYPE_4__*,struct wiphy*,int ) ;
 int FUNC_13 (TYPE_4__*,struct brcmf_if*,int ,int) ;
 int FUNC_14 (struct brcmf_cfg80211_info*) ;
 int FUNC_15 (TYPE_3__*) ;
 struct brcmf_if* FUNC_16 (int ) ;
 int FUNC_17 (int ,char const*,int) ;
 struct brcmf_cfg80211_info* FUNC_18 (struct wiphy*) ;

struct wireless_dev *FUNC_19(struct wiphy *VAR_12, const char *VAR_13,
           unsigned char VAR_14,
           enum nl80211_iftype VAR_15,
           struct vif_params *VAR_16)
{
 struct brcmf_cfg80211_info *VAR_17 = FUNC_18(VAR_12);
 struct brcmf_if *VAR_18 = FUNC_16(FUNC_14(VAR_17));
 struct brcmf_pub *VAR_19 = VAR_17->pub;
 struct brcmf_cfg80211_vif *VAR_20;
 enum brcmf_fil_p2p_if_types VAR_21;
 int VAR_22;

 if (FUNC_5(VAR_17))
  return FUNC_0(-VAR_6);

 FUNC_7(VAR_10, "adding vif \"%s\" (type=%d)\n", VAR_13, VAR_15);

 switch (VAR_15) {
 case 130:
  VAR_21 = VAR_2;
  break;
 case 128:
  VAR_21 = VAR_3;
  break;
 case 129:
  return FUNC_12(&VAR_17->p2p, VAR_12,
            VAR_16->macaddr);
 default:
  return FUNC_0(-VAR_9);
 }

 VAR_20 = FUNC_3(VAR_17, VAR_15);
 if (FUNC_1(VAR_20))
  return (struct wireless_dev *)VAR_20;
 FUNC_4(VAR_17, VAR_20);

 VAR_22 = FUNC_13(&VAR_17->p2p, VAR_18, VAR_17->p2p.int_addr,
           VAR_21);
 if (VAR_22) {
  FUNC_4(VAR_17, ((void*)0));
  goto fail;
 }


 VAR_22 = FUNC_6(VAR_17, VAR_1,
         VAR_5);
 FUNC_4(VAR_17, ((void*)0));
 if (!VAR_22) {
  FUNC_2(VAR_19, "timeout occurred\n");
  VAR_22 = -VAR_7;
  goto fail;
 }


 VAR_18 = VAR_20->ifp;
 if (!VAR_18) {
  FUNC_2(VAR_19, "no if pointer provided\n");
  VAR_22 = -VAR_8;
  goto fail;
 }

 FUNC_17(VAR_18->ndev->name, VAR_13, sizeof(VAR_18->ndev->name) - 1);
 VAR_18->ndev->name_assign_type = VAR_14;
 VAR_22 = FUNC_11(VAR_18, 1);
 if (VAR_22) {
  FUNC_2(VAR_19, "Registering netdevice failed\n");
  FUNC_15(VAR_18->ndev);
  goto fail;
 }

 VAR_17->p2p.bss_idx[VAR_11].vif = VAR_20;

 FUNC_9(VAR_18, "roam_off", 1);
 if (VAR_21 == VAR_3) {

  FUNC_8(VAR_18, VAR_0,
          VAR_4);
 }
 return &VAR_18->vif->wdev;

fail:
 FUNC_10(VAR_20);
 return FUNC_0(VAR_22);
}
