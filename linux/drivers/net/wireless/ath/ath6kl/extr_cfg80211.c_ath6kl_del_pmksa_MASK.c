
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct cfg80211_pmksa {int pmkid; int bssid; } ;
struct ath6kl_vif {int fw_vif_idx; } ;
struct ath6kl {int wmi; } ;


 struct ath6kl* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 struct ath6kl_vif* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0, struct net_device *VAR_1,
       struct cfg80211_pmksa *VAR_2)
{
 struct ath6kl *VAR_3 = FUNC_0(VAR_1);
 struct ath6kl_vif *VAR_4 = FUNC_2(VAR_1);

 return FUNC_1(VAR_3->wmi, VAR_4->fw_vif_idx, VAR_2->bssid,
           VAR_2->pmkid, 0);
}
