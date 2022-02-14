
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_hw_if {unsigned int (* usec_to_riwt ) (struct xgbe_prv_data*,unsigned int) ;unsigned int (* riwt_to_usec ) (struct xgbe_prv_data*,unsigned int) ;int (* config_tx_coalesce ) (struct xgbe_prv_data*) ;int (* config_rx_coalesce ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {unsigned int rx_desc_count; unsigned int tx_desc_count; unsigned int rx_riwt; unsigned int rx_usecs; unsigned int rx_frames; unsigned int tx_frames; struct xgbe_hw_if hw_if; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {unsigned int rx_coalesce_usecs; unsigned int rx_max_coalesced_frames; unsigned int tx_max_coalesced_frames; scalar_t__ rate_sample_interval; scalar_t__ tx_max_coalesced_frames_high; scalar_t__ tx_coalesce_usecs_high; scalar_t__ rx_max_coalesced_frames_high; scalar_t__ rx_coalesce_usecs_high; scalar_t__ pkt_rate_high; scalar_t__ tx_max_coalesced_frames_low; scalar_t__ tx_coalesce_usecs_low; scalar_t__ rx_max_coalesced_frames_low; scalar_t__ rx_coalesce_usecs_low; scalar_t__ pkt_rate_low; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ stats_block_coalesce_usecs; scalar_t__ tx_max_coalesced_frames_irq; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ tx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 struct xgbe_prv_data* FUNC_1 (struct net_device*) ;
 unsigned int FUNC_2 (struct xgbe_prv_data*,unsigned int) ;
 unsigned int FUNC_3 (struct xgbe_prv_data*,unsigned int) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3,
        struct ethtool_coalesce *VAR_4)
{
 struct xgbe_prv_data *VAR_5 = FUNC_1(VAR_3);
 struct xgbe_hw_if *VAR_6 = &VAR_5->hw_if;
 unsigned int VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10;


 if ((VAR_4->rx_coalesce_usecs_irq) ||
     (VAR_4->rx_max_coalesced_frames_irq) ||
     (VAR_4->tx_coalesce_usecs) ||
     (VAR_4->tx_coalesce_usecs_irq) ||
     (VAR_4->tx_max_coalesced_frames_irq) ||
     (VAR_4->stats_block_coalesce_usecs) ||
     (VAR_4->use_adaptive_rx_coalesce) ||
     (VAR_4->use_adaptive_tx_coalesce) ||
     (VAR_4->pkt_rate_low) ||
     (VAR_4->rx_coalesce_usecs_low) ||
     (VAR_4->rx_max_coalesced_frames_low) ||
     (VAR_4->tx_coalesce_usecs_low) ||
     (VAR_4->tx_max_coalesced_frames_low) ||
     (VAR_4->pkt_rate_high) ||
     (VAR_4->rx_coalesce_usecs_high) ||
     (VAR_4->rx_max_coalesced_frames_high) ||
     (VAR_4->tx_coalesce_usecs_high) ||
     (VAR_4->tx_max_coalesced_frames_high) ||
     (VAR_4->rate_sample_interval)) {
  FUNC_0(VAR_3, "unsupported coalescing parameter\n");
  return -VAR_1;
 }

 VAR_8 = VAR_6->usec_to_riwt(VAR_5, VAR_4->rx_coalesce_usecs);
 VAR_9 = VAR_4->rx_coalesce_usecs;
 VAR_7 = VAR_4->rx_max_coalesced_frames;


 if (VAR_9 && !VAR_8)
  VAR_8 = 1;


 if (VAR_8 > VAR_2) {
  FUNC_0(VAR_3, "rx-usec is limited to %d usecs\n",
      VAR_6->riwt_to_usec(VAR_5, VAR_2));
  return -VAR_0;
 }
 if (VAR_7 > VAR_5->rx_desc_count) {
  FUNC_0(VAR_3, "rx-frames is limited to %d frames\n",
      VAR_5->rx_desc_count);
  return -VAR_0;
 }

 VAR_10 = VAR_4->tx_max_coalesced_frames;


 if (VAR_10 > VAR_5->tx_desc_count) {
  FUNC_0(VAR_3, "tx-frames is limited to %d frames\n",
      VAR_5->tx_desc_count);
  return -VAR_0;
 }

 VAR_5->rx_riwt = VAR_8;
 VAR_5->rx_usecs = VAR_9;
 VAR_5->rx_frames = VAR_7;
 VAR_6->config_rx_coalesce(VAR_5);

 VAR_5->tx_frames = VAR_10;
 VAR_6->config_tx_coalesce(VAR_5);

 return 0;
}
