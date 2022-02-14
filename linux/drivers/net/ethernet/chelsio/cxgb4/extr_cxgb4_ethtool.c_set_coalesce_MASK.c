
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int tx_coalesce_usecs_irq; int rx_max_coalesced_frames; int rx_coalesce_usecs; int use_adaptive_rx_coalesce; } ;


 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
   struct ethtool_coalesce *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0, VAR_1->use_adaptive_rx_coalesce);

 VAR_2 = FUNC_2(VAR_0, VAR_1->rx_coalesce_usecs,
     VAR_1->rx_max_coalesced_frames);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_0,
        VAR_1->tx_coalesce_usecs_irq,
        VAR_1->tx_coalesce_usecs);
}
