
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {scalar_t__ mtu; } ;
struct ixgbevf_ring {int dummy; } ;
struct TYPE_4__ {int (* set_rlpml ) (struct ixgbe_hw*,scalar_t__) ;} ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbevf_adapter {int num_rx_queues; struct ixgbevf_ring** rx_ring; TYPE_3__* pdev; int mbx_lock; struct net_device* netdev; struct ixgbe_hw hw; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ixgbevf_adapter*,struct ixgbevf_ring*) ;
 int FUNC_2 (struct ixgbevf_adapter*,struct ixgbevf_ring*) ;
 int FUNC_3 (struct ixgbevf_adapter*) ;
 int FUNC_4 (struct ixgbevf_adapter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ixgbe_hw*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct ixgbevf_adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 struct net_device *VAR_5 = VAR_3->netdev;
 int VAR_6, VAR_7;

 FUNC_3(VAR_3);
 if (VAR_4->mac.type >= VAR_2)
  FUNC_4(VAR_3);

 FUNC_5(&VAR_3->mbx_lock);

 VAR_7 = VAR_4->mac.ops.set_rlpml(VAR_4, VAR_5->mtu + VAR_1 + VAR_0);
 FUNC_6(&VAR_3->mbx_lock);
 if (VAR_7)
  FUNC_0(&VAR_3->pdev->dev,
   "Failed to set MTU at %d\n", VAR_5->mtu);




 for (VAR_6 = 0; VAR_6 < VAR_3->num_rx_queues; VAR_6++) {
  struct ixgbevf_ring *VAR_8 = VAR_3->rx_ring[VAR_6];

  FUNC_2(VAR_3, VAR_8);
  FUNC_1(VAR_3, VAR_8);
 }
}
