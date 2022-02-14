
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_dropped; int rx_dropped; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {int dummy; } ;
struct myri10ge_slice_netstats {scalar_t__ tx_dropped; scalar_t__ rx_dropped; scalar_t__ tx_bytes; scalar_t__ rx_bytes; scalar_t__ tx_packets; scalar_t__ rx_packets; } ;
struct myri10ge_priv {int num_slices; TYPE_1__* ss; } ;
struct TYPE_2__ {struct myri10ge_slice_netstats stats; } ;


 struct myri10ge_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
          struct rtnl_link_stats64 *VAR_1)
{
 const struct myri10ge_priv *VAR_2 = FUNC_0(VAR_0);
 const struct myri10ge_slice_netstats *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_slices; VAR_4++) {
  VAR_3 = &VAR_2->ss[VAR_4].stats;
  VAR_1->rx_packets += VAR_3->rx_packets;
  VAR_1->tx_packets += VAR_3->tx_packets;
  VAR_1->rx_bytes += VAR_3->rx_bytes;
  VAR_1->tx_bytes += VAR_3->tx_bytes;
  VAR_1->rx_dropped += VAR_3->rx_dropped;
  VAR_1->tx_dropped += VAR_3->tx_dropped;
 }
}
