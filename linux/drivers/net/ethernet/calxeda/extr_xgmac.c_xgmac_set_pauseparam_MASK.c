
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgmac_priv {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; scalar_t__ autoneg; } ;


 int VAR_0 ;
 struct xgmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xgmac_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
         struct ethtool_pauseparam *VAR_2)
{
 struct xgmac_priv *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2->autoneg)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_2->rx_pause, VAR_2->tx_pause);
}
