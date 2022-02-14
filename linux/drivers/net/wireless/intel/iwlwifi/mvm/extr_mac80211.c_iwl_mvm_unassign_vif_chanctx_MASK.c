
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_chanctx_conf {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_chanctx_conf*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0,
      struct ieee80211_vif *VAR_1,
      struct ieee80211_chanctx_conf *VAR_2)
{
 struct iwl_mvm *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(&VAR_3->mutex);
 FUNC_1(VAR_3, VAR_1, VAR_2, 0);
 FUNC_3(&VAR_3->mutex);
}
