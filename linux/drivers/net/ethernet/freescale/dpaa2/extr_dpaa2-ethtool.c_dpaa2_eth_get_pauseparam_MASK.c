
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;
struct TYPE_2__ {int options; } ;
struct dpaa2_eth_priv {TYPE_1__ link_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dpaa2_eth_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3,
         struct ethtool_pauseparam *VAR_4)
{
 struct dpaa2_eth_priv *VAR_5 = FUNC_0(VAR_3);
 u64 VAR_6 = VAR_5->link_state.options;

 VAR_4->rx_pause = !!(VAR_6 & VAR_2);
 VAR_4->tx_pause = VAR_4->rx_pause ^
     !!(VAR_6 & VAR_1);
 VAR_4->autoneg = VAR_0;
}
