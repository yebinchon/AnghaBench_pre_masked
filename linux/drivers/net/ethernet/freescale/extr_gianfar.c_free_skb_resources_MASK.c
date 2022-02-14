
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txbd8 {int dummy; } ;
struct rxbd8 {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct gfar_private {int num_tx_queues; int num_rx_queues; int total_tx_ring_size; int total_rx_ring_size; struct gfar_priv_tx_q** tx_queue; int dev; struct gfar_priv_rx_q** rx_queue; } ;
struct gfar_priv_tx_q {int tx_bd_dma_base; int tx_bd_base; scalar_t__ tx_skbuff; int qindex; int dev; } ;
struct gfar_priv_rx_q {scalar_t__ rx_buff; } ;


 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct gfar_priv_rx_q*) ;
 int FUNC_2 (struct gfar_priv_tx_q*) ;
 struct netdev_queue* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct netdev_queue*) ;

__attribute__((used)) static void FUNC_5(struct gfar_private *VAR_0)
{
 struct gfar_priv_tx_q *VAR_1 = ((void*)0);
 struct gfar_priv_rx_q *VAR_2 = ((void*)0);
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0->num_tx_queues; VAR_3++) {
  struct netdev_queue *VAR_4;

  VAR_1 = VAR_0->tx_queue[VAR_3];
  VAR_4 = FUNC_3(VAR_1->dev, VAR_1->qindex);
  if (VAR_1->tx_skbuff)
   FUNC_2(VAR_1);
  FUNC_4(VAR_4);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->num_rx_queues; VAR_3++) {
  VAR_2 = VAR_0->rx_queue[VAR_3];
  if (VAR_2->rx_buff)
   FUNC_1(VAR_2);
 }

 FUNC_0(VAR_0->dev,
     sizeof(struct txbd8) * VAR_0->total_tx_ring_size +
     sizeof(struct rxbd8) * VAR_0->total_rx_ring_size,
     VAR_0->tx_queue[0]->tx_bd_base,
     VAR_0->tx_queue[0]->tx_bd_dma_base);
}
