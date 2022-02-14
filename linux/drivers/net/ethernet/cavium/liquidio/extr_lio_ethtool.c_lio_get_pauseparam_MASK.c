
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int rx_pause; int tx_pause; } ;
struct net_device {int dummy; } ;
struct lio {struct octeon_device* oct_dev; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; scalar_t__ autoneg; } ;


 struct lio* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_0, struct ethtool_pauseparam *VAR_1)
{



 struct lio *VAR_2 = FUNC_0(VAR_0);
 struct octeon_device *VAR_3 = VAR_2->oct_dev;

 VAR_1->autoneg = 0;

 VAR_1->tx_pause = VAR_3->tx_pause;
 VAR_1->rx_pause = VAR_3->rx_pause;
}
