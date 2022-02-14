
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct vif_params {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {TYPE_1__* vif; TYPE_2__* ndev; } ;
struct brcmf_cfg80211_vif {struct brcmf_if* ifp; } ;
struct brcmf_cfg80211_info {struct brcmf_pub* pub; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {struct wireless_dev wdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wireless_dev* FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct brcmf_cfg80211_vif*) ;
 int VAR_6 ;
 int FUNC_2 (struct brcmf_pub*,char*) ;
 struct brcmf_cfg80211_vif* FUNC_3 (struct brcmf_cfg80211_info*,int ) ;
 int FUNC_4 (struct brcmf_cfg80211_info*,struct brcmf_cfg80211_vif*) ;
 int FUNC_5 (struct brcmf_if*) ;
 scalar_t__ FUNC_6 (struct brcmf_cfg80211_info*) ;
 int FUNC_7 (struct brcmf_cfg80211_info*,int ,int ) ;
 int FUNC_8 (int ,char*,char const*) ;
 int FUNC_9 (struct brcmf_cfg80211_vif*) ;
 int FUNC_10 (struct brcmf_if*,int) ;
 int FUNC_11 (struct brcmf_cfg80211_info*) ;
 int FUNC_12 (TYPE_2__*) ;
 struct brcmf_if* FUNC_13 (int ) ;
 int FUNC_14 (int ,char const*,int) ;
 struct brcmf_cfg80211_info* FUNC_15 (struct wiphy*) ;

__attribute__((used)) static
struct wireless_dev *FUNC_16(struct wiphy *VAR_7, const char *VAR_8,
          struct vif_params *VAR_9)
{
 struct brcmf_cfg80211_info *VAR_10 = FUNC_15(VAR_7);
 struct brcmf_if *VAR_11 = FUNC_13(FUNC_11(VAR_10));
 struct brcmf_pub *VAR_12 = VAR_10->pub;
 struct brcmf_cfg80211_vif *VAR_13;
 int VAR_14;

 if (FUNC_6(VAR_10))
  return FUNC_0(-VAR_2);

 FUNC_8(VAR_5, "Adding vif \"%s\"\n", VAR_8);

 VAR_13 = FUNC_3(VAR_10, VAR_6);
 if (FUNC_1(VAR_13))
  return (struct wireless_dev *)VAR_13;

 FUNC_4(VAR_10, VAR_13);

 VAR_14 = FUNC_5(VAR_11);
 if (VAR_14) {
  FUNC_4(VAR_10, ((void*)0));
  goto fail;
 }


 VAR_14 = FUNC_7(VAR_10, VAR_0,
         VAR_1);
 FUNC_4(VAR_10, ((void*)0));
 if (!VAR_14) {
  FUNC_2(VAR_12, "timeout occurred\n");
  VAR_14 = -VAR_3;
  goto fail;
 }


 VAR_11 = VAR_13->ifp;
 if (!VAR_11) {
  FUNC_2(VAR_12, "no if pointer provided\n");
  VAR_14 = -VAR_4;
  goto fail;
 }

 FUNC_14(VAR_11->ndev->name, VAR_8, sizeof(VAR_11->ndev->name) - 1);
 VAR_14 = FUNC_10(VAR_11, 1);
 if (VAR_14) {
  FUNC_2(VAR_12, "Registering netdevice failed\n");
  FUNC_12(VAR_11->ndev);
  goto fail;
 }

 return &VAR_11->vif->wdev;

fail:
 FUNC_9(VAR_13);
 return FUNC_0(VAR_14);
}
