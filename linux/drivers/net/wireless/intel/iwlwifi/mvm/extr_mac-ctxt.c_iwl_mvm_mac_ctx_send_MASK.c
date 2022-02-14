
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int type; int p2p; } ;


 int VAR_0 ;





 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*,int ,int,int const*) ;

__attribute__((used)) static int FUNC_6(struct iwl_mvm *VAR_1, struct ieee80211_vif *VAR_2,
    u32 VAR_3, bool VAR_4,
    const u8 *VAR_5)
{
 switch (VAR_2->type) {
 case 128:
  return FUNC_5(VAR_1, VAR_2, VAR_3,
      VAR_4,
      VAR_5);
  break;
 case 131:
  if (!VAR_2->p2p)
   return FUNC_0(VAR_1, VAR_2, VAR_3);
  else
   return FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 case 130:
  return FUNC_3(VAR_1, VAR_2, VAR_3);
 case 129:
  return FUNC_4(VAR_1, VAR_2, VAR_3);
 case 132:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 default:
  break;
 }

 return -VAR_0;
}
