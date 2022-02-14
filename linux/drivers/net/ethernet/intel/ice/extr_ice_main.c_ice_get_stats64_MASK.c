
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int rx_length_errors; int rx_crc_errors; int rx_dropped; int rx_errors; int tx_dropped; int tx_errors; int multicast; int rx_bytes; int rx_packets; int tx_bytes; int tx_packets; } ;
struct net_device {int dummy; } ;
struct ice_vsi {int state; int num_rxq; int num_txq; struct rtnl_link_stats64 net_stats; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;


 int VAR_0 ;
 int FUNC_0 (struct ice_vsi*) ;
 struct ice_netdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static
void FUNC_3(struct net_device *VAR_1, struct rtnl_link_stats64 *VAR_2)
{
 struct ice_netdev_priv *VAR_3 = FUNC_1(VAR_1);
 struct rtnl_link_stats64 *VAR_4;
 struct ice_vsi *VAR_5 = VAR_3->vsi;

 VAR_4 = &VAR_5->net_stats;

 if (!VAR_5->num_txq || !VAR_5->num_rxq)
  return;






 if (!FUNC_2(VAR_0, VAR_5->state))
  FUNC_0(VAR_5);
 VAR_2->tx_packets = VAR_4->tx_packets;
 VAR_2->tx_bytes = VAR_4->tx_bytes;
 VAR_2->rx_packets = VAR_4->rx_packets;
 VAR_2->rx_bytes = VAR_4->rx_bytes;





 VAR_2->multicast = VAR_4->multicast;
 VAR_2->tx_errors = VAR_4->tx_errors;
 VAR_2->tx_dropped = VAR_4->tx_dropped;
 VAR_2->rx_errors = VAR_4->rx_errors;
 VAR_2->rx_dropped = VAR_4->rx_dropped;
 VAR_2->rx_crc_errors = VAR_4->rx_crc_errors;
 VAR_2->rx_length_errors = VAR_4->rx_length_errors;
}
