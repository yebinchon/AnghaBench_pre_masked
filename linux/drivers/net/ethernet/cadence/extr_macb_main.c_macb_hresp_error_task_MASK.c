
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct macb_queue {int tx_ring_dma; int rx_ring_dma; } ;
struct TYPE_2__ {int (* mog_init_rings ) (struct macb*) ;} ;
struct macb {unsigned int num_queues; int rx_intr_mask; int hw_dma_cap; struct macb_queue* queues; TYPE_1__ macbgem_ops; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct macb*,int ) ;
 int FUNC_3 (struct macb*,int ,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct macb_queue*,int ,int) ;
 int FUNC_9 (struct macb*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_12)
{
 struct macb *VAR_13 = (struct macb *)VAR_12;
 struct net_device *VAR_14 = VAR_13->dev;
 struct macb_queue *VAR_15 = VAR_13->queues;
 unsigned int VAR_16;
 u32 VAR_17;

 for (VAR_16 = 0, VAR_15 = VAR_13->queues; VAR_16 < VAR_13->num_queues; ++VAR_16, ++VAR_15) {
  FUNC_8(VAR_15, VAR_2, VAR_13->rx_intr_mask |
      VAR_4 |
      FUNC_0(VAR_0));
 }
 VAR_17 = FUNC_2(VAR_13, VAR_5);
 VAR_17 &= ~(FUNC_0(VAR_8) | FUNC_0(VAR_11));
 FUNC_3(VAR_13, VAR_5, VAR_17);

 FUNC_7(VAR_14);
 FUNC_4(VAR_14);

 VAR_13->macbgem_ops.mog_init_rings(VAR_13);


 for (VAR_16 = 0, VAR_15 = VAR_13->queues; VAR_16 < VAR_13->num_queues; ++VAR_16, ++VAR_15) {
  FUNC_8(VAR_15, VAR_6, FUNC_1(VAR_15->rx_ring_dma));





  FUNC_8(VAR_15, VAR_9, FUNC_1(VAR_15->tx_ring_dma));







  FUNC_8(VAR_15, VAR_3,
        VAR_13->rx_intr_mask |
        VAR_4 |
        FUNC_0(VAR_0));
 }

 VAR_17 |= FUNC_0(VAR_8) | FUNC_0(VAR_11);
 FUNC_3(VAR_13, VAR_5, VAR_17);

 FUNC_5(VAR_14);
 FUNC_6(VAR_14);
}
