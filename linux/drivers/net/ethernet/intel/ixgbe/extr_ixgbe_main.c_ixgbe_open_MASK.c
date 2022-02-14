
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int (* set_phy_power ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
struct ixgbe_adapter {int num_tx_queues; int num_rx_queues; struct ixgbe_hw hw; int wol; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_adapter*,int ) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_adapter*) ;
 int FUNC_8 (struct ixgbe_adapter*) ;
 int FUNC_9 (struct ixgbe_adapter*) ;
 int FUNC_10 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,int) ;
 int FUNC_14 (struct net_device*,int) ;
 int FUNC_15 (struct ixgbe_hw*,int) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (struct net_device*) ;

int FUNC_18(struct net_device *VAR_3)
{
 struct ixgbe_adapter *VAR_4 = FUNC_11(VAR_3);
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 int VAR_6, VAR_7;


 if (FUNC_16(VAR_2, &VAR_4->state))
  return -VAR_0;

 FUNC_12(VAR_3);


 VAR_6 = FUNC_9(VAR_4);
 if (VAR_6)
  goto err_setup_tx;


 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6)
  goto err_setup_rx;

 FUNC_1(VAR_4);

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6)
  goto err_req_irq;


 VAR_7 = VAR_4->num_tx_queues;
 VAR_6 = FUNC_14(VAR_3, VAR_7);
 if (VAR_6)
  goto err_set_queues;

 VAR_7 = VAR_4->num_rx_queues;
 VAR_6 = FUNC_13(VAR_3, VAR_7);
 if (VAR_6)
  goto err_set_queues;

 FUNC_5(VAR_4);

 FUNC_10(VAR_4);

 FUNC_0(VAR_4, VAR_1);
 FUNC_17(VAR_3);

 return 0;

err_set_queues:
 FUNC_4(VAR_4);
err_req_irq:
 FUNC_2(VAR_4);
 if (VAR_5->phy.ops.set_phy_power && !VAR_4->wol)
  VAR_5->phy.ops.set_phy_power(&VAR_4->hw, 0);
err_setup_rx:
 FUNC_3(VAR_4);
err_setup_tx:
 FUNC_7(VAR_4);

 return VAR_6;
}
