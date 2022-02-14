
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vxgedev {int no_of_vpath; TYPE_3__* vpaths; } ;
struct vxge_ring_stats {scalar_t__ rx_dropped; scalar_t__ rx_errors; scalar_t__ rx_bytes; scalar_t__ rx_mcast; scalar_t__ rx_frms; int syncp; } ;
struct vxge_fifo_stats {scalar_t__ tx_errors; scalar_t__ tx_bytes; scalar_t__ tx_frms; int syncp; } ;
struct rtnl_link_stats64 {int tx_errors; int tx_bytes; int tx_packets; int rx_dropped; int rx_errors; int multicast; int rx_bytes; int rx_packets; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {struct vxge_fifo_stats stats; } ;
struct TYPE_4__ {struct vxge_ring_stats stats; } ;
struct TYPE_6__ {TYPE_2__ fifo; TYPE_1__ ring; } ;


 struct vxgedev* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct vxgedev *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2->no_of_vpath; VAR_3++) {
  struct vxge_ring_stats *VAR_4 = &VAR_2->vpaths[VAR_3].ring.stats;
  struct vxge_fifo_stats *VAR_5 = &VAR_2->vpaths[VAR_3].fifo.stats;
  unsigned int VAR_6;
  u64 VAR_7, VAR_8, VAR_9;

  do {
   VAR_6 = FUNC_1(&VAR_4->syncp);

   VAR_7 = VAR_4->rx_frms;
   VAR_9 = VAR_4->rx_mcast;
   VAR_8 = VAR_4->rx_bytes;
  } while (FUNC_2(&VAR_4->syncp, VAR_6));

  VAR_1->rx_packets += VAR_7;
  VAR_1->rx_bytes += VAR_8;
  VAR_1->multicast += VAR_9;

  VAR_1->rx_errors += VAR_4->rx_errors;
  VAR_1->rx_dropped += VAR_4->rx_dropped;

  do {
   VAR_6 = FUNC_1(&VAR_5->syncp);

   VAR_7 = VAR_5->tx_frms;
   VAR_8 = VAR_5->tx_bytes;
  } while (FUNC_2(&VAR_5->syncp, VAR_6));

  VAR_1->tx_packets += VAR_7;
  VAR_1->tx_bytes += VAR_8;
  VAR_1->tx_errors += VAR_5->tx_errors;
 }
}
