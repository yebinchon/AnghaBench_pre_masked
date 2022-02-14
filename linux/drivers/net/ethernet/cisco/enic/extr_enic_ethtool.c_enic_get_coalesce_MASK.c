
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {int use_adaptive_rx_coalesce; int rx_coalesce_usecs_high; int rx_coalesce_usecs_low; int rx_coalesce_usecs; int tx_coalesce_usecs; } ;
struct enic_rx_coal {int range_end; int small_pkt_range_start; scalar_t__ use_adaptive_rx_coalesce; } ;
struct enic {int rx_coalesce_usecs; int tx_coalesce_usecs; int vdev; struct enic_rx_coal rx_coalesce_setting; } ;


 scalar_t__ VAR_0 ;
 struct enic* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
 struct ethtool_coalesce *VAR_2)
{
 struct enic *VAR_3 = FUNC_0(VAR_1);
 struct enic_rx_coal *VAR_4 = &VAR_3->rx_coalesce_setting;

 if (FUNC_1(VAR_3->vdev) == VAR_0)
  VAR_2->tx_coalesce_usecs = VAR_3->tx_coalesce_usecs;
 VAR_2->rx_coalesce_usecs = VAR_3->rx_coalesce_usecs;
 if (VAR_4->use_adaptive_rx_coalesce)
  VAR_2->use_adaptive_rx_coalesce = 1;
 VAR_2->rx_coalesce_usecs_low = VAR_4->small_pkt_range_start;
 VAR_2->rx_coalesce_usecs_high = VAR_4->range_end;

 return 0;
}
