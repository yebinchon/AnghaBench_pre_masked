
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rtnl_link_stats64 {int rx_missed_errors; int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {int rx_missed_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {scalar_t__ bytes; scalar_t__ packets; } ;
struct fm10k_ring {TYPE_1__ stats; int syncp; } ;
struct fm10k_intfc {unsigned int num_rx_queues; unsigned int num_tx_queues; int * tx_ring; int * rx_ring; } ;


 struct fm10k_ring* FUNC_0 (int ) ;
 struct fm10k_intfc* FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0,
         struct rtnl_link_stats64 *VAR_1)
{
 struct fm10k_intfc *VAR_2 = FUNC_1(VAR_0);
 struct fm10k_ring *VAR_3;
 unsigned int VAR_4, VAR_5;
 u64 VAR_6, VAR_7;

 FUNC_2();

 for (VAR_5 = 0; VAR_5 < VAR_2->num_rx_queues; VAR_5++) {
  VAR_3 = FUNC_0(VAR_2->rx_ring[VAR_5]);

  if (!VAR_3)
   continue;

  do {
   VAR_4 = FUNC_4(&VAR_3->syncp);
   VAR_7 = VAR_3->stats.packets;
   VAR_6 = VAR_3->stats.bytes;
  } while (FUNC_5(&VAR_3->syncp, VAR_4));

  VAR_1->rx_packets += VAR_7;
  VAR_1->rx_bytes += VAR_6;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->num_tx_queues; VAR_5++) {
  VAR_3 = FUNC_0(VAR_2->tx_ring[VAR_5]);

  if (!VAR_3)
   continue;

  do {
   VAR_4 = FUNC_4(&VAR_3->syncp);
   VAR_7 = VAR_3->stats.packets;
   VAR_6 = VAR_3->stats.bytes;
  } while (FUNC_5(&VAR_3->syncp, VAR_4));

  VAR_1->tx_packets += VAR_7;
  VAR_1->tx_bytes += VAR_6;
 }

 FUNC_3();


 VAR_1->rx_missed_errors = VAR_0->stats.rx_missed_errors;
}
