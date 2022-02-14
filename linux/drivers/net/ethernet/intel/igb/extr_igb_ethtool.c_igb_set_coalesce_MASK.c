
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ ring; } ;
struct TYPE_3__ {int work_limit; } ;
struct igb_q_vector {int itr_val; int set_itr; TYPE_2__ rx; TYPE_1__ tx; } ;
struct igb_adapter {int flags; int rx_itr_setting; int tx_itr_setting; int num_q_vectors; int tx_work_limit; struct igb_q_vector** q_vector; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int tx_coalesce_usecs; scalar_t__ rate_sample_interval; scalar_t__ tx_max_coalesced_frames_high; scalar_t__ tx_coalesce_usecs_high; scalar_t__ rx_max_coalesced_frames_high; scalar_t__ rx_coalesce_usecs_high; scalar_t__ pkt_rate_high; scalar_t__ tx_max_coalesced_frames_low; scalar_t__ tx_coalesce_usecs_low; scalar_t__ rx_max_coalesced_frames_low; scalar_t__ rx_coalesce_usecs_low; scalar_t__ pkt_rate_low; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ stats_block_coalesce_usecs; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ tx_max_coalesced_frames; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs_irq; scalar_t__ rx_max_coalesced_frames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct igb_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_7,
       struct ethtool_coalesce *VAR_8)
{
 struct igb_adapter *VAR_9 = FUNC_0(VAR_7);
 int VAR_10;

 if (VAR_8->rx_max_coalesced_frames ||
     VAR_8->rx_coalesce_usecs_irq ||
     VAR_8->rx_max_coalesced_frames_irq ||
     VAR_8->tx_max_coalesced_frames ||
     VAR_8->tx_coalesce_usecs_irq ||
     VAR_8->stats_block_coalesce_usecs ||
     VAR_8->use_adaptive_rx_coalesce ||
     VAR_8->use_adaptive_tx_coalesce ||
     VAR_8->pkt_rate_low ||
     VAR_8->rx_coalesce_usecs_low ||
     VAR_8->rx_max_coalesced_frames_low ||
     VAR_8->tx_coalesce_usecs_low ||
     VAR_8->tx_max_coalesced_frames_low ||
     VAR_8->pkt_rate_high ||
     VAR_8->rx_coalesce_usecs_high ||
     VAR_8->rx_max_coalesced_frames_high ||
     VAR_8->tx_coalesce_usecs_high ||
     VAR_8->tx_max_coalesced_frames_high ||
     VAR_8->rate_sample_interval)
  return -VAR_1;

 if ((VAR_8->rx_coalesce_usecs > VAR_4) ||
     ((VAR_8->rx_coalesce_usecs > 3) &&
      (VAR_8->rx_coalesce_usecs < VAR_5)) ||
     (VAR_8->rx_coalesce_usecs == 2))
  return -VAR_0;

 if ((VAR_8->tx_coalesce_usecs > VAR_4) ||
     ((VAR_8->tx_coalesce_usecs > 3) &&
      (VAR_8->tx_coalesce_usecs < VAR_5)) ||
     (VAR_8->tx_coalesce_usecs == 2))
  return -VAR_0;

 if ((VAR_9->flags & VAR_3) && VAR_8->tx_coalesce_usecs)
  return -VAR_0;


 if (VAR_8->rx_coalesce_usecs == 0) {
  if (VAR_9->flags & VAR_2)
   VAR_9->flags &= ~VAR_2;
 }


 if (VAR_8->rx_coalesce_usecs && VAR_8->rx_coalesce_usecs <= 3)
  VAR_9->rx_itr_setting = VAR_8->rx_coalesce_usecs;
 else
  VAR_9->rx_itr_setting = VAR_8->rx_coalesce_usecs << 2;


 if (VAR_9->flags & VAR_3)
  VAR_9->tx_itr_setting = VAR_9->rx_itr_setting;
 else if (VAR_8->tx_coalesce_usecs && VAR_8->tx_coalesce_usecs <= 3)
  VAR_9->tx_itr_setting = VAR_8->tx_coalesce_usecs;
 else
  VAR_9->tx_itr_setting = VAR_8->tx_coalesce_usecs << 2;

 for (VAR_10 = 0; VAR_10 < VAR_9->num_q_vectors; VAR_10++) {
  struct igb_q_vector *VAR_11 = VAR_9->q_vector[VAR_10];
  VAR_11->tx.work_limit = VAR_9->tx_work_limit;
  if (VAR_11->rx.ring)
   VAR_11->itr_val = VAR_9->rx_itr_setting;
  else
   VAR_11->itr_val = VAR_9->tx_itr_setting;
  if (VAR_11->itr_val && VAR_11->itr_val <= 3)
   VAR_11->itr_val = VAR_6;
  VAR_11->set_itr = 1;
 }

 return 0;
}
