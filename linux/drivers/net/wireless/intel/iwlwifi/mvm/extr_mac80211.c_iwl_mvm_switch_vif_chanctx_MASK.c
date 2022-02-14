
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int dummy; } ;
struct ieee80211_vif_chanctx_switch {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ieee80211_chanctx_switch_mode { ____Placeholder_ieee80211_chanctx_switch_mode } ieee80211_chanctx_switch_mode ;




 int VAR_0 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif_chanctx_switch*) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif_chanctx_switch*) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_1,
          struct ieee80211_vif_chanctx_switch *VAR_2,
          int VAR_3,
          enum ieee80211_chanctx_switch_mode VAR_4)
{
 struct iwl_mvm *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;


 if (VAR_3 > 1)
  return -VAR_0;

 switch (VAR_4) {
 case 128:
  VAR_6 = FUNC_2(VAR_5, VAR_2);
  break;
 case 129:
  VAR_6 = FUNC_1(VAR_5, VAR_2);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
