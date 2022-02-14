
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_max_coalesced_frames; int tx_max_coalesced_frames; int tx_coalesce_usecs; int rx_coalesce_usecs; } ;
struct aq_nic_s {int dummy; } ;
struct aq_nic_cfg_s {scalar_t__ itr; int tx_itr; int rx_itr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct aq_nic_cfg_s* FUNC_0 (struct aq_nic_s*) ;
 struct aq_nic_s* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
       struct ethtool_coalesce *VAR_3)
{
 struct aq_nic_s *VAR_4 = FUNC_1(VAR_2);
 struct aq_nic_cfg_s *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->itr == VAR_1 ||
     VAR_5->itr == VAR_0) {
  VAR_3->rx_coalesce_usecs = VAR_5->rx_itr;
  VAR_3->tx_coalesce_usecs = VAR_5->tx_itr;
  VAR_3->rx_max_coalesced_frames = 0;
  VAR_3->tx_max_coalesced_frames = 0;
 } else {
  VAR_3->rx_coalesce_usecs = 0;
  VAR_3->tx_coalesce_usecs = 0;
  VAR_3->rx_max_coalesced_frames = 1;
  VAR_3->tx_max_coalesced_frames = 1;
 }
 return 0;
}
