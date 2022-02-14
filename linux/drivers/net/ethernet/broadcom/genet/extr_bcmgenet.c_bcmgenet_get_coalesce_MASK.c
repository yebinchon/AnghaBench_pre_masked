
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int use_adaptive_rx_coalesce; int rx_max_coalesced_frames; int tx_max_coalesced_frames; } ;
struct TYPE_4__ {int use_dim; } ;
struct bcmgenet_rx_ring {TYPE_2__ dim; } ;
struct bcmgenet_priv {struct bcmgenet_rx_ring* rx_rings; TYPE_1__* hw_params; } ;
struct TYPE_3__ {unsigned int rx_queues; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (struct bcmgenet_priv*,size_t,int ) ;
 int FUNC_2 (struct bcmgenet_priv*,size_t,int ) ;
 struct bcmgenet_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
     struct ethtool_coalesce *VAR_4)
{
 struct bcmgenet_priv *VAR_5 = FUNC_3(VAR_3);
 struct bcmgenet_rx_ring *VAR_6;
 unsigned int VAR_7;

 VAR_4->tx_max_coalesced_frames =
  FUNC_2(VAR_5, VAR_0,
      VAR_1);
 VAR_4->rx_max_coalesced_frames =
  FUNC_1(VAR_5, VAR_0,
      VAR_1);
 VAR_4->rx_coalesce_usecs =
  FUNC_0(VAR_5, VAR_2) * 8192 / 1000;

 for (VAR_7 = 0; VAR_7 < VAR_5->hw_params->rx_queues; VAR_7++) {
  VAR_6 = &VAR_5->rx_rings[VAR_7];
  VAR_4->use_adaptive_rx_coalesce |= VAR_6->dim.use_dim;
 }
 VAR_6 = &VAR_5->rx_rings[VAR_0];
 VAR_4->use_adaptive_rx_coalesce |= VAR_6->dim.use_dim;

 return 0;
}
