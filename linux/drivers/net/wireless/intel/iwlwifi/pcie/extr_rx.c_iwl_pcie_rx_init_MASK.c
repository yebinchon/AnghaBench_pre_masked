
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iwl_trans_pcie {TYPE_2__* rxq; } ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {scalar_t__ mq_rx_supported; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,TYPE_2__*) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*,TYPE_2__*) ;
 int FUNC_5 (struct iwl_trans*,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct iwl_trans *VAR_0)
{
 struct iwl_trans_pcie *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = FUNC_1(VAR_0);

 if (VAR_2)
  return VAR_2;

 if (VAR_0->trans_cfg->mq_rx_supported)
  FUNC_3(VAR_0);
 else
  FUNC_2(VAR_0, VAR_1->rxq);

 FUNC_5(VAR_0, VAR_1->rxq);

 FUNC_6(&VAR_1->rxq->lock);
 FUNC_4(VAR_0, VAR_1->rxq);
 FUNC_7(&VAR_1->rxq->lock);

 return 0;
}
