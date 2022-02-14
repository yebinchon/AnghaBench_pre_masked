
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct net_device {int dummy; } ;
struct gve_tx_ring {scalar_t__ stop_queue; scalar_t__ wake_queue; scalar_t__ done; scalar_t__ req; scalar_t__ bytes_done; scalar_t__ pkt_done; int statss; } ;
struct gve_rx_ring {scalar_t__ fill_cnt; scalar_t__ cnt; scalar_t__ rbytes; scalar_t__ rpackets; int statss; } ;
struct TYPE_4__ {int num_queues; } ;
struct TYPE_3__ {int num_queues; } ;
struct gve_priv {TYPE_2__ tx_cfg; struct gve_tx_ring* tx; TYPE_1__ rx_cfg; struct gve_rx_ring* rx; scalar_t__ tx_timeo_cnt; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gve_priv*,struct gve_tx_ring*) ;
 struct gve_priv* FUNC_3 (struct net_device*) ;
 unsigned int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_3,
        struct ethtool_stats *VAR_4, u64 *VAR_5)
{
 struct gve_priv *VAR_6 = FUNC_3(VAR_3);
 u64 VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_0();

 for (VAR_7 = 0, VAR_8 = 0, VAR_12 = 0;
      VAR_12 < VAR_6->rx_cfg.num_queues; VAR_12++) {
  if (VAR_6->rx) {
   do {
    VAR_11 =
      FUNC_4(&VAR_6->rx[VAR_12].statss);
    VAR_7 += VAR_6->rx[VAR_12].rpackets;
    VAR_8 += VAR_6->rx[VAR_12].rbytes;
   } while (FUNC_5(&VAR_6->rx[VAR_12].statss,
             VAR_11));
  }
 }
 for (VAR_9 = 0, VAR_10 = 0, VAR_12 = 0;
      VAR_12 < VAR_6->tx_cfg.num_queues; VAR_12++) {
  if (VAR_6->tx) {
   do {
    VAR_11 =
      FUNC_4(&VAR_6->tx[VAR_12].statss);
    VAR_9 += VAR_6->tx[VAR_12].pkt_done;
    VAR_10 += VAR_6->tx[VAR_12].bytes_done;
   } while (FUNC_5(&VAR_6->tx[VAR_12].statss,
             VAR_11));
  }
 }

 VAR_13 = 0;
 VAR_5[VAR_13++] = VAR_7;
 VAR_5[VAR_13++] = VAR_9;
 VAR_5[VAR_13++] = VAR_8;
 VAR_5[VAR_13++] = VAR_10;

 VAR_13 += 2;
 VAR_5[VAR_13++] = VAR_6->tx_timeo_cnt;
 VAR_13 = VAR_0;


 if (VAR_6->rx) {
  for (VAR_12 = 0; VAR_12 < VAR_6->rx_cfg.num_queues; VAR_12++) {
   struct gve_rx_ring *VAR_14 = &VAR_6->rx[VAR_12];

   VAR_5[VAR_13++] = VAR_14->cnt;
   VAR_5[VAR_13++] = VAR_14->fill_cnt;
  }
 } else {
  VAR_13 += VAR_6->rx_cfg.num_queues * VAR_1;
 }

 if (VAR_6->tx) {
  for (VAR_12 = 0; VAR_12 < VAR_6->tx_cfg.num_queues; VAR_12++) {
   struct gve_tx_ring *VAR_15 = &VAR_6->tx[VAR_12];

   VAR_5[VAR_13++] = VAR_15->req;
   VAR_5[VAR_13++] = VAR_15->done;
   VAR_5[VAR_13++] = VAR_15->wake_queue;
   VAR_5[VAR_13++] = VAR_15->stop_queue;
   VAR_5[VAR_13++] = FUNC_1(FUNC_2(VAR_6,
           VAR_15));
  }
 } else {
  VAR_13 += VAR_6->tx_cfg.num_queues * VAR_2;
 }
}
