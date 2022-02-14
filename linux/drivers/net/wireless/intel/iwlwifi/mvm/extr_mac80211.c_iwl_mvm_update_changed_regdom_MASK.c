
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {TYPE_1__* hw; } ;
struct ieee80211_regdomain {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 int FUNC_0 (struct ieee80211_regdomain*) ;
 struct ieee80211_regdomain* FUNC_1 (struct iwl_mvm*,int*) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (struct ieee80211_regdomain*) ;
 int FUNC_4 (int ,struct ieee80211_regdomain*) ;

void FUNC_5(struct iwl_mvm *VAR_0)
{
 bool VAR_1;
 struct ieee80211_regdomain *VAR_2;

 if (!FUNC_2(VAR_0))
  return;

 VAR_2 = FUNC_1(VAR_0, &VAR_1);
 if (!FUNC_0(VAR_2)) {

  if (VAR_1)
   FUNC_4(VAR_0->hw->wiphy, VAR_2);

  FUNC_3(VAR_2);
 }
}
