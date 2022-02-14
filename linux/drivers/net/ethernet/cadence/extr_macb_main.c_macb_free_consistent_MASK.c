
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct macb_queue {int * rx_ring; int rx_ring_dma; int * tx_ring; int tx_ring_dma; int * tx_skb; } ;
struct TYPE_3__ {int (* mog_free_rx_buffers ) (struct macb*) ;} ;
struct macb {unsigned int num_queues; int tx_bd_rd_prefetch; int rx_bd_rd_prefetch; TYPE_2__* pdev; struct macb_queue* queues; TYPE_1__ macbgem_ops; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct macb*) ;
 int FUNC_1 (struct macb*) ;
 int FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct macb*) ;

__attribute__((used)) static void FUNC_5(struct macb *VAR_0)
{
 struct macb_queue *VAR_1;
 unsigned int VAR_2;
 int VAR_3;

 VAR_0->macbgem_ops.mog_free_rx_buffers(VAR_0);

 for (VAR_2 = 0, VAR_1 = VAR_0->queues; VAR_2 < VAR_0->num_queues; ++VAR_2, ++VAR_1) {
  FUNC_3(VAR_1->tx_skb);
  VAR_1->tx_skb = ((void*)0);
  if (VAR_1->tx_ring) {
   VAR_3 = FUNC_1(VAR_0) + VAR_0->tx_bd_rd_prefetch;
   FUNC_2(&VAR_0->pdev->dev, VAR_3,
       VAR_1->tx_ring, VAR_1->tx_ring_dma);
   VAR_1->tx_ring = ((void*)0);
  }
  if (VAR_1->rx_ring) {
   VAR_3 = FUNC_0(VAR_0) + VAR_0->rx_bd_rd_prefetch;
   FUNC_2(&VAR_0->pdev->dev, VAR_3,
       VAR_1->rx_ring, VAR_1->rx_ring_dma);
   VAR_1->rx_ring = ((void*)0);
  }
 }
}
