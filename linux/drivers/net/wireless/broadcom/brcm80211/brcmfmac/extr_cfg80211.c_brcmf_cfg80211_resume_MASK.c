
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct brcmf_if {int ndev; } ;
struct TYPE_2__ {int active; int nd_enabled; int pre_pmmode; } ;
struct brcmf_cfg80211_info {TYPE_1__ wowl; int pub; int wiphy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct brcmf_if*,char*,int *,int ,int *,int ) ;
 int FUNC_2 (struct brcmf_if*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct brcmf_if*,int ) ;
 int FUNC_5 (struct brcmf_if*,int ,int ) ;
 int FUNC_6 (struct brcmf_if*,char*,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_4 ;
 int FUNC_9 (struct wiphy*,struct brcmf_if*) ;
 struct net_device* FUNC_10 (struct brcmf_cfg80211_info*) ;
 struct brcmf_if* FUNC_11 (struct net_device*) ;
 struct brcmf_cfg80211_info* FUNC_12 (struct wiphy*) ;

__attribute__((used)) static s32 FUNC_13(struct wiphy *VAR_5)
{
 struct brcmf_cfg80211_info *VAR_6 = FUNC_12(VAR_5);
 struct net_device *VAR_7 = FUNC_10(VAR_6);
 struct brcmf_if *VAR_8 = FUNC_11(VAR_7);

 FUNC_3(VAR_3, "Enter\n");

 if (VAR_6->wowl.active) {
  FUNC_9(VAR_5, VAR_8);
  FUNC_6(VAR_8, "wowl_clear", 0);
  FUNC_1(VAR_8, "clr", ((void*)0), 0, ((void*)0), 0);
  if (!FUNC_4(VAR_8, VAR_2))
   FUNC_2(VAR_8, 1);
  FUNC_5(VAR_8, VAR_0,
          VAR_6->wowl.pre_pmmode);
  VAR_6->wowl.active = 0;
  if (VAR_6->wowl.nd_enabled) {
   FUNC_0(VAR_6->wiphy, VAR_8->ndev, 0);
   FUNC_8(VAR_6->pub, VAR_1);
   FUNC_7(VAR_6->pub, VAR_1,
         VAR_4);
   VAR_6->wowl.nd_enabled = 0;
  }
 }
 return 0;
}
