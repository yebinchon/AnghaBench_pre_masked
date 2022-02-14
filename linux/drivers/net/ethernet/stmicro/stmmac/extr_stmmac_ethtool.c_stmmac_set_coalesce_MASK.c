
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {unsigned int rx_riwt; scalar_t__ tx_coal_frames; scalar_t__ tx_coal_timer; int rx_coal_frames; int ioaddr; scalar_t__ use_riwt; TYPE_1__* plat; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ rx_coalesce_usecs; scalar_t__ tx_coalesce_usecs; scalar_t__ tx_max_coalesced_frames; int rx_max_coalesced_frames; scalar_t__ rate_sample_interval; scalar_t__ tx_max_coalesced_frames_high; scalar_t__ stats_block_coalesce_usecs; scalar_t__ tx_max_coalesced_frames_irq; scalar_t__ rx_max_coalesced_frames_high; scalar_t__ rx_coalesce_usecs_high; scalar_t__ tx_coalesce_usecs_low; scalar_t__ pkt_rate_high; scalar_t__ tx_max_coalesced_frames_low; scalar_t__ tx_coalesce_usecs_high; scalar_t__ rx_max_coalesced_frames_low; scalar_t__ rx_coalesce_usecs_low; scalar_t__ pkt_rate_low; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs_irq; } ;
struct TYPE_2__ {int rx_queues_to_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct stmmac_priv*,int ,unsigned int,int ) ;
 unsigned int FUNC_2 (scalar_t__,struct stmmac_priv*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6,
          struct ethtool_coalesce *VAR_7)
{
 struct stmmac_priv *VAR_8 = FUNC_0(VAR_6);
 u32 VAR_9 = VAR_8->plat->rx_queues_to_use;
 unsigned int VAR_10;


 if ((VAR_7->rx_coalesce_usecs_irq) ||
     (VAR_7->rx_max_coalesced_frames_irq) || (VAR_7->tx_coalesce_usecs_irq) ||
     (VAR_7->use_adaptive_rx_coalesce) || (VAR_7->use_adaptive_tx_coalesce) ||
     (VAR_7->pkt_rate_low) || (VAR_7->rx_coalesce_usecs_low) ||
     (VAR_7->rx_max_coalesced_frames_low) || (VAR_7->tx_coalesce_usecs_high) ||
     (VAR_7->tx_max_coalesced_frames_low) || (VAR_7->pkt_rate_high) ||
     (VAR_7->tx_coalesce_usecs_low) || (VAR_7->rx_coalesce_usecs_high) ||
     (VAR_7->rx_max_coalesced_frames_high) ||
     (VAR_7->tx_max_coalesced_frames_irq) ||
     (VAR_7->stats_block_coalesce_usecs) ||
     (VAR_7->tx_max_coalesced_frames_high) || (VAR_7->rate_sample_interval))
  return -VAR_1;

 if (VAR_8->use_riwt && (VAR_7->rx_coalesce_usecs > 0)) {
  VAR_10 = FUNC_2(VAR_7->rx_coalesce_usecs, VAR_8);

  if ((VAR_10 > VAR_2) || (VAR_10 < VAR_3))
   return -VAR_0;

  VAR_8->rx_riwt = VAR_10;
  FUNC_1(VAR_8, VAR_8->ioaddr, VAR_8->rx_riwt, VAR_9);
 }

 if ((VAR_7->tx_coalesce_usecs == 0) &&
     (VAR_7->tx_max_coalesced_frames == 0))
  return -VAR_0;

 if ((VAR_7->tx_coalesce_usecs > VAR_4) ||
     (VAR_7->tx_max_coalesced_frames > VAR_5))
  return -VAR_0;


 VAR_8->tx_coal_frames = VAR_7->tx_max_coalesced_frames;
 VAR_8->tx_coal_timer = VAR_7->tx_coalesce_usecs;
 VAR_8->rx_coal_frames = VAR_7->rx_max_coalesced_frames;
 return 0;
}
