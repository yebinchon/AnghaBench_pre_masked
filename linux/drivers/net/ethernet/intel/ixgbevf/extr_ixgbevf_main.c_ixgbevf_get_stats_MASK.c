
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rtnl_link_stats64 {int rx_packets; int rx_bytes; scalar_t__ multicast; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ packets; scalar_t__ bytes; } ;
struct ixgbevf_ring {TYPE_2__ stats; int syncp; } ;
struct TYPE_3__ {scalar_t__ base_vfmprc; scalar_t__ vfmprc; } ;
struct ixgbevf_adapter {int num_rx_queues; int num_tx_queues; int num_xdp_queues; struct ixgbevf_ring** xdp_ring; struct ixgbevf_ring** tx_ring; struct ixgbevf_ring** rx_ring; TYPE_1__ stats; } ;


 int FUNC_0 (struct rtnl_link_stats64*,struct ixgbevf_ring const*) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_0,
         struct rtnl_link_stats64 *VAR_1)
{
 struct ixgbevf_adapter *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3;
 u64 VAR_4, VAR_5;
 const struct ixgbevf_ring *VAR_6;
 int VAR_7;

 FUNC_1(VAR_2);

 VAR_1->multicast = VAR_2->stats.vfmprc - VAR_2->stats.base_vfmprc;

 FUNC_3();
 for (VAR_7 = 0; VAR_7 < VAR_2->num_rx_queues; VAR_7++) {
  VAR_6 = VAR_2->rx_ring[VAR_7];
  do {
   VAR_3 = FUNC_5(&VAR_6->syncp);
   VAR_4 = VAR_6->stats.bytes;
   VAR_5 = VAR_6->stats.packets;
  } while (FUNC_6(&VAR_6->syncp, VAR_3));
  VAR_1->rx_bytes += VAR_4;
  VAR_1->rx_packets += VAR_5;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->num_tx_queues; VAR_7++) {
  VAR_6 = VAR_2->tx_ring[VAR_7];
  FUNC_0(VAR_1, VAR_6);
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->num_xdp_queues; VAR_7++) {
  VAR_6 = VAR_2->xdp_ring[VAR_7];
  FUNC_0(VAR_1, VAR_6);
 }
 FUNC_4();
}
