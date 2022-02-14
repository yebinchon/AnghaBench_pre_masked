
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_mc_iter_data {struct iwl_mvm* mvm; } ;
struct iwl_mvm {int hw; int mcast_filter_cmd; int mutex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,struct iwl_mvm_mc_iter_data*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_2)
{
 struct iwl_mvm_mc_iter_data VAR_3 = {
  .mvm = VAR_2,
 };

 FUNC_2(&VAR_2->mutex);

 if (FUNC_0(!VAR_2->mcast_filter_cmd))
  return;

 FUNC_1(
  VAR_2->hw, VAR_0,
  VAR_1, &VAR_3);
}
