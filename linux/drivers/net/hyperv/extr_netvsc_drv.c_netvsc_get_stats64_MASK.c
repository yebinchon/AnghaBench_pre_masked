
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rtnl_link_stats64 {int multicast; int rx_packets; int rx_bytes; int tx_packets; int tx_bytes; int tx_dropped; } ;
struct netvsc_vf_pcpu_stats {scalar_t__ tx_dropped; scalar_t__ tx_bytes; scalar_t__ rx_bytes; scalar_t__ tx_packets; scalar_t__ rx_packets; } ;
struct netvsc_stats {scalar_t__ broadcast; scalar_t__ multicast; scalar_t__ bytes; scalar_t__ packets; int syncp; } ;
struct netvsc_device {int num_chn; struct netvsc_channel* chan_table; } ;
struct netvsc_channel {struct netvsc_stats rx_stats; struct netvsc_stats tx_stats; } ;
struct net_device_context {int nvdev; } ;
struct net_device {int stats; } ;


 struct net_device_context* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rtnl_link_stats64*,int *) ;
 int FUNC_2 (struct net_device*,struct netvsc_vf_pcpu_stats*) ;
 struct netvsc_device* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 unsigned int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_0,
          struct rtnl_link_stats64 *VAR_1)
{
 struct net_device_context *VAR_2 = FUNC_0(VAR_0);
 struct netvsc_device *VAR_3;
 struct netvsc_vf_pcpu_stats VAR_4;
 int VAR_5;

 FUNC_4();

 VAR_3 = FUNC_3(VAR_2->nvdev);
 if (!VAR_3)
  goto out;

 FUNC_1(VAR_1, &VAR_0->stats);

 FUNC_2(VAR_0, &VAR_4);
 VAR_1->rx_packets += VAR_4.rx_packets;
 VAR_1->tx_packets += VAR_4.tx_packets;
 VAR_1->rx_bytes += VAR_4.rx_bytes;
 VAR_1->tx_bytes += VAR_4.tx_bytes;
 VAR_1->tx_dropped += VAR_4.tx_dropped;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_chn; VAR_5++) {
  const struct netvsc_channel *VAR_6 = &VAR_3->chan_table[VAR_5];
  const struct netvsc_stats *VAR_7;
  u64 VAR_8, VAR_9, VAR_10;
  unsigned int VAR_11;

  VAR_7 = &VAR_6->tx_stats;
  do {
   VAR_11 = FUNC_6(&VAR_7->syncp);
   VAR_8 = VAR_7->packets;
   VAR_9 = VAR_7->bytes;
  } while (FUNC_7(&VAR_7->syncp, VAR_11));

  VAR_1->tx_bytes += VAR_9;
  VAR_1->tx_packets += VAR_8;

  VAR_7 = &VAR_6->rx_stats;
  do {
   VAR_11 = FUNC_6(&VAR_7->syncp);
   VAR_8 = VAR_7->packets;
   VAR_9 = VAR_7->bytes;
   VAR_10 = VAR_7->multicast + VAR_7->broadcast;
  } while (FUNC_7(&VAR_7->syncp, VAR_11));

  VAR_1->rx_bytes += VAR_9;
  VAR_1->rx_packets += VAR_8;
  VAR_1->multicast += VAR_10;
 }
out:
 FUNC_5();
}
