
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct virtnet_info {int max_queue_pairs; struct send_queue* sq; struct receive_queue* rq; } ;
struct TYPE_4__ {scalar_t__ bytes; scalar_t__ packets; int syncp; } ;
struct send_queue {TYPE_1__ stats; } ;
struct rtnl_link_stats64 {int rx_frame_errors; int rx_length_errors; int tx_fifo_errors; int tx_dropped; int rx_dropped; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct TYPE_5__ {scalar_t__ drops; scalar_t__ bytes; scalar_t__ packets; int syncp; } ;
struct receive_queue {TYPE_2__ stats; } ;
struct TYPE_6__ {int rx_frame_errors; int rx_length_errors; int tx_fifo_errors; int tx_dropped; } ;
struct net_device {TYPE_3__ stats; } ;


 struct virtnet_info* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
     struct rtnl_link_stats64 *VAR_1)
{
 struct virtnet_info *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->max_queue_pairs; VAR_4++) {
  u64 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
  struct receive_queue *VAR_10 = &VAR_2->rq[VAR_4];
  struct send_queue *VAR_11 = &VAR_2->sq[VAR_4];

  do {
   VAR_3 = FUNC_1(&VAR_11->stats.syncp);
   VAR_5 = VAR_11->stats.packets;
   VAR_6 = VAR_11->stats.bytes;
  } while (FUNC_2(&VAR_11->stats.syncp, VAR_3));

  do {
   VAR_3 = FUNC_1(&VAR_10->stats.syncp);
   VAR_7 = VAR_10->stats.packets;
   VAR_8 = VAR_10->stats.bytes;
   VAR_9 = VAR_10->stats.drops;
  } while (FUNC_2(&VAR_10->stats.syncp, VAR_3));

  VAR_1->rx_packets += VAR_7;
  VAR_1->tx_packets += VAR_5;
  VAR_1->rx_bytes += VAR_8;
  VAR_1->tx_bytes += VAR_6;
  VAR_1->rx_dropped += VAR_9;
 }

 VAR_1->tx_dropped = VAR_0->stats.tx_dropped;
 VAR_1->tx_fifo_errors = VAR_0->stats.tx_fifo_errors;
 VAR_1->rx_length_errors = VAR_0->stats.rx_length_errors;
 VAR_1->rx_frame_errors = VAR_0->stats.rx_frame_errors;
}
