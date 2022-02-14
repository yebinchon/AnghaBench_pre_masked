
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbe_fc_info {int disable_fc_autoneg; int requested_mode; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {struct ixgbe_fc_info fc; TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; struct ixgbe_hw hw; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 scalar_t__ FUNC_3 (struct ixgbe_fc_info*,struct ixgbe_fc_info*,int) ;
 struct ixgbe_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_8,
    struct ethtool_pauseparam *VAR_9)
{
 struct ixgbe_adapter *VAR_10 = FUNC_4(VAR_8);
 struct ixgbe_hw *VAR_11 = &VAR_10->hw;
 struct ixgbe_fc_info VAR_12 = VAR_11->fc;


 if ((VAR_11->mac.type == VAR_7) &&
     (VAR_10->flags & VAR_2))
  return -VAR_1;


 if ((VAR_9->autoneg == VAR_0) &&
     !FUNC_0(VAR_11))
  return -VAR_1;

 VAR_12.disable_fc_autoneg = (VAR_9->autoneg != VAR_0);

 if ((VAR_9->rx_pause && VAR_9->tx_pause) || VAR_9->autoneg)
  VAR_12.requested_mode = VAR_3;
 else if (VAR_9->rx_pause && !VAR_9->tx_pause)
  VAR_12.requested_mode = VAR_5;
 else if (!VAR_9->rx_pause && VAR_9->tx_pause)
  VAR_12.requested_mode = VAR_6;
 else
  VAR_12.requested_mode = VAR_4;


 if (FUNC_3(&VAR_12, &VAR_11->fc, sizeof(struct ixgbe_fc_info))) {
  VAR_11->fc = VAR_12;
  if (FUNC_5(VAR_8))
   FUNC_1(VAR_10);
  else
   FUNC_2(VAR_10);
 }

 return 0;
}
