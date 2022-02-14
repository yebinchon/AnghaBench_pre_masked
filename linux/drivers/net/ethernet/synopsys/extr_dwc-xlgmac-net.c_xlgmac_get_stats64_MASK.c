
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xlgmac_stats {scalar_t__ txframecount_g; scalar_t__ txframecount_gb; int txoctetcount_gb; int rxfifooverflow; int rxcrcerror; int rxlengtherror; scalar_t__ rxmulticastframes_g; scalar_t__ rxunicastframes_g; scalar_t__ rxbroadcastframes_g; scalar_t__ rxframecount_gb; int rxoctetcount_gb; } ;
struct TYPE_3__ {int (* read_mmc_stats ) (struct xlgmac_pdata*) ;} ;
struct xlgmac_pdata {TYPE_1__ hw_ops; struct xlgmac_stats stats; } ;
struct rtnl_link_stats64 {int tx_dropped; scalar_t__ tx_errors; int tx_bytes; scalar_t__ tx_packets; int rx_fifo_errors; int rx_crc_errors; int rx_length_errors; scalar_t__ multicast; scalar_t__ rx_errors; int rx_bytes; scalar_t__ rx_packets; } ;
struct TYPE_4__ {int tx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;


 struct xlgmac_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xlgmac_pdata*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
          struct rtnl_link_stats64 *VAR_1)
{
 struct xlgmac_pdata *VAR_2 = FUNC_0(VAR_0);
 struct xlgmac_stats *VAR_3 = &VAR_2->stats;

 VAR_2->hw_ops.read_mmc_stats(VAR_2);

 VAR_1->rx_packets = VAR_3->rxframecount_gb;
 VAR_1->rx_bytes = VAR_3->rxoctetcount_gb;
 VAR_1->rx_errors = VAR_3->rxframecount_gb -
         VAR_3->rxbroadcastframes_g -
         VAR_3->rxmulticastframes_g -
         VAR_3->rxunicastframes_g;
 VAR_1->multicast = VAR_3->rxmulticastframes_g;
 VAR_1->rx_length_errors = VAR_3->rxlengtherror;
 VAR_1->rx_crc_errors = VAR_3->rxcrcerror;
 VAR_1->rx_fifo_errors = VAR_3->rxfifooverflow;

 VAR_1->tx_packets = VAR_3->txframecount_gb;
 VAR_1->tx_bytes = VAR_3->txoctetcount_gb;
 VAR_1->tx_errors = VAR_3->txframecount_gb - VAR_3->txframecount_g;
 VAR_1->tx_dropped = VAR_0->stats.tx_dropped;
}
