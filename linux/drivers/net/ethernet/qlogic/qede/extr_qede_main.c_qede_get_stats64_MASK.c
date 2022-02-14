
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtnl_link_stats64 {int rx_frame_errors; int rx_crc_errors; int collisions; int rx_fifo_errors; scalar_t__ multicast; int tx_errors; scalar_t__ tx_bytes; scalar_t__ rx_bytes; scalar_t__ tx_packets; scalar_t__ rx_packets; } ;
struct qede_stats_common {int rx_align_errors; int rx_crc_errors; int no_buff_discards; scalar_t__ rx_bcast_pkts; scalar_t__ rx_mcast_pkts; int tx_err_drop_pkts; scalar_t__ tx_bcast_bytes; scalar_t__ tx_mcast_bytes; scalar_t__ tx_ucast_bytes; scalar_t__ rx_bcast_bytes; scalar_t__ rx_mcast_bytes; scalar_t__ rx_ucast_bytes; scalar_t__ tx_bcast_pkts; scalar_t__ tx_mcast_pkts; scalar_t__ tx_ucast_pkts; scalar_t__ rx_ucast_pkts; } ;
struct TYPE_3__ {int tx_total_collisions; } ;
struct TYPE_4__ {TYPE_1__ bb; struct qede_stats_common common; } ;
struct qede_dev {TYPE_2__ stats; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct qede_dev*) ;
 struct qede_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qede_dev*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
        struct rtnl_link_stats64 *VAR_1)
{
 struct qede_dev *VAR_2 = FUNC_1(VAR_0);
 struct qede_stats_common *VAR_3;

 FUNC_2(VAR_2);
 VAR_3 = &VAR_2->stats.common;

 VAR_1->rx_packets = VAR_3->rx_ucast_pkts + VAR_3->rx_mcast_pkts +
       VAR_3->rx_bcast_pkts;
 VAR_1->tx_packets = VAR_3->tx_ucast_pkts + VAR_3->tx_mcast_pkts +
       VAR_3->tx_bcast_pkts;

 VAR_1->rx_bytes = VAR_3->rx_ucast_bytes + VAR_3->rx_mcast_bytes +
     VAR_3->rx_bcast_bytes;
 VAR_1->tx_bytes = VAR_3->tx_ucast_bytes + VAR_3->tx_mcast_bytes +
     VAR_3->tx_bcast_bytes;

 VAR_1->tx_errors = VAR_3->tx_err_drop_pkts;
 VAR_1->multicast = VAR_3->rx_mcast_pkts + VAR_3->rx_bcast_pkts;

 VAR_1->rx_fifo_errors = VAR_3->no_buff_discards;

 if (FUNC_0(VAR_2))
  VAR_1->collisions = VAR_2->stats.bb.tx_total_collisions;
 VAR_1->rx_crc_errors = VAR_3->rx_crc_errors;
 VAR_1->rx_frame_errors = VAR_3->rx_align_errors;
}
