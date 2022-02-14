
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rx_drop; scalar_t__ rx_no_bufs; int rx_multicast_frames_ok; int rx_errors; int rx_bytes_ok; int rx_frames_ok; } ;
struct TYPE_3__ {int tx_drops; int tx_errors; int tx_bytes_ok; int tx_frames_ok; } ;
struct vnic_stats {TYPE_2__ rx; TYPE_1__ tx; } ;
struct rtnl_link_stats64 {scalar_t__ rx_dropped; int rx_crc_errors; int rx_over_errors; int multicast; int rx_errors; int rx_bytes; int rx_packets; int tx_dropped; int tx_errors; int tx_bytes; int tx_packets; } ;
struct net_device {int dummy; } ;
struct enic {int rq_bad_fcs; int rq_truncated_pkts; } ;


 int VAR_0 ;
 int FUNC_0 (struct enic*,struct vnic_stats**) ;
 struct enic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
      struct rtnl_link_stats64 *VAR_2)
{
 struct enic *VAR_3 = FUNC_1(VAR_1);
 struct vnic_stats *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, &VAR_4);




 if (VAR_5 == -VAR_0)
  return;

 VAR_2->tx_packets = VAR_4->tx.tx_frames_ok;
 VAR_2->tx_bytes = VAR_4->tx.tx_bytes_ok;
 VAR_2->tx_errors = VAR_4->tx.tx_errors;
 VAR_2->tx_dropped = VAR_4->tx.tx_drops;

 VAR_2->rx_packets = VAR_4->rx.rx_frames_ok;
 VAR_2->rx_bytes = VAR_4->rx.rx_bytes_ok;
 VAR_2->rx_errors = VAR_4->rx.rx_errors;
 VAR_2->multicast = VAR_4->rx.rx_multicast_frames_ok;
 VAR_2->rx_over_errors = VAR_3->rq_truncated_pkts;
 VAR_2->rx_crc_errors = VAR_3->rq_bad_fcs;
 VAR_2->rx_dropped = VAR_4->rx.rx_no_bufs + VAR_4->rx.rx_drop;
}
