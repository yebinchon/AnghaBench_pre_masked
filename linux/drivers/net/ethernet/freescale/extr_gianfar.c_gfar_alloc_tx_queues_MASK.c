
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfar_private {int num_tx_queues; TYPE_1__** tx_queue; int ndev; } ;
struct gfar_priv_tx_q {int dummy; } ;
struct TYPE_2__ {int qindex; int txlock; int dev; int * tx_skbuff; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct gfar_private *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_tx_queues; VAR_3++) {
  VAR_2->tx_queue[VAR_3] = FUNC_0(sizeof(struct gfar_priv_tx_q),
         VAR_1);
  if (!VAR_2->tx_queue[VAR_3])
   return -VAR_0;

  VAR_2->tx_queue[VAR_3]->tx_skbuff = ((void*)0);
  VAR_2->tx_queue[VAR_3]->qindex = VAR_3;
  VAR_2->tx_queue[VAR_3]->dev = VAR_2->ndev;
  FUNC_1(&(VAR_2->tx_queue[VAR_3]->txlock));
 }
 return 0;
}
