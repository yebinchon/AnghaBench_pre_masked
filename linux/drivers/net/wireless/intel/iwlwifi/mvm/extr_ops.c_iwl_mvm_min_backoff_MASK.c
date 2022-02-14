
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct iwl_pwr_tx_backoff {scalar_t__ pwr; int backoff; } ;
struct iwl_mvm {int dev; TYPE_1__* cfg; } ;
struct TYPE_2__ {struct iwl_pwr_tx_backoff* pwr_tx_backoffs; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct iwl_mvm *VAR_0)
{
 const struct iwl_pwr_tx_backoff *VAR_1 = VAR_0->cfg->pwr_tx_backoffs;
 u64 VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_0(VAR_0->dev);

 while (VAR_1->pwr) {
  if (VAR_2 >= VAR_1->pwr)
   return VAR_1->backoff;

  VAR_1++;
 }

 return 0;
}
