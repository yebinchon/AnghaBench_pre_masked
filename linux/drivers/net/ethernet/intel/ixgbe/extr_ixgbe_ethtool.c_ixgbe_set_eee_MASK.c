
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ eee_speeds_advertised; scalar_t__ eee_speeds_supported; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
struct ixgbe_adapter {int flags2; struct ixgbe_hw hw; } ;
struct ethtool_eee {scalar_t__ eee_enabled; scalar_t__ tx_lpi_enabled; scalar_t__ tx_lpi_timer; scalar_t__ advertised; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct net_device*,struct ethtool_eee*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ethtool_eee*,int ,int) ;
 struct ixgbe_adapter* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, struct ethtool_eee *VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_5(VAR_5);
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 struct ethtool_eee VAR_9;
 s32 VAR_10;

 if (!(VAR_7->flags2 & VAR_2))
  return -VAR_1;

 FUNC_4(&VAR_9, 0, sizeof(struct ethtool_eee));

 VAR_10 = FUNC_1(VAR_5, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9.eee_enabled && !VAR_6->eee_enabled) {
  if (VAR_9.tx_lpi_enabled != VAR_6->tx_lpi_enabled) {
   FUNC_0(VAR_4, "Setting EEE tx-lpi is not supported\n");
   return -VAR_0;
  }

  if (VAR_9.tx_lpi_timer != VAR_6->tx_lpi_timer) {
   FUNC_0(VAR_4,
         "Setting EEE Tx LPI timer is not supported\n");
   return -VAR_0;
  }

  if (VAR_9.advertised != VAR_6->advertised) {
   FUNC_0(VAR_4,
         "Setting EEE advertised speeds is not supported\n");
   return -VAR_0;
  }
 }

 if (VAR_9.eee_enabled != VAR_6->eee_enabled) {
  if (VAR_6->eee_enabled) {
   VAR_7->flags2 |= VAR_3;
   VAR_8->phy.eee_speeds_advertised =
         VAR_8->phy.eee_speeds_supported;
  } else {
   VAR_7->flags2 &= ~VAR_3;
   VAR_8->phy.eee_speeds_advertised = 0;
  }


  if (FUNC_6(VAR_5))
   FUNC_2(VAR_7);
  else
   FUNC_3(VAR_7);
 }

 return 0;
}
