
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int (* stop_hw ) (struct fm10k_hw*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ mac; int hw_addr; } ;
struct fm10k_intfc {int num_tx_queues; TYPE_3__* pdev; int * tx_ring; int state; struct fm10k_hw hw; struct net_device* netdev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 int FUNC_3 (struct fm10k_intfc*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (struct fm10k_intfc*) ;
 int FUNC_6 (struct fm10k_intfc*) ;
 int FUNC_7 (struct fm10k_intfc*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct fm10k_hw*) ;
 int FUNC_12 (struct fm10k_hw*) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int,int) ;

void FUNC_15(struct fm10k_intfc *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->netdev;
 struct fm10k_hw *VAR_6 = &VAR_4->hw;
 int VAR_7, VAR_8 = 0, VAR_9 = 0;


 if (FUNC_13(VAR_2, VAR_4->state))
  return;


 FUNC_8(VAR_5);


 FUNC_10(VAR_5);
 FUNC_9(VAR_5);


 FUNC_6(VAR_4);


 FUNC_5(VAR_4);


 FUNC_7(VAR_4);


 while (FUNC_13(VAR_3, VAR_4->state))
  FUNC_14(1000, 2000);


 if (FUNC_0(VAR_6->hw_addr))
  goto skip_tx_dma_drain;
 VAR_7 = VAR_6->mac.ops.stop_hw(VAR_6);
 if (VAR_7 != VAR_0)
  goto skip_tx_dma_drain;


 for (VAR_9 = 0; VAR_9 < 25; VAR_9++) {
  FUNC_14(10000, 20000);


  for (; VAR_8 < VAR_4->num_tx_queues; VAR_8++)
   if (FUNC_4(VAR_4->tx_ring[VAR_8], 0))
    break;


  if (VAR_8 == VAR_4->num_tx_queues)
   break;
 }

 if (VAR_9 >= 25)
  FUNC_1(&VAR_4->pdev->dev,
   "Tx queues failed to drain after %d tries. Tx DMA is probably hung.\n",
   VAR_9);
skip_tx_dma_drain:

 VAR_7 = VAR_6->mac.ops.stop_hw(VAR_6);
 if (VAR_7 == VAR_0)
  FUNC_1(&VAR_4->pdev->dev,
   "due to pending requests hw was not shut down gracefully\n");
 else if (VAR_7)
  FUNC_1(&VAR_4->pdev->dev, "stop_hw failed: %d\n", VAR_7);


 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
}
