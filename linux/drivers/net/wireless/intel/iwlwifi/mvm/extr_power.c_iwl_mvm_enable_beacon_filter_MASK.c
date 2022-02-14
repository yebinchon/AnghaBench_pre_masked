
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct iwl_beacon_filter_cmd {int bf_enable_beacon_filter; int member_0; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*,struct iwl_beacon_filter_cmd*,int ) ;
 int FUNC_1 (int) ;

int FUNC_2(struct iwl_mvm *VAR_1,
     struct ieee80211_vif *VAR_2,
     u32 VAR_3)
{
 struct iwl_beacon_filter_cmd VAR_4 = {
  VAR_0,
  .bf_enable_beacon_filter = FUNC_1(1),
 };

 return FUNC_0(VAR_1, VAR_2, &VAR_4, VAR_3);
}
