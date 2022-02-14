
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ eee_speeds_supported; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
struct ixgbe_adapter {int flags2; struct ixgbe_hw hw; } ;
struct ethtool_eee {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_adapter*,struct ethtool_eee*) ;
 scalar_t__ VAR_2 ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, struct ethtool_eee *VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_1(VAR_3);
 struct ixgbe_hw *VAR_6 = &VAR_5->hw;

 if (!(VAR_5->flags2 & VAR_1))
  return -VAR_0;

 if (VAR_6->phy.eee_speeds_supported && VAR_6->phy.type == VAR_2)
  return FUNC_0(VAR_5, VAR_4);

 return -VAR_0;
}
