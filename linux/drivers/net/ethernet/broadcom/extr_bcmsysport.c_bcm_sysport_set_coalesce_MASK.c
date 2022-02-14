
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {unsigned int num_tx_queues; } ;
struct ethtool_coalesce {scalar_t__ tx_max_coalesced_frames; int tx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames; int rx_coalesce_usecs; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ use_adaptive_tx_coalesce; } ;
struct dim_cq_moder {int usec; int pkts; } ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {scalar_t__ use_dim; TYPE_1__ dim; } ;
struct bcm_sysport_priv {int rx_coalesce_usecs; int rx_max_coalesced_frames; TYPE_2__ dim; int * tx_rings; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm_sysport_priv*,int,int) ;
 int FUNC_1 (int *,struct ethtool_coalesce*) ;
 struct dim_cq_moder FUNC_2 (int ) ;
 struct bcm_sysport_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
        struct ethtool_coalesce *VAR_6)
{
 struct bcm_sysport_priv *VAR_7 = FUNC_3(VAR_5);
 struct dim_cq_moder VAR_8;
 u32 VAR_9, VAR_10;
 unsigned int VAR_11;





 if (VAR_6->tx_max_coalesced_frames > VAR_3 ||
     VAR_6->tx_coalesce_usecs > (VAR_4 * 8) + 1 ||
     VAR_6->rx_max_coalesced_frames > VAR_1 ||
     VAR_6->rx_coalesce_usecs > (VAR_2 * 8) + 1)
  return -VAR_0;

 if ((VAR_6->tx_coalesce_usecs == 0 && VAR_6->tx_max_coalesced_frames == 0) ||
     (VAR_6->rx_coalesce_usecs == 0 && VAR_6->rx_max_coalesced_frames == 0) ||
     VAR_6->use_adaptive_tx_coalesce)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_5->num_tx_queues; VAR_11++)
  FUNC_1(&VAR_7->tx_rings[VAR_11], VAR_6);

 VAR_7->rx_coalesce_usecs = VAR_6->rx_coalesce_usecs;
 VAR_7->rx_max_coalesced_frames = VAR_6->rx_max_coalesced_frames;
 VAR_9 = VAR_7->rx_coalesce_usecs;
 VAR_10 = VAR_7->rx_max_coalesced_frames;

 if (VAR_6->use_adaptive_rx_coalesce && !VAR_7->dim.use_dim) {
  VAR_8 = FUNC_2(VAR_7->dim.dim.mode);
  VAR_9 = VAR_8.usec;
  VAR_10 = VAR_8.pkts;
 }

 VAR_7->dim.use_dim = VAR_6->use_adaptive_rx_coalesce;


 FUNC_0(VAR_7, VAR_9, VAR_10);

 return 0;
}
