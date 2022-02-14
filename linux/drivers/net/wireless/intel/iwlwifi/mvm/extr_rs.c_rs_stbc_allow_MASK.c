
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {int stbc_capable; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,struct ieee80211_sta*) ;

__attribute__((used)) static bool FUNC_1(struct iwl_mvm *VAR_0, struct ieee80211_sta *VAR_1,
     struct iwl_lq_sta *VAR_2)
{



 if (!VAR_2->stbc_capable)
  return 0;

 if (!FUNC_0(VAR_0, VAR_1))
  return 0;

 return 1;
}
