
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct myri10ge_priv {scalar_t__ pause; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; scalar_t__ autoneg; } ;


 int VAR_0 ;
 int FUNC_0 (struct myri10ge_priv*,scalar_t__) ;
 struct myri10ge_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1,
   struct ethtool_pauseparam *VAR_2)
{
 struct myri10ge_priv *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2->tx_pause != VAR_3->pause)
  return FUNC_0(VAR_3, VAR_2->tx_pause);
 if (VAR_2->rx_pause != VAR_3->pause)
  return FUNC_0(VAR_3, VAR_2->rx_pause);
 if (VAR_2->autoneg != 0)
  return -VAR_0;
 return 0;
}
