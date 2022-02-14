
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasemi_mac {int rx; int tx; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_max_pending; int tx_pending; int rx_max_pending; int rx_pending; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pasemi_mac* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_2,
     struct ethtool_ringparam *VAR_3)
{
 struct pasemi_mac *VAR_4 = FUNC_1(VAR_2);

 VAR_3->tx_max_pending = VAR_1/2;
 VAR_3->tx_pending = FUNC_0(VAR_4->tx)/2;
 VAR_3->rx_max_pending = VAR_0/4;
 VAR_3->rx_pending = FUNC_0(VAR_4->rx)/4;
}
