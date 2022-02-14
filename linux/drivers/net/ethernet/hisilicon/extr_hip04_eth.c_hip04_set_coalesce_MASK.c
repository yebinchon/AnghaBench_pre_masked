
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hip04_priv {scalar_t__ tx_coalesce_usecs; scalar_t__ tx_coalesce_frames; } ;
struct ethtool_coalesce {scalar_t__ tx_coalesce_usecs; scalar_t__ tx_max_coalesced_frames; scalar_t__ rate_sample_interval; scalar_t__ tx_max_coalesced_frames_high; scalar_t__ stats_block_coalesce_usecs; scalar_t__ tx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames_high; scalar_t__ rx_coalesce_usecs_high; scalar_t__ tx_coalesce_usecs_low; scalar_t__ pkt_rate_high; scalar_t__ tx_max_coalesced_frames_low; scalar_t__ tx_coalesce_usecs_high; scalar_t__ rx_max_coalesced_frames_low; scalar_t__ rx_coalesce_usecs_low; scalar_t__ pkt_rate_low; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs_irq; scalar_t__ rx_max_coalesced_frames; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct hip04_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_6,
         struct ethtool_coalesce *VAR_7)
{
 struct hip04_priv *VAR_8 = FUNC_0(VAR_6);


 if ((VAR_7->rx_max_coalesced_frames) || (VAR_7->rx_coalesce_usecs_irq) ||
     (VAR_7->rx_max_coalesced_frames_irq) || (VAR_7->tx_coalesce_usecs_irq) ||
     (VAR_7->use_adaptive_rx_coalesce) || (VAR_7->use_adaptive_tx_coalesce) ||
     (VAR_7->pkt_rate_low) || (VAR_7->rx_coalesce_usecs_low) ||
     (VAR_7->rx_max_coalesced_frames_low) || (VAR_7->tx_coalesce_usecs_high) ||
     (VAR_7->tx_max_coalesced_frames_low) || (VAR_7->pkt_rate_high) ||
     (VAR_7->tx_coalesce_usecs_low) || (VAR_7->rx_coalesce_usecs_high) ||
     (VAR_7->rx_max_coalesced_frames_high) || (VAR_7->rx_coalesce_usecs) ||
     (VAR_7->tx_max_coalesced_frames_irq) ||
     (VAR_7->stats_block_coalesce_usecs) ||
     (VAR_7->tx_max_coalesced_frames_high) || (VAR_7->rate_sample_interval))
  return -VAR_1;

 if ((VAR_7->tx_coalesce_usecs > VAR_3 ||
      VAR_7->tx_coalesce_usecs < VAR_5) ||
     (VAR_7->tx_max_coalesced_frames > VAR_2 ||
      VAR_7->tx_max_coalesced_frames < VAR_4))
  return -VAR_0;

 VAR_8->tx_coalesce_usecs = VAR_7->tx_coalesce_usecs;
 VAR_8->tx_coalesce_frames = VAR_7->tx_max_coalesced_frames;

 return 0;
}
