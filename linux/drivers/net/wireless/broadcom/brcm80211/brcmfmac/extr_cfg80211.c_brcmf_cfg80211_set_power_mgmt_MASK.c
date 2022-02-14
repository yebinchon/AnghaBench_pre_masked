
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {TYPE_2__* vif; } ;
struct brcmf_cfg80211_info {int pwr_save; struct brcmf_pub* pub; } ;
typedef int s32 ;
struct TYPE_3__ {scalar_t__ iftype; } ;
struct TYPE_4__ {TYPE_1__ wdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct brcmf_pub*,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct brcmf_if*,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 struct brcmf_if* FUNC_4 (struct net_device*) ;
 struct brcmf_cfg80211_info* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static s32
FUNC_6(struct wiphy *VAR_7, struct net_device *VAR_8,
      bool VAR_9, s32 VAR_10)
{
 s32 VAR_11;
 s32 VAR_12 = 0;
 struct brcmf_cfg80211_info *VAR_13 = FUNC_5(VAR_7);
 struct brcmf_if *VAR_14 = FUNC_4(VAR_8);
 struct brcmf_pub *VAR_15 = VAR_13->pub;

 FUNC_1(VAR_6, "Enter\n");
 VAR_13->pwr_save = VAR_9;
 if (!FUNC_3(VAR_14->vif)) {

  FUNC_1(VAR_2, "Device is not ready, storing the value in cfg_info struct\n");
  goto done;
 }

 VAR_11 = VAR_9 ? VAR_4 : VAR_5;

 if (VAR_14->vif->wdev.iftype == VAR_3) {
  FUNC_1(VAR_2, "Do not enable power save for P2P clients\n");
  VAR_11 = VAR_5;
 }
 FUNC_1(VAR_2, "power save %s\n", (VAR_11 ? "enabled" : "disabled"));

 VAR_12 = FUNC_2(VAR_14, VAR_0, VAR_11);
 if (VAR_12) {
  if (VAR_12 == -VAR_1)
   FUNC_0(VAR_15, "net_device is not ready yet\n");
  else
   FUNC_0(VAR_15, "error (%d)\n", VAR_12);
 }
done:
 FUNC_1(VAR_6, "Exit\n");
 return VAR_12;
}
