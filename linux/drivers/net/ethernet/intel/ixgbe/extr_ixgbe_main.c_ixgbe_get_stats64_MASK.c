
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rtnl_link_stats64 {int rx_missed_errors; int rx_crc_errors; int rx_length_errors; int rx_errors; int multicast; int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {int rx_missed_errors; int rx_crc_errors; int rx_length_errors; int rx_errors; int multicast; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct ixgbe_ring {TYPE_1__ stats; int syncp; } ;
struct ixgbe_adapter {int num_rx_queues; int num_tx_queues; int num_xdp_queues; int * xdp_ring; int * tx_ring; int * rx_ring; } ;


 struct ixgbe_ring* FUNC_0 (int ) ;
 int FUNC_1 (struct rtnl_link_stats64*,struct ixgbe_ring*) ;
 struct ixgbe_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_0,
         struct rtnl_link_stats64 *VAR_1)
{
 struct ixgbe_adapter *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 FUNC_3();
 for (VAR_3 = 0; VAR_3 < VAR_2->num_rx_queues; VAR_3++) {
  struct ixgbe_ring *VAR_4 = FUNC_0(VAR_2->rx_ring[VAR_3]);
  u64 VAR_5, VAR_6;
  unsigned int VAR_7;

  if (VAR_4) {
   do {
    VAR_7 = FUNC_5(&VAR_4->syncp);
    VAR_6 = VAR_4->stats.packets;
    VAR_5 = VAR_4->stats.bytes;
   } while (FUNC_6(&VAR_4->syncp, VAR_7));
   VAR_1->rx_packets += VAR_6;
   VAR_1->rx_bytes += VAR_5;
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->num_tx_queues; VAR_3++) {
  struct ixgbe_ring *VAR_8 = FUNC_0(VAR_2->tx_ring[VAR_3]);

  FUNC_1(VAR_1, VAR_8);
 }
 for (VAR_3 = 0; VAR_3 < VAR_2->num_xdp_queues; VAR_3++) {
  struct ixgbe_ring *VAR_9 = FUNC_0(VAR_2->xdp_ring[VAR_3]);

  FUNC_1(VAR_1, VAR_9);
 }
 FUNC_4();


 VAR_1->multicast = VAR_0->stats.multicast;
 VAR_1->rx_errors = VAR_0->stats.rx_errors;
 VAR_1->rx_length_errors = VAR_0->stats.rx_length_errors;
 VAR_1->rx_crc_errors = VAR_0->stats.rx_crc_errors;
 VAR_1->rx_missed_errors = VAR_0->stats.rx_missed_errors;
}
