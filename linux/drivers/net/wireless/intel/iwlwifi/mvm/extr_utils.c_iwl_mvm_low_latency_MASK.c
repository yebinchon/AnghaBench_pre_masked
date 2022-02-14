
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_low_latency_iter {int result; } ;
struct iwl_mvm {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct iwl_mvm_low_latency_iter*) ;
 int VAR_1 ;

bool FUNC_1(struct iwl_mvm *VAR_2)
{
 struct iwl_mvm_low_latency_iter VAR_3 = {};

 FUNC_0(
   VAR_2->hw, VAR_0,
   VAR_1, &VAR_3);

 return VAR_3.result;
}
