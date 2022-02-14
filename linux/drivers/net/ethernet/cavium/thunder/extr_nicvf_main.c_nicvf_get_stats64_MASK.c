
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int tx_dropped; int tx_packets; int tx_bytes; int multicast; int rx_dropped; int rx_packets; int rx_bytes; } ;
struct nicvf_hw_stats {int tx_drops; int tx_frames; int tx_bytes; int rx_mcast_frames; int rx_drops; int rx_frames; int rx_bytes; } ;
struct nicvf {struct nicvf_hw_stats hw_stats; } ;
struct net_device {int dummy; } ;


 struct nicvf* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nicvf*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
         struct rtnl_link_stats64 *VAR_1)
{
 struct nicvf *VAR_2 = FUNC_0(VAR_0);
 struct nicvf_hw_stats *VAR_3 = &VAR_2->hw_stats;

 FUNC_1(VAR_2);

 VAR_1->rx_bytes = VAR_3->rx_bytes;
 VAR_1->rx_packets = VAR_3->rx_frames;
 VAR_1->rx_dropped = VAR_3->rx_drops;
 VAR_1->multicast = VAR_3->rx_mcast_frames;

 VAR_1->tx_bytes = VAR_3->tx_bytes;
 VAR_1->tx_packets = VAR_3->tx_frames;
 VAR_1->tx_dropped = VAR_3->tx_drops;

}
