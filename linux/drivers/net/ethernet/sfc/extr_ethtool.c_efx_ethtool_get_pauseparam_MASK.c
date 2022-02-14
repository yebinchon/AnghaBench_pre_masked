
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;
struct efx_nic {int wanted_fc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct efx_nic* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3,
           struct ethtool_pauseparam *VAR_4)
{
 struct efx_nic *VAR_5 = FUNC_0(VAR_3);

 VAR_4->rx_pause = !!(VAR_5->wanted_fc & VAR_1);
 VAR_4->tx_pause = !!(VAR_5->wanted_fc & VAR_2);
 VAR_4->autoneg = !!(VAR_5->wanted_fc & VAR_0);
}
