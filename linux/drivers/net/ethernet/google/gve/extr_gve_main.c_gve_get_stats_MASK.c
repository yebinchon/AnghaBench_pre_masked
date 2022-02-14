
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int num_queues; } ;
struct TYPE_5__ {int num_queues; } ;
struct gve_priv {TYPE_4__* tx; TYPE_3__ tx_cfg; TYPE_2__* rx; TYPE_1__ rx_cfg; } ;
struct TYPE_8__ {scalar_t__ bytes_done; scalar_t__ pkt_done; int statss; } ;
struct TYPE_6__ {scalar_t__ rbytes; scalar_t__ rpackets; int statss; } ;


 struct gve_priv* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct gve_priv *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;
 int VAR_4;

 if (VAR_2->rx) {
  for (VAR_4 = 0; VAR_4 < VAR_2->rx_cfg.num_queues; VAR_4++) {
   do {
    VAR_3 =
      FUNC_1(&VAR_2->rx[VAR_4].statss);
    VAR_1->rx_packets += VAR_2->rx[VAR_4].rpackets;
    VAR_1->rx_bytes += VAR_2->rx[VAR_4].rbytes;
   } while (FUNC_2(&VAR_2->rx[VAR_4].statss,
             VAR_3));
  }
 }
 if (VAR_2->tx) {
  for (VAR_4 = 0; VAR_4 < VAR_2->tx_cfg.num_queues; VAR_4++) {
   do {
    VAR_3 =
      FUNC_1(&VAR_2->tx[VAR_4].statss);
    VAR_1->tx_packets += VAR_2->tx[VAR_4].pkt_done;
    VAR_1->tx_bytes += VAR_2->tx[VAR_4].bytes_done;
   } while (FUNC_2(&VAR_2->tx[VAR_4].statss,
             VAR_3));
  }
 }
}
