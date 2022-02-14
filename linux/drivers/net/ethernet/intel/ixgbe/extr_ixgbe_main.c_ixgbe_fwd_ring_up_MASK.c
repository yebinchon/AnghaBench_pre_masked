
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dev_addr; } ;
struct ixgbe_fwd_adapter {int pool; int rx_base_queue; int tx_base_queue; struct net_device* netdev; } ;
struct ixgbe_adapter {int num_rx_queues_per_pool; int fwd_bitmask; int netdev; TYPE_2__** rx_ring; int num_rx_pools; TYPE_1__* ring_feature; } ;
struct TYPE_4__ {struct net_device* netdev; } ;
struct TYPE_3__ {int indices; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ixgbe_adapter*,int ,int ) ;
 int FUNC_3 (struct ixgbe_fwd_adapter*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,struct net_device*,int,int,int) ;
 int FUNC_6 (struct net_device*,char*,int,int ,int,int) ;
 int FUNC_7 (struct net_device*,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*,int ) ;
 int FUNC_10 (int ,struct net_device*) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct ixgbe_adapter *VAR_1,
        struct ixgbe_fwd_adapter *VAR_2)
{
 u16 VAR_3 = VAR_1->ring_feature[VAR_0].indices;
 int VAR_4 = FUNC_8(VAR_1->netdev);
 struct net_device *VAR_5 = VAR_2->netdev;
 int VAR_6, VAR_7, VAR_8;

 VAR_7 = VAR_2->pool * VAR_1->num_rx_queues_per_pool;
 FUNC_6(VAR_5, "pool %i:%i queues %i:%i\n",
     VAR_2->pool, VAR_1->num_rx_pools,
     VAR_7, VAR_7 + VAR_1->num_rx_queues_per_pool);

 VAR_2->rx_base_queue = VAR_7;
 VAR_2->tx_base_queue = VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_5(VAR_1->netdev, VAR_5,
          VAR_6, VAR_3, VAR_7 + (VAR_3 * VAR_6));

 for (VAR_6 = 0; VAR_6 < VAR_1->num_rx_queues_per_pool; VAR_6++)
  VAR_1->rx_ring[VAR_7 + VAR_6]->netdev = VAR_5;




 FUNC_11();




 VAR_8 = FUNC_2(VAR_1, VAR_5->dev_addr,
       FUNC_0(VAR_2->pool));
 if (VAR_8 >= 0)
  return 0;


 FUNC_4(VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_1->num_rx_queues_per_pool; VAR_6++)
  VAR_1->rx_ring[VAR_7 + VAR_6]->netdev = ((void*)0);

 FUNC_7(VAR_5, "L2FW offload disabled due to L2 filter error\n");


 FUNC_10(VAR_1->netdev, VAR_5);
 FUNC_9(VAR_5, 0);

 FUNC_1(VAR_2->pool, VAR_1->fwd_bitmask);
 FUNC_3(VAR_2);

 return VAR_8;
}
