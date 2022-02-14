
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int max_queue_pairs; int curr_queue_pairs; } ;
struct net_device {int dummy; } ;
struct ethtool_channels {scalar_t__ other_count; scalar_t__ tx_count; scalar_t__ rx_count; scalar_t__ max_other; int max_combined; int combined_count; } ;


 struct virtnet_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
     struct ethtool_channels *VAR_1)
{
 struct virtnet_info *VAR_2 = FUNC_0(VAR_0);

 VAR_1->combined_count = VAR_2->curr_queue_pairs;
 VAR_1->max_combined = VAR_2->max_queue_pairs;
 VAR_1->max_other = 0;
 VAR_1->rx_count = 0;
 VAR_1->tx_count = 0;
 VAR_1->other_count = 0;
}
