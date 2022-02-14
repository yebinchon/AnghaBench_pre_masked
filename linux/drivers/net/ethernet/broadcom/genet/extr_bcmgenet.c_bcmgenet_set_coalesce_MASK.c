
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ tx_max_coalesced_frames; scalar_t__ rx_max_coalesced_frames; int rx_coalesce_usecs; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ tx_coalesce_usecs_low; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ tx_coalesce_usecs_high; scalar_t__ tx_coalesce_usecs; } ;
struct bcmgenet_priv {int * rx_rings; TYPE_1__* hw_params; } ;
struct TYPE_2__ {unsigned int tx_queues; unsigned int rx_queues; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct ethtool_coalesce*) ;
 int FUNC_1 (struct bcmgenet_priv*,size_t,scalar_t__,int ) ;
 struct bcmgenet_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6,
     struct ethtool_coalesce *VAR_7)
{
 struct bcmgenet_priv *VAR_8 = FUNC_2(VAR_6);
 unsigned int VAR_9;





 if (VAR_7->tx_max_coalesced_frames > VAR_1 ||
     VAR_7->tx_max_coalesced_frames == 0 ||
     VAR_7->rx_max_coalesced_frames > VAR_1 ||
     VAR_7->rx_coalesce_usecs > (VAR_3 * 8) + 1)
  return -VAR_4;

 if (VAR_7->rx_coalesce_usecs == 0 && VAR_7->rx_max_coalesced_frames == 0)
  return -VAR_4;





 if (VAR_7->tx_coalesce_usecs || VAR_7->tx_coalesce_usecs_high ||
     VAR_7->tx_coalesce_usecs_irq || VAR_7->tx_coalesce_usecs_low ||
     VAR_7->use_adaptive_tx_coalesce)
  return -VAR_5;




 for (VAR_9 = 0; VAR_9 < VAR_8->hw_params->tx_queues; VAR_9++)
  FUNC_1(VAR_8, VAR_9,
       VAR_7->tx_max_coalesced_frames,
       VAR_2);
 FUNC_1(VAR_8, VAR_0,
      VAR_7->tx_max_coalesced_frames,
      VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_8->hw_params->rx_queues; VAR_9++)
  FUNC_0(&VAR_8->rx_rings[VAR_9], VAR_7);
 FUNC_0(&VAR_8->rx_rings[VAR_0], VAR_7);

 return 0;
}
