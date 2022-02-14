
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct macb_tx_skb {int dummy; } ;
struct macb_queue {void* rx_ring; scalar_t__ rx_ring_dma; int tx_skb; void* tx_ring; scalar_t__ tx_ring_dma; } ;
struct TYPE_4__ {scalar_t__ (* mog_alloc_rx_buffers ) (struct macb*) ;} ;
struct macb {unsigned int num_queues; int tx_bd_rd_prefetch; int tx_ring_size; int rx_bd_rd_prefetch; TYPE_2__ macbgem_ops; int dev; TYPE_1__* pdev; struct macb_queue* queues; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct macb*) ;
 int FUNC_1 (struct macb*) ;
 void* FUNC_2 (int *,int,scalar_t__*,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct macb*) ;
 int FUNC_5 (int ,char*,int,unsigned long,unsigned long,...) ;
 scalar_t__ FUNC_6 (struct macb*) ;

__attribute__((used)) static int FUNC_7(struct macb *VAR_2)
{
 struct macb_queue *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 for (VAR_4 = 0, VAR_3 = VAR_2->queues; VAR_4 < VAR_2->num_queues; ++VAR_4, ++VAR_3) {
  VAR_5 = FUNC_1(VAR_2) + VAR_2->tx_bd_rd_prefetch;
  VAR_3->tx_ring = FUNC_2(&VAR_2->pdev->dev, VAR_5,
          &VAR_3->tx_ring_dma,
          VAR_1);
  if (!VAR_3->tx_ring)
   goto out_err;
  FUNC_5(VAR_2->dev,
      "Allocated TX ring for queue %u of %d bytes at %08lx (mapped %p)\n",
      VAR_4, VAR_5, (unsigned long)VAR_3->tx_ring_dma,
      VAR_3->tx_ring);

  VAR_5 = VAR_2->tx_ring_size * sizeof(struct macb_tx_skb);
  VAR_3->tx_skb = FUNC_3(VAR_5, VAR_1);
  if (!VAR_3->tx_skb)
   goto out_err;

  VAR_5 = FUNC_0(VAR_2) + VAR_2->rx_bd_rd_prefetch;
  VAR_3->rx_ring = FUNC_2(&VAR_2->pdev->dev, VAR_5,
       &VAR_3->rx_ring_dma, VAR_1);
  if (!VAR_3->rx_ring)
   goto out_err;
  FUNC_5(VAR_2->dev,
      "Allocated RX ring of %d bytes at %08lx (mapped %p)\n",
      VAR_5, (unsigned long)VAR_3->rx_ring_dma, VAR_3->rx_ring);
 }
 if (VAR_2->macbgem_ops.mog_alloc_rx_buffers(VAR_2))
  goto out_err;

 return 0;

out_err:
 FUNC_4(VAR_2);
 return -VAR_0;
}
