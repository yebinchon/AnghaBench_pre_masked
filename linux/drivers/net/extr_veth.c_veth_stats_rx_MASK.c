
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct veth_rq_stats {scalar_t__ xdp_drops; scalar_t__ xdp_bytes; scalar_t__ xdp_packets; int syncp; } ;
struct veth_priv {TYPE_1__* rq; } ;
struct net_device {int num_rx_queues; } ;
struct TYPE_2__ {struct veth_rq_stats stats; } ;


 struct veth_priv* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct veth_rq_stats *VAR_0, struct net_device *VAR_1)
{
 struct veth_priv *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 VAR_0->xdp_packets = 0;
 VAR_0->xdp_bytes = 0;
 VAR_0->xdp_drops = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->num_rx_queues; VAR_3++) {
  struct veth_rq_stats *VAR_4 = &VAR_2->rq[VAR_3].stats;
  u64 VAR_5, VAR_6, VAR_7;
  unsigned int VAR_8;

  do {
   VAR_8 = FUNC_1(&VAR_4->syncp);
   VAR_5 = VAR_4->xdp_packets;
   VAR_6 = VAR_4->xdp_bytes;
   VAR_7 = VAR_4->xdp_drops;
  } while (FUNC_2(&VAR_4->syncp, VAR_8));
  VAR_0->xdp_packets += VAR_5;
  VAR_0->xdp_bytes += VAR_6;
  VAR_0->xdp_drops += VAR_7;
 }
}
