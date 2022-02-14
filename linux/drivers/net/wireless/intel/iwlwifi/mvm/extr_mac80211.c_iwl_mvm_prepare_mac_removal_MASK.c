
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int roc_done_wk; } ;
struct ieee80211_vif {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct iwl_mvm *VAR_1,
     struct ieee80211_vif *VAR_2)
{
 if (VAR_2->type == VAR_0) {





  FUNC_0(&VAR_1->roc_done_wk);
 }
}
