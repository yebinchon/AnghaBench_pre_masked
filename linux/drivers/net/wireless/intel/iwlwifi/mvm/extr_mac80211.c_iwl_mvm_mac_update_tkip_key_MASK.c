
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {scalar_t__ hw_key_idx; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_key_conf*,struct ieee80211_sta*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_1,
     struct ieee80211_vif *VAR_2,
     struct ieee80211_key_conf *VAR_3,
     struct ieee80211_sta *VAR_4,
     u32 VAR_5, u16 *VAR_6)
{
 struct iwl_mvm *VAR_7 = FUNC_0(VAR_1);

 if (VAR_3->hw_key_idx == VAR_0)
  return;

 FUNC_1(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
