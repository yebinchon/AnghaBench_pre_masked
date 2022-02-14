
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int rx_desc_unk_state; int tx_iommu_map_error; int rx_iommu_map_error; int alloc_rx_skb_error; int tx_timeouts; int rx_desc_error; } ;
struct spider_net_card {TYPE_2__ spider_stats; } ;
struct TYPE_3__ {int rx_dropped; int tx_dropped; int tx_errors; int rx_bytes; int rx_packets; int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct ethtool_stats {int dummy; } ;


 struct spider_net_card* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
  struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct spider_net_card *VAR_3 = FUNC_0(VAR_0);

 VAR_2[0] = VAR_0->stats.tx_packets;
 VAR_2[1] = VAR_0->stats.tx_bytes;
 VAR_2[2] = VAR_0->stats.rx_packets;
 VAR_2[3] = VAR_0->stats.rx_bytes;
 VAR_2[4] = VAR_0->stats.tx_errors;
 VAR_2[5] = VAR_0->stats.tx_dropped;
 VAR_2[6] = VAR_0->stats.rx_dropped;
 VAR_2[7] = VAR_3->spider_stats.rx_desc_error;
 VAR_2[8] = VAR_3->spider_stats.tx_timeouts;
 VAR_2[9] = VAR_3->spider_stats.alloc_rx_skb_error;
 VAR_2[10] = VAR_3->spider_stats.rx_iommu_map_error;
 VAR_2[11] = VAR_3->spider_stats.tx_iommu_map_error;
 VAR_2[12] = VAR_3->spider_stats.rx_desc_unk_state;
}
