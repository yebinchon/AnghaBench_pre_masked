
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbe_ring {int * netdev; struct ixgbe_q_vector* q_vector; } ;
struct ixgbe_q_vector {int napi; } ;
struct ixgbe_fwd_adapter {unsigned int rx_base_queue; int pool; TYPE_1__* netdev; } ;
struct ixgbe_adapter {unsigned int num_rx_queues_per_pool; int fwd_bitmask; int netdev; struct ixgbe_ring** rx_ring; } ;
struct TYPE_3__ {int dev_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ixgbe_adapter*,int ,int ) ;
 int FUNC_3 (struct ixgbe_fwd_adapter*) ;
 int FUNC_4 (int *) ;
 struct ixgbe_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (struct net_device*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_0, void *VAR_1)
{
 struct ixgbe_fwd_adapter *VAR_2 = VAR_1;
 struct ixgbe_adapter *VAR_3 = FUNC_5(VAR_0);
 unsigned int VAR_4 = VAR_2->rx_base_queue;
 unsigned int VAR_5;


 FUNC_2(VAR_3, VAR_2->netdev->dev_addr,
        FUNC_0(VAR_2->pool));




 FUNC_9(10000, 20000);

 for (VAR_5 = 0; VAR_5 < VAR_3->num_rx_queues_per_pool; VAR_5++) {
  struct ixgbe_ring *VAR_6 = VAR_3->rx_ring[VAR_4 + VAR_5];
  struct ixgbe_q_vector *VAR_7 = VAR_6->q_vector;




  if (FUNC_8(VAR_3->netdev))
   FUNC_4(&VAR_7->napi);
  VAR_6->netdev = ((void*)0);
 }


 FUNC_7(VAR_0, VAR_2->netdev);
 FUNC_6(VAR_2->netdev, 0);

 FUNC_1(VAR_2->pool, VAR_3->fwd_bitmask);
 FUNC_3(VAR_2);
}
