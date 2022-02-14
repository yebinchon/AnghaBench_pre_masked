
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int rx_ch_cnt; unsigned int tx_ch_cnt; } ;
struct xgbe_prv_data {unsigned int rx_max_channel_count; unsigned int channel_irq_count; unsigned int tx_max_channel_count; unsigned int tx_max_q_count; unsigned int rx_ring_count; unsigned int tx_ring_count; scalar_t__ new_tx_ring_count; scalar_t__ new_rx_ring_count; TYPE_1__ hw_feat; } ;
struct net_device {int dummy; } ;
struct ethtool_channels {unsigned int max_combined; unsigned int max_rx; unsigned int max_tx; unsigned int combined_count; unsigned int rx_count; unsigned int tx_count; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 struct xgbe_prv_data* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
         struct ethtool_channels *VAR_1)
{
 struct xgbe_prv_data *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3, VAR_4, VAR_5;







 VAR_3 = FUNC_0(VAR_2->hw_feat.rx_ch_cnt, VAR_2->rx_max_channel_count);
 VAR_3 = FUNC_0(VAR_3, VAR_2->channel_irq_count);
 VAR_4 = FUNC_0(VAR_2->hw_feat.tx_ch_cnt, VAR_2->tx_max_channel_count);
 VAR_4 = FUNC_0(VAR_4, VAR_2->channel_irq_count);
 VAR_4 = FUNC_0(VAR_4, VAR_2->tx_max_q_count);

 VAR_5 = FUNC_0(VAR_3, VAR_4);

 VAR_1->max_combined = VAR_5;
 VAR_1->max_rx = VAR_3 ? VAR_3 - 1 : 0;
 VAR_1->max_tx = VAR_4 ? VAR_4 - 1 : 0;


 VAR_3 = VAR_2->new_rx_ring_count ? : VAR_2->rx_ring_count;
 VAR_4 = VAR_2->new_tx_ring_count ? : VAR_2->tx_ring_count;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 VAR_3 -= VAR_5;
 VAR_4 -= VAR_5;

 VAR_1->combined_count = VAR_5;
 VAR_1->rx_count = VAR_3;
 VAR_1->tx_count = VAR_4;
}
