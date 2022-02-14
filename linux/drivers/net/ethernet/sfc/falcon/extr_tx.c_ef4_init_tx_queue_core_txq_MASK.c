
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_tx_queue {int queue; int core_txq; struct ef4_nic* efx; } ;
struct ef4_nic {int n_tx_channels; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

void FUNC_1(struct ef4_tx_queue *VAR_2)
{
 struct ef4_nic *VAR_3 = VAR_2->efx;


 VAR_2->core_txq =
  FUNC_0(VAR_3->net_dev,
        VAR_2->queue / VAR_0 +
        ((VAR_2->queue & VAR_1) ?
         VAR_3->n_tx_channels : 0));
}
