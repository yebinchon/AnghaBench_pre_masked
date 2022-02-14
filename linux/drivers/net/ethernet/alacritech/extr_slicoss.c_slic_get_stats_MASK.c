
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_stats {int dummy; } ;
struct slic_device {struct slic_stats stats; } ;
struct rtnl_link_stats64 {int tx_carrier_errors; int rx_fifo_errors; int rx_crc_errors; int rx_over_errors; int multicast; int tx_dropped; int rx_dropped; int rx_errors; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ,struct slic_stats*,int ) ;
 struct slic_device* FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_12,
      struct rtnl_link_stats64 *VAR_13)
{
 struct slic_device *VAR_14 = FUNC_1(VAR_12);
 struct slic_stats *VAR_15 = &VAR_14->stats;

 FUNC_0(VAR_13->rx_packets, VAR_15, VAR_7);
 FUNC_0(VAR_13->tx_packets, VAR_15, VAR_11);
 FUNC_0(VAR_13->rx_bytes, VAR_15, VAR_2);
 FUNC_0(VAR_13->tx_bytes, VAR_15, VAR_8);
 FUNC_0(VAR_13->rx_errors, VAR_15, VAR_4);
 FUNC_0(VAR_13->rx_dropped, VAR_15, VAR_0);
 FUNC_0(VAR_13->tx_dropped, VAR_15, VAR_10);
 FUNC_0(VAR_13->multicast, VAR_15, VAR_5);
 FUNC_0(VAR_13->rx_over_errors, VAR_15, VAR_1);
 FUNC_0(VAR_13->rx_crc_errors, VAR_15, VAR_3);
 FUNC_0(VAR_13->rx_fifo_errors, VAR_15, VAR_6);
 FUNC_0(VAR_13->tx_carrier_errors, VAR_15, VAR_9);
}
