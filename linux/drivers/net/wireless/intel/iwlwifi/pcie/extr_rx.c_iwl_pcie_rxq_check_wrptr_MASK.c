
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {struct iwl_rxq* rxq; } ;
struct iwl_trans {int num_rx_queues; } ;
struct iwl_rxq {int need_update; int lock; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*,struct iwl_rxq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct iwl_trans *VAR_0)
{
 struct iwl_trans_pcie *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_rx_queues; VAR_2++) {
  struct iwl_rxq *VAR_3 = &VAR_1->rxq[VAR_2];

  if (!VAR_3->need_update)
   continue;
  FUNC_2(&VAR_3->lock);
  FUNC_1(VAR_0, VAR_3);
  VAR_3->need_update = 0;
  FUNC_3(&VAR_3->lock);
 }
}
