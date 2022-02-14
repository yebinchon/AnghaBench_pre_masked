
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgmac_priv {int tx_pause; int rx_pause; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; } ;


 struct xgmac_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
          struct ethtool_pauseparam *VAR_1)
{
 struct xgmac_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_pause = VAR_2->rx_pause;
 VAR_1->tx_pause = VAR_2->tx_pause;
}
