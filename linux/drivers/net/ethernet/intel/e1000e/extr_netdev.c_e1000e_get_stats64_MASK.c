
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_carrier_errors; scalar_t__ tx_window_errors; scalar_t__ tx_aborted_errors; scalar_t__ tx_errors; int rx_missed_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_length_errors; scalar_t__ rx_errors; int collisions; int multicast; int tx_packets; int tx_bytes; int rx_packets; int rx_bytes; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tncrs; scalar_t__ latecol; scalar_t__ ecol; int mpc; scalar_t__ algnerrc; scalar_t__ crcerrs; scalar_t__ roc; scalar_t__ ruc; scalar_t__ cexterr; scalar_t__ rxerrc; int colc; int mprc; int gptc; int gotc; int gprc; int gorc; } ;
struct e1000_adapter {int stats64_lock; TYPE_1__ stats; } ;


 int FUNC_0 (struct e1000_adapter*) ;
 struct e1000_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct net_device *VAR_0,
   struct rtnl_link_stats64 *VAR_1)
{
 struct e1000_adapter *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(&VAR_2->stats64_lock);
 FUNC_0(VAR_2);

 VAR_1->rx_bytes = VAR_2->stats.gorc;
 VAR_1->rx_packets = VAR_2->stats.gprc;
 VAR_1->tx_bytes = VAR_2->stats.gotc;
 VAR_1->tx_packets = VAR_2->stats.gptc;
 VAR_1->multicast = VAR_2->stats.mprc;
 VAR_1->collisions = VAR_2->stats.colc;






 VAR_1->rx_errors = VAR_2->stats.rxerrc +
     VAR_2->stats.crcerrs + VAR_2->stats.algnerrc +
     VAR_2->stats.ruc + VAR_2->stats.roc + VAR_2->stats.cexterr;
 VAR_1->rx_length_errors = VAR_2->stats.ruc + VAR_2->stats.roc;
 VAR_1->rx_crc_errors = VAR_2->stats.crcerrs;
 VAR_1->rx_frame_errors = VAR_2->stats.algnerrc;
 VAR_1->rx_missed_errors = VAR_2->stats.mpc;


 VAR_1->tx_errors = VAR_2->stats.ecol + VAR_2->stats.latecol;
 VAR_1->tx_aborted_errors = VAR_2->stats.ecol;
 VAR_1->tx_window_errors = VAR_2->stats.latecol;
 VAR_1->tx_carrier_errors = VAR_2->stats.tncrs;



 FUNC_3(&VAR_2->stats64_lock);
}
