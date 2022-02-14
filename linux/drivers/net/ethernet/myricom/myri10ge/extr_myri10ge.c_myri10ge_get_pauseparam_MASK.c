
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct myri10ge_priv {int pause; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; scalar_t__ autoneg; } ;


 struct myri10ge_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_0,
   struct ethtool_pauseparam *VAR_1)
{
 struct myri10ge_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->autoneg = 0;
 VAR_1->rx_pause = VAR_2->pause;
 VAR_1->tx_pause = VAR_2->pause;
}
