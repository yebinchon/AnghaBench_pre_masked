
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_hw_ops {unsigned int (* usec_to_riwt ) (struct xlgmac_pdata*,unsigned int) ;int (* config_tx_coalesce ) (struct xlgmac_pdata*) ;int (* config_rx_coalesce ) (struct xlgmac_pdata*) ;} ;
struct xlgmac_pdata {unsigned int rx_desc_count; unsigned int tx_desc_count; unsigned int rx_riwt; unsigned int rx_usecs; unsigned int rx_frames; unsigned int tx_frames; struct xlgmac_hw_ops hw_ops; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {unsigned int rx_coalesce_usecs; unsigned int rx_max_coalesced_frames; unsigned int tx_max_coalesced_frames; scalar_t__ rate_sample_interval; scalar_t__ tx_max_coalesced_frames_high; scalar_t__ rx_max_coalesced_frames_high; scalar_t__ rx_coalesce_usecs_high; scalar_t__ pkt_rate_high; scalar_t__ tx_max_coalesced_frames_low; scalar_t__ tx_coalesce_usecs_low; scalar_t__ rx_coalesce_usecs_low; scalar_t__ rx_max_coalesced_frames_low; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ pkt_rate_low; scalar_t__ stats_block_coalesce_usecs; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ tx_max_coalesced_frames_irq; scalar_t__ tx_coalesce_usecs_high; scalar_t__ tx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct xlgmac_pdata* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (struct xlgmac_pdata*,unsigned int) ;
 int FUNC_2 (struct xlgmac_pdata*) ;
 int FUNC_3 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
           struct ethtool_coalesce *VAR_5)
{
 struct xlgmac_pdata *VAR_6 = FUNC_0(VAR_4);
 struct xlgmac_hw_ops *VAR_7 = &VAR_6->hw_ops;
 unsigned int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;


 if ((VAR_5->rx_coalesce_usecs_irq) || (VAR_5->rx_max_coalesced_frames_irq) ||
     (VAR_5->tx_coalesce_usecs) || (VAR_5->tx_coalesce_usecs_high) ||
     (VAR_5->tx_max_coalesced_frames_irq) || (VAR_5->tx_coalesce_usecs_irq) ||
     (VAR_5->stats_block_coalesce_usecs) || (VAR_5->pkt_rate_low) ||
     (VAR_5->use_adaptive_rx_coalesce) || (VAR_5->use_adaptive_tx_coalesce) ||
     (VAR_5->rx_max_coalesced_frames_low) || (VAR_5->rx_coalesce_usecs_low) ||
     (VAR_5->tx_coalesce_usecs_low) || (VAR_5->tx_max_coalesced_frames_low) ||
     (VAR_5->pkt_rate_high) || (VAR_5->rx_coalesce_usecs_high) ||
     (VAR_5->rx_max_coalesced_frames_high) ||
     (VAR_5->tx_max_coalesced_frames_high) ||
     (VAR_5->rate_sample_interval))
  return -VAR_1;

 VAR_10 = VAR_5->rx_coalesce_usecs;
 VAR_9 = VAR_7->usec_to_riwt(VAR_6, VAR_10);
 VAR_8 = VAR_5->rx_max_coalesced_frames;
 VAR_11 = VAR_5->tx_max_coalesced_frames;

 if ((VAR_9 > VAR_2) ||
     (VAR_9 < VAR_3) ||
     (VAR_8 > VAR_6->rx_desc_count))
  return -VAR_0;

 if (VAR_11 > VAR_6->tx_desc_count)
  return -VAR_0;

 VAR_6->rx_riwt = VAR_9;
 VAR_6->rx_usecs = VAR_10;
 VAR_6->rx_frames = VAR_8;
 VAR_7->config_rx_coalesce(VAR_6);

 VAR_6->tx_frames = VAR_11;
 VAR_7->config_tx_coalesce(VAR_6);

 return 0;
}
