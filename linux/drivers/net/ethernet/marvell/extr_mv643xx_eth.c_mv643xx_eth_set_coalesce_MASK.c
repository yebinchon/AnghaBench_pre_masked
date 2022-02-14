
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mv643xx_eth_private {int dummy; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int rx_coalesce_usecs; } ;


 struct mv643xx_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ) ;
 int FUNC_2 (struct mv643xx_eth_private*,int ) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_0, struct ethtool_coalesce *VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_1->rx_coalesce_usecs);
 FUNC_2(VAR_2, VAR_1->tx_coalesce_usecs);

 return 0;
}
