
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nixge_priv {scalar_t__ coalesce_count_tx; scalar_t__ coalesce_count_rx; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ tx_max_coalesced_frames; scalar_t__ rx_max_coalesced_frames; scalar_t__ rate_sample_interval; scalar_t__ tx_max_coalesced_frames_high; scalar_t__ tx_coalesce_usecs_high; scalar_t__ rx_max_coalesced_frames_high; scalar_t__ rx_coalesce_usecs_high; scalar_t__ pkt_rate_high; scalar_t__ tx_max_coalesced_frames_low; scalar_t__ tx_coalesce_usecs_low; scalar_t__ rx_max_coalesced_frames_low; scalar_t__ rx_coalesce_usecs_low; scalar_t__ pkt_rate_low; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ stats_block_coalesce_usecs; scalar_t__ tx_max_coalesced_frames_irq; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ tx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs_irq; scalar_t__ rx_coalesce_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct nixge_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
           struct ethtool_coalesce *VAR_3)
{
 struct nixge_priv *VAR_4 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_2)) {
  FUNC_0(VAR_2,
      "Please stop netif before applying configuration\n");
  return -VAR_0;
 }

 if (VAR_3->rx_coalesce_usecs ||
     VAR_3->rx_coalesce_usecs_irq ||
     VAR_3->rx_max_coalesced_frames_irq ||
     VAR_3->tx_coalesce_usecs ||
     VAR_3->tx_coalesce_usecs_irq ||
     VAR_3->tx_max_coalesced_frames_irq ||
     VAR_3->stats_block_coalesce_usecs ||
     VAR_3->use_adaptive_rx_coalesce ||
     VAR_3->use_adaptive_tx_coalesce ||
     VAR_3->pkt_rate_low ||
     VAR_3->rx_coalesce_usecs_low ||
     VAR_3->rx_max_coalesced_frames_low ||
     VAR_3->tx_coalesce_usecs_low ||
     VAR_3->tx_max_coalesced_frames_low ||
     VAR_3->pkt_rate_high ||
     VAR_3->rx_coalesce_usecs_high ||
     VAR_3->rx_max_coalesced_frames_high ||
     VAR_3->tx_coalesce_usecs_high ||
     VAR_3->tx_max_coalesced_frames_high ||
     VAR_3->rate_sample_interval)
  return -VAR_1;
 if (VAR_3->rx_max_coalesced_frames)
  VAR_4->coalesce_count_rx = VAR_3->rx_max_coalesced_frames;
 if (VAR_3->tx_max_coalesced_frames)
  VAR_4->coalesce_count_tx = VAR_3->tx_max_coalesced_frames;

 return 0;
}
