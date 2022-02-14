
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rx_missed_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_over_errors; scalar_t__ rx_length_errors; int tx_errors; scalar_t__ rx_errors; int rx_bytes; int tx_bytes; int rx_packets; int tx_packets; } ;
struct tbnet {TYPE_1__ stats; } ;
struct rtnl_link_stats64 {scalar_t__ rx_missed_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_over_errors; scalar_t__ rx_length_errors; int tx_errors; scalar_t__ rx_errors; int rx_bytes; int tx_bytes; int rx_packets; int tx_packets; } ;
struct net_device {int dummy; } ;


 struct tbnet* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
         struct rtnl_link_stats64 *VAR_1)
{
 struct tbnet *VAR_2 = FUNC_0(VAR_0);

 VAR_1->tx_packets = VAR_2->stats.tx_packets;
 VAR_1->rx_packets = VAR_2->stats.rx_packets;
 VAR_1->tx_bytes = VAR_2->stats.tx_bytes;
 VAR_1->rx_bytes = VAR_2->stats.rx_bytes;
 VAR_1->rx_errors = VAR_2->stats.rx_errors + VAR_2->stats.rx_length_errors +
  VAR_2->stats.rx_over_errors + VAR_2->stats.rx_crc_errors +
  VAR_2->stats.rx_missed_errors;
 VAR_1->tx_errors = VAR_2->stats.tx_errors;
 VAR_1->rx_length_errors = VAR_2->stats.rx_length_errors;
 VAR_1->rx_over_errors = VAR_2->stats.rx_over_errors;
 VAR_1->rx_crc_errors = VAR_2->stats.rx_crc_errors;
 VAR_1->rx_missed_errors = VAR_2->stats.rx_missed_errors;
}
