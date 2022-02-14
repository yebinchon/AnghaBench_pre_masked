
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_tx_resp_v3 {struct agg_tx_status* status; } ;
struct agg_tx_status {int dummy; } ;
struct iwl_mvm_tx_resp {struct agg_tx_status status; } ;
struct iwl_mvm {int dummy; } ;


 scalar_t__ FUNC_0 (struct iwl_mvm*) ;

__attribute__((used)) static inline struct agg_tx_status *
FUNC_1(struct iwl_mvm *VAR_0, void *VAR_1)
{
 if (FUNC_0(VAR_0))
  return &((struct iwl_mvm_tx_resp *)VAR_1)->status;
 else
  return ((struct iwl_mvm_tx_resp_v3 *)VAR_1)->status;
}
