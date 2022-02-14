
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcmf_if {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;
struct brcmf_cfg80211_vif {TYPE_1__ wdev; } ;
struct brcmf_cfg80211_info {int pub; struct brcmf_btcoex_info* btcoex; } ;
struct brcmf_btcoex_info {struct brcmf_cfg80211_vif* vif; int bt_state; int timeout; } ;
typedef enum brcmf_btcoex_mode { ____Placeholder_brcmf_btcoex_mode } brcmf_btcoex_mode ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_btcoex_info*) ;
 int FUNC_1 (struct brcmf_btcoex_info*) ;
 int FUNC_2 (struct brcmf_if*) ;
 int FUNC_3 (int ,char*) ;
 struct brcmf_if* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 struct brcmf_cfg80211_info* FUNC_6 (int ) ;

int FUNC_7(struct brcmf_cfg80211_vif *VAR_3,
     enum brcmf_btcoex_mode VAR_4, u16 VAR_5)
{
 struct brcmf_cfg80211_info *VAR_6 = FUNC_6(VAR_3->wdev.wiphy);
 struct brcmf_btcoex_info *VAR_7 = VAR_6->btcoex;
 struct brcmf_if *VAR_8 = FUNC_4(VAR_6->pub, 0);

 switch (VAR_4) {
 case 129:
  FUNC_3(VAR_2, "DHCP session starts\n");
  if (VAR_7->bt_state != VAR_0)
   return -VAR_1;

  if (FUNC_2(VAR_8)) {
   VAR_7->timeout = FUNC_5(VAR_5);
   VAR_7->vif = VAR_3;
   FUNC_1(VAR_7);
  }
  break;

 case 128:
  FUNC_3(VAR_2, "DHCP session ends\n");
  if (VAR_7->bt_state != VAR_0 &&
      VAR_3 == VAR_7->vif) {
   FUNC_0(VAR_7);
  }
  break;
 default:
  FUNC_3(VAR_2, "Unknown mode, ignored\n");
 }
 return 0;
}
