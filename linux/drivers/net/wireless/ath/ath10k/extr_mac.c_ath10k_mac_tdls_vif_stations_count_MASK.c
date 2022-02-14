
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ath10k_mac_tdls_iter_data {int num_tdls_stations; struct ieee80211_vif* curr_vif; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int ,struct ath10k_mac_tdls_iter_data*) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_1,
           struct ieee80211_vif *VAR_2)
{
 struct ath10k_mac_tdls_iter_data VAR_3 = {};

 VAR_3.curr_vif = VAR_2;

 FUNC_0(VAR_1,
       VAR_0,
       &VAR_3);
 return VAR_3.num_tdls_stations;
}
