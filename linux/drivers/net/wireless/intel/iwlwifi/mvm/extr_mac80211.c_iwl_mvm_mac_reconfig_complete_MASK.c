
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ieee80211_reconfig_type { ____Placeholder_ieee80211_reconfig_type } ieee80211_reconfig_type ;




 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_mvm*) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_hw *VAR_0,
         enum ieee80211_reconfig_type VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 129:
  FUNC_1(VAR_2);
  break;
 case 128:
  break;
 }
}
