
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, "enter\n");

 FUNC_3(&VAR_2->mutex);
 FUNC_2(VAR_2);
 FUNC_4(&VAR_2->mutex);

 FUNC_0(VAR_2, "leave\n");
 return 0;
}
