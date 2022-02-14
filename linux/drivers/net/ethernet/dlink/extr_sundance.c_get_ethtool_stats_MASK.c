
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int rx_mcasts; int tx_mcasts; int rx_bcasts; int tx_bcasts; int tx_aborted; int tx_deferred_excessive; int tx_deferred; int tx_late_collisions; int tx_single_collisions; int tx_multiple_collisions; } ;
struct netdev_private {TYPE_1__ xstats; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
  struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct netdev_private *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = 0;

 FUNC_0(VAR_0);
 VAR_2[VAR_4++] = VAR_3->xstats.tx_multiple_collisions;
 VAR_2[VAR_4++] = VAR_3->xstats.tx_single_collisions;
 VAR_2[VAR_4++] = VAR_3->xstats.tx_late_collisions;
 VAR_2[VAR_4++] = VAR_3->xstats.tx_deferred;
 VAR_2[VAR_4++] = VAR_3->xstats.tx_deferred_excessive;
 VAR_2[VAR_4++] = VAR_3->xstats.tx_aborted;
 VAR_2[VAR_4++] = VAR_3->xstats.tx_bcasts;
 VAR_2[VAR_4++] = VAR_3->xstats.rx_bcasts;
 VAR_2[VAR_4++] = VAR_3->xstats.tx_mcasts;
 VAR_2[VAR_4++] = VAR_3->xstats.rx_mcasts;
}
