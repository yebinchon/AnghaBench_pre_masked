
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_stats {int rx_dropped; scalar_t__ rx_crc_errors; int rx_over_errors; scalar_t__ rx_length_errors; int collisions; int multicast; int tx_errors; scalar_t__ rx_errors; } ;
struct net_device {int dummy; } ;
struct ce_stats {int rcvd_pkts_dropped; scalar_t__ rx_crc_errs; int rx_overflows; scalar_t__ rx_length_errs; int tx_collisions; int multicast_pkts_rcvd; int tx_max_pkt_errs; scalar_t__ rx_other_errs; scalar_t__ rx_code_violations; scalar_t__ rx_align_errs; } ;
struct et131x_adapter {struct ce_stats stats; TYPE_1__* netdev; } ;
struct TYPE_2__ {struct net_device_stats stats; } ;


 struct et131x_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_0)
{
 struct et131x_adapter *VAR_1 = FUNC_0(VAR_0);
 struct net_device_stats *VAR_2 = &VAR_1->netdev->stats;
 struct ce_stats *VAR_3 = &VAR_1->stats;

 VAR_2->rx_errors = VAR_3->rx_length_errs +
      VAR_3->rx_align_errs +
      VAR_3->rx_crc_errs +
      VAR_3->rx_code_violations +
      VAR_3->rx_other_errs;
 VAR_2->tx_errors = VAR_3->tx_max_pkt_errs;
 VAR_2->multicast = VAR_3->multicast_pkts_rcvd;
 VAR_2->collisions = VAR_3->tx_collisions;

 VAR_2->rx_length_errors = VAR_3->rx_length_errs;
 VAR_2->rx_over_errors = VAR_3->rx_overflows;
 VAR_2->rx_crc_errors = VAR_3->rx_crc_errs;
 VAR_2->rx_dropped = VAR_3->rcvd_pkts_dropped;
 return VAR_2;
}
