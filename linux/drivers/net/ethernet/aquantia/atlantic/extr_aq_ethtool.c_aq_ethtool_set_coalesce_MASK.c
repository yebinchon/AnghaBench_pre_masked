
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_max_coalesced_frames; int tx_max_coalesced_frames; scalar_t__ rx_coalesce_usecs; scalar_t__ tx_coalesce_usecs; scalar_t__ tx_max_coalesced_frames_irq; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs_irq; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; } ;
struct aq_nic_s {int dummy; } ;
struct aq_nic_cfg_s {scalar_t__ rx_itr; scalar_t__ tx_itr; int itr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct aq_nic_cfg_s* FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (struct aq_nic_s*) ;
 struct aq_nic_s* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
       struct ethtool_coalesce *VAR_5)
{
 struct aq_nic_s *VAR_6 = FUNC_2(VAR_4);
 struct aq_nic_cfg_s *VAR_7 = FUNC_0(VAR_6);



 if (VAR_5->use_adaptive_rx_coalesce || VAR_5->use_adaptive_tx_coalesce)
  return -VAR_3;



 if (VAR_5->rx_max_coalesced_frames > 1 ||
     VAR_5->rx_coalesce_usecs_irq ||
     VAR_5->rx_max_coalesced_frames_irq)
  return -VAR_3;

 if (VAR_5->tx_max_coalesced_frames > 1 ||
     VAR_5->tx_coalesce_usecs_irq ||
     VAR_5->tx_max_coalesced_frames_irq)
  return -VAR_3;



 if (!(VAR_5->rx_max_coalesced_frames == !VAR_5->rx_coalesce_usecs))
  return -VAR_3;
 if (!(VAR_5->tx_max_coalesced_frames == !VAR_5->tx_coalesce_usecs))
  return -VAR_3;

 if (VAR_5->rx_coalesce_usecs > VAR_1 ||
     VAR_5->tx_coalesce_usecs > VAR_1)
  return -VAR_2;

 VAR_7->itr = VAR_0;

 VAR_7->rx_itr = VAR_5->rx_coalesce_usecs;
 VAR_7->tx_itr = VAR_5->tx_coalesce_usecs;

 return FUNC_1(VAR_6);
}
