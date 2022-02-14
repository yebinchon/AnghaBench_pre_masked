
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rtnl_link_stats64 {scalar_t__ tx_errors; scalar_t__ rx_errors; scalar_t__ tx_window_errors; scalar_t__ rx_missed_errors; scalar_t__ rx_fifo_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_length_errors; scalar_t__ collisions; scalar_t__ multicast; scalar_t__ rx_dropped; int rx_bytes; int rx_packets; int tx_bytes; int tx_packets; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ bytes; scalar_t__ cnt; } ;
struct TYPE_4__ {scalar_t__ bytes; scalar_t__ cnt; } ;
struct ena_ring {TYPE_2__ rx_stats; int syncp; TYPE_1__ tx_stats; } ;
struct TYPE_6__ {scalar_t__ rx_drops; } ;
struct ena_adapter {int num_queues; TYPE_3__ dev_stats; int syncp; struct ena_ring* rx_ring; struct ena_ring* tx_ring; int flags; } ;


 int VAR_0 ;
 struct ena_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
       struct rtnl_link_stats64 *VAR_2)
{
 struct ena_adapter *VAR_3 = FUNC_0(VAR_1);
 struct ena_ring *VAR_4, *VAR_5;
 unsigned int VAR_6;
 u64 VAR_7;
 int VAR_8;

 if (!FUNC_1(VAR_0, &VAR_3->flags))
  return;

 for (VAR_8 = 0; VAR_8 < VAR_3->num_queues; VAR_8++) {
  u64 VAR_9, VAR_10;

  VAR_5 = &VAR_3->tx_ring[VAR_8];

  do {
   VAR_6 = FUNC_2(&VAR_5->syncp);
   VAR_10 = VAR_5->tx_stats.cnt;
   VAR_9 = VAR_5->tx_stats.bytes;
  } while (FUNC_3(&VAR_5->syncp, VAR_6));

  VAR_2->tx_packets += VAR_10;
  VAR_2->tx_bytes += VAR_9;

  VAR_4 = &VAR_3->rx_ring[VAR_8];

  do {
   VAR_6 = FUNC_2(&VAR_4->syncp);
   VAR_10 = VAR_4->rx_stats.cnt;
   VAR_9 = VAR_4->rx_stats.bytes;
  } while (FUNC_3(&VAR_4->syncp, VAR_6));

  VAR_2->rx_packets += VAR_10;
  VAR_2->rx_bytes += VAR_9;
 }

 do {
  VAR_6 = FUNC_2(&VAR_3->syncp);
  VAR_7 = VAR_3->dev_stats.rx_drops;
 } while (FUNC_3(&VAR_3->syncp, VAR_6));

 VAR_2->rx_dropped = VAR_7;

 VAR_2->multicast = 0;
 VAR_2->collisions = 0;

 VAR_2->rx_length_errors = 0;
 VAR_2->rx_crc_errors = 0;
 VAR_2->rx_frame_errors = 0;
 VAR_2->rx_fifo_errors = 0;
 VAR_2->rx_missed_errors = 0;
 VAR_2->tx_window_errors = 0;

 VAR_2->rx_errors = 0;
 VAR_2->tx_errors = 0;
}
