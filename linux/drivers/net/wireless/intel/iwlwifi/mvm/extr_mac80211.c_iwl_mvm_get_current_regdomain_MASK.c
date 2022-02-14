
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {TYPE_1__* hw; } ;
struct ieee80211_regdomain {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_regdomain* FUNC_0 (int ,char*,int ,int*) ;
 scalar_t__ FUNC_1 (struct iwl_mvm*) ;

struct ieee80211_regdomain *FUNC_2(struct iwl_mvm *VAR_2,
         bool *VAR_3)
{
 return FUNC_0(VAR_2->hw->wiphy, "ZZ",
         FUNC_1(VAR_2) ?
         VAR_0 :
         VAR_1, VAR_3);
}
