
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_rxq {int dummy; } ;
struct TYPE_2__ {scalar_t__ mq_rx_supported; } ;


 int FUNC_0 (struct iwl_trans*,struct iwl_rxq*) ;
 int FUNC_1 (struct iwl_trans*,struct iwl_rxq*) ;

__attribute__((used)) static
void FUNC_2(struct iwl_trans *VAR_0, struct iwl_rxq *VAR_1)
{
 if (VAR_0->trans_cfg->mq_rx_supported)
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
