
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scale_tbl_info {int rate; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {int lq; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,int *) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_sta*,struct iwl_lq_sta*,int *) ;

__attribute__((used)) static void FUNC_2(struct iwl_mvm *VAR_0,
          struct ieee80211_sta *VAR_1,
          struct iwl_lq_sta *VAR_2,
          struct iwl_scale_tbl_info *VAR_3)
{
 FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3->rate);
 FUNC_0(VAR_0, &VAR_2->lq);
}
