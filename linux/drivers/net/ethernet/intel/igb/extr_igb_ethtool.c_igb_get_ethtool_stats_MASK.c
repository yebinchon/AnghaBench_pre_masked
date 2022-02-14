
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ alloc_failed; scalar_t__ csum_err; scalar_t__ drops; scalar_t__ bytes; scalar_t__ packets; } ;
struct TYPE_5__ {scalar_t__ restart_queue2; scalar_t__ restart_queue; scalar_t__ bytes; scalar_t__ packets; } ;
struct igb_ring {TYPE_2__ rx_stats; int rx_syncp; TYPE_1__ tx_stats; int tx_syncp2; int tx_syncp; } ;
struct igb_adapter {int num_tx_queues; int num_rx_queues; int stats64_lock; struct igb_ring** rx_ring; struct igb_ring** tx_ring; struct rtnl_link_stats64 stats64; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_8__ {int stat_offset; int sizeof_stat; } ;
struct TYPE_7__ {int stat_offset; int sizeof_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (struct igb_adapter*) ;
 struct igb_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6,
      struct ethtool_stats *VAR_7, u64 *VAR_8)
{
 struct igb_adapter *VAR_9 = FUNC_1(VAR_6);
 struct rtnl_link_stats64 *VAR_10 = &VAR_9->stats64;
 unsigned int VAR_11;
 struct igb_ring *VAR_12;
 int VAR_13, VAR_14;
 char *VAR_15;

 FUNC_2(&VAR_9->stats64_lock);
 FUNC_0(VAR_9);

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_15 = (char *)VAR_9 + VAR_5[VAR_13].stat_offset;
  VAR_8[VAR_13] = (VAR_5[VAR_13].sizeof_stat ==
   sizeof(u64)) ? *(u64 *)VAR_15 : *(u32 *)VAR_15;
 }
 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++, VAR_13++) {
  VAR_15 = (char *)VAR_10 + VAR_4[VAR_14].stat_offset;
  VAR_8[VAR_13] = (VAR_4[VAR_14].sizeof_stat ==
   sizeof(u64)) ? *(u64 *)VAR_15 : *(u32 *)VAR_15;
 }
 for (VAR_14 = 0; VAR_14 < VAR_9->num_tx_queues; VAR_14++) {
  u64 VAR_16;

  VAR_12 = VAR_9->tx_ring[VAR_14];
  do {
   VAR_11 = FUNC_4(&VAR_12->tx_syncp);
   VAR_8[VAR_13] = VAR_12->tx_stats.packets;
   VAR_8[VAR_13+1] = VAR_12->tx_stats.bytes;
   VAR_8[VAR_13+2] = VAR_12->tx_stats.restart_queue;
  } while (FUNC_5(&VAR_12->tx_syncp, VAR_11));
  do {
   VAR_11 = FUNC_4(&VAR_12->tx_syncp2);
   VAR_16 = VAR_12->tx_stats.restart_queue2;
  } while (FUNC_5(&VAR_12->tx_syncp2, VAR_11));
  VAR_8[VAR_13+2] += VAR_16;

  VAR_13 += VAR_3;
 }
 for (VAR_14 = 0; VAR_14 < VAR_9->num_rx_queues; VAR_14++) {
  VAR_12 = VAR_9->rx_ring[VAR_14];
  do {
   VAR_11 = FUNC_4(&VAR_12->rx_syncp);
   VAR_8[VAR_13] = VAR_12->rx_stats.packets;
   VAR_8[VAR_13+1] = VAR_12->rx_stats.bytes;
   VAR_8[VAR_13+2] = VAR_12->rx_stats.drops;
   VAR_8[VAR_13+3] = VAR_12->rx_stats.csum_err;
   VAR_8[VAR_13+4] = VAR_12->rx_stats.alloc_failed;
  } while (FUNC_5(&VAR_12->rx_syncp, VAR_11));
  VAR_13 += VAR_2;
 }
 FUNC_3(&VAR_9->stats64_lock);
}
