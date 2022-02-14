
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;
struct cpsw_priv {scalar_t__ tx_pause; scalar_t__ rx_pause; } ;


 int VAR_0 ;
 struct cpsw_priv* FUNC_0 (struct net_device*) ;

void FUNC_1(struct net_device *VAR_1,
    struct ethtool_pauseparam *VAR_2)
{
 struct cpsw_priv *VAR_3 = FUNC_0(VAR_1);

 VAR_2->autoneg = VAR_0;
 VAR_2->rx_pause = VAR_3->rx_pause ? 1 : 0;
 VAR_2->tx_pause = VAR_3->tx_pause ? 1 : 0;
}
