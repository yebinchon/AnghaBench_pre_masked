
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac80211_hwsim_data {int mutex; int * hw_scan_vif; int * hw_scan_request; int * tmp_chan; int hw; int hw_scan; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int wiphy; struct mac80211_hwsim_data* priv; } ;
struct cfg80211_scan_info {int aborted; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct cfg80211_scan_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_0,
       struct ieee80211_vif *VAR_1)
{
 struct mac80211_hwsim_data *VAR_2 = VAR_0->priv;
 struct cfg80211_scan_info VAR_3 = {
  .aborted = 1,
 };

 FUNC_4(VAR_0->wiphy, "hwsim cancel_hw_scan\n");

 FUNC_0(&VAR_2->hw_scan);

 FUNC_2(&VAR_2->mutex);
 FUNC_1(VAR_2->hw, &VAR_3);
 VAR_2->tmp_chan = ((void*)0);
 VAR_2->hw_scan_request = ((void*)0);
 VAR_2->hw_scan_vif = ((void*)0);
 FUNC_3(&VAR_2->mutex);
}
