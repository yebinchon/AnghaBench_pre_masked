
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct rtnl_link_stats64 {int tx_compressed; int rx_compressed; int tx_window_errors; int rx_length_errors; int tx_heartbeat_errors; int tx_fifo_errors; int tx_carrier_errors; int tx_aborted_errors; int rx_missed_errors; int rx_fifo_errors; int rx_frame_errors; int rx_crc_errors; int rx_over_errors; int collisions; int multicast; int tx_dropped; int rx_dropped; int tx_errors; int rx_errors; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct TYPE_6__ {int counter; } ;
struct TYPE_5__ {int counter; } ;
struct net_device {TYPE_2__ tx_dropped; TYPE_1__ rx_dropped; int stats; } ;
struct hns_nic_priv {int tx_timeout_count; struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_4__* dev; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_8__ {TYPE_3__* ops; } ;
struct TYPE_7__ {int (* get_stats ) (struct hnae_handle*,int *) ;int (* update_stats ) (struct hnae_handle*,int *) ;} ;


 struct rtnl_link_stats64* FUNC_0 (struct net_device*,struct rtnl_link_stats64*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct hns_nic_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct hnae_handle*,int *) ;
 int FUNC_4 (struct hnae_handle*,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0,
      struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 u64 *VAR_3 = VAR_2;
 struct hns_nic_priv *VAR_4 = FUNC_2(VAR_0);
 struct hnae_handle *VAR_5 = VAR_4->ae_handle;
 const struct rtnl_link_stats64 *VAR_6;
 struct rtnl_link_stats64 VAR_7;

 if (!VAR_5->dev->ops->get_stats || !VAR_5->dev->ops->update_stats) {
  FUNC_1(VAR_0, "get_stats or update_stats is null!\n");
  return;
 }

 VAR_5->dev->ops->update_stats(VAR_5, &VAR_0->stats);

 VAR_6 = FUNC_0(VAR_0, &VAR_7);


 VAR_3[0] = VAR_6->rx_packets;
 VAR_3[1] = VAR_6->tx_packets;
 VAR_3[2] = VAR_6->rx_bytes;
 VAR_3[3] = VAR_6->tx_bytes;
 VAR_3[4] = VAR_6->rx_errors;
 VAR_3[5] = VAR_6->tx_errors;
 VAR_3[6] = VAR_6->rx_dropped;
 VAR_3[7] = VAR_6->tx_dropped;
 VAR_3[8] = VAR_6->multicast;
 VAR_3[9] = VAR_6->collisions;
 VAR_3[10] = VAR_6->rx_over_errors;
 VAR_3[11] = VAR_6->rx_crc_errors;
 VAR_3[12] = VAR_6->rx_frame_errors;
 VAR_3[13] = VAR_6->rx_fifo_errors;
 VAR_3[14] = VAR_6->rx_missed_errors;
 VAR_3[15] = VAR_6->tx_aborted_errors;
 VAR_3[16] = VAR_6->tx_carrier_errors;
 VAR_3[17] = VAR_6->tx_fifo_errors;
 VAR_3[18] = VAR_6->tx_heartbeat_errors;
 VAR_3[19] = VAR_6->rx_length_errors;
 VAR_3[20] = VAR_6->tx_window_errors;
 VAR_3[21] = VAR_6->rx_compressed;
 VAR_3[22] = VAR_6->tx_compressed;

 VAR_3[23] = VAR_0->rx_dropped.counter;
 VAR_3[24] = VAR_0->tx_dropped.counter;

 VAR_3[25] = VAR_4->tx_timeout_count;


 VAR_5->dev->ops->get_stats(VAR_5, &VAR_3[26]);
}
