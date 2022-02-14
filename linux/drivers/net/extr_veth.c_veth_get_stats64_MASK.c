
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_rq_stats {scalar_t__ xdp_packets; scalar_t__ xdp_bytes; int xdp_drops; } ;
struct veth_priv {int peer; } ;
struct rtnl_link_stats64 {scalar_t__ tx_packets; scalar_t__ tx_bytes; scalar_t__ rx_packets; scalar_t__ rx_bytes; int rx_dropped; scalar_t__ tx_dropped; } ;
struct pcpu_lstats {scalar_t__ packets; scalar_t__ bytes; } ;
struct net_device {int dummy; } ;


 struct veth_priv* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct veth_rq_stats*,struct net_device*) ;
 scalar_t__ FUNC_5 (struct pcpu_lstats*,struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0,
        struct rtnl_link_stats64 *VAR_1)
{
 struct veth_priv *VAR_2 = FUNC_0(VAR_0);
 struct net_device *VAR_3;
 struct veth_rq_stats VAR_4;
 struct pcpu_lstats VAR_5;

 VAR_1->tx_dropped = FUNC_5(&VAR_5, VAR_0);
 VAR_1->tx_bytes = VAR_5.bytes;
 VAR_1->tx_packets = VAR_5.packets;

 FUNC_4(&VAR_4, VAR_0);
 VAR_1->rx_dropped = VAR_4.xdp_drops;
 VAR_1->rx_bytes = VAR_4.xdp_bytes;
 VAR_1->rx_packets = VAR_4.xdp_packets;

 FUNC_2();
 VAR_3 = FUNC_1(VAR_2->peer);
 if (VAR_3) {
  VAR_1->rx_dropped += FUNC_5(&VAR_5, VAR_3);
  VAR_1->rx_bytes += VAR_5.bytes;
  VAR_1->rx_packets += VAR_5.packets;

  FUNC_4(&VAR_4, VAR_3);
  VAR_1->tx_bytes += VAR_4.xdp_bytes;
  VAR_1->tx_packets += VAR_4.xdp_packets;
 }
 FUNC_3();
}
