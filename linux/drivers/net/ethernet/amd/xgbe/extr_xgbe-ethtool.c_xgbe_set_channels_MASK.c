
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int rx_ch_cnt; unsigned int tx_ch_cnt; } ;
struct xgbe_prv_data {unsigned int rx_max_channel_count; unsigned int channel_irq_count; unsigned int tx_max_channel_count; unsigned int tx_max_q_count; int new_rx_ring_count; unsigned int rx_ring_count; int new_tx_ring_count; unsigned int tx_ring_count; TYPE_1__ hw_feat; } ;
struct net_device {int dummy; } ;
struct ethtool_channels {unsigned int combined_count; unsigned int rx_count; unsigned int tx_count; scalar_t__ other_count; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 struct xgbe_prv_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct net_device*,struct ethtool_channels*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
        struct ethtool_channels *VAR_2)
{
 struct xgbe_prv_data *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;







 VAR_4 = FUNC_0(VAR_3->hw_feat.rx_ch_cnt, VAR_3->rx_max_channel_count);
 VAR_4 = FUNC_0(VAR_4, VAR_3->channel_irq_count);
 VAR_6 = FUNC_0(VAR_3->hw_feat.tx_ch_cnt, VAR_3->tx_max_channel_count);
 VAR_6 = FUNC_0(VAR_6, VAR_3->tx_max_q_count);
 VAR_6 = FUNC_0(VAR_6, VAR_3->channel_irq_count);

 VAR_8 = FUNC_0(VAR_4, VAR_6);


 if (VAR_2->other_count) {
  FUNC_1(VAR_1,
      "other channel count must be zero\n");
  return -VAR_0;
 }


 if (!VAR_2->combined_count) {
  FUNC_1(VAR_1,
      "at least one combined Rx/Tx channel is required\n");
  FUNC_4(VAR_1, VAR_2);
  return -VAR_0;
 }


 if (VAR_2->combined_count > VAR_8) {
  FUNC_1(VAR_1,
      "combined channel count cannot exceed %u\n",
      VAR_8);
  FUNC_4(VAR_1, VAR_2);
  return -VAR_0;
 }


 if (VAR_2->rx_count && VAR_2->tx_count) {
  FUNC_1(VAR_1,
      "cannot specify both Rx-only and Tx-only channels\n");
  FUNC_4(VAR_1, VAR_2);
  return -VAR_0;
 }


 if ((VAR_2->combined_count + VAR_2->rx_count) > VAR_4) {
  FUNC_1(VAR_1,
      "total Rx channels (%u) requested exceeds maximum available (%u)\n",
      VAR_2->combined_count + VAR_2->rx_count, VAR_4);
  FUNC_4(VAR_1, VAR_2);
  return -VAR_0;
 }

 if ((VAR_2->combined_count + VAR_2->tx_count) > VAR_6) {
  FUNC_1(VAR_1,
      "total Tx channels (%u) requested exceeds maximum available (%u)\n",
      VAR_2->combined_count + VAR_2->tx_count, VAR_6);
  FUNC_4(VAR_1, VAR_2);
  return -VAR_0;
 }

 VAR_4 = VAR_2->combined_count + VAR_2->rx_count;
 VAR_6 = VAR_2->combined_count + VAR_2->tx_count;

 VAR_5 = VAR_3->new_rx_ring_count ? : VAR_3->rx_ring_count;
 VAR_7 = VAR_3->new_tx_ring_count ? : VAR_3->tx_ring_count;

 if ((VAR_4 == VAR_5) && (VAR_6 == VAR_7))
  goto out;

 VAR_3->new_rx_ring_count = VAR_4;
 VAR_3->new_tx_ring_count = VAR_6;

 FUNC_3(VAR_3);

out:
 return 0;
}
