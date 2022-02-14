
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ionic_lif {int rx_coalesce_usecs; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int tx_coalesce_usecs; } ;


 struct ionic_lif* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
         struct ethtool_coalesce *VAR_1)
{
 struct ionic_lif *VAR_2 = FUNC_0(VAR_0);


 VAR_1->tx_coalesce_usecs = VAR_2->rx_coalesce_usecs;
 VAR_1->rx_coalesce_usecs = VAR_2->rx_coalesce_usecs;

 return 0;
}
