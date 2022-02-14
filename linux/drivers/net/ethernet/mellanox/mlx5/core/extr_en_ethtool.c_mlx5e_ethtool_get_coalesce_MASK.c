
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dim_cq_moder {int pkts; int usec; } ;
struct TYPE_3__ {int tx_dim_enabled; struct dim_cq_moder tx_cq_moderation; int rx_dim_enabled; struct dim_cq_moder rx_cq_moderation; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct mlx5e_priv {TYPE_2__ channels; int mdev; } ;
struct ethtool_coalesce {int use_adaptive_tx_coalesce; int tx_max_coalesced_frames; int tx_coalesce_usecs; int use_adaptive_rx_coalesce; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;

int FUNC_1(struct mlx5e_priv *VAR_2,
          struct ethtool_coalesce *VAR_3)
{
 struct dim_cq_moder *VAR_4, *VAR_5;

 if (!FUNC_0(VAR_2->mdev, VAR_1))
  return -VAR_0;

 VAR_4 = &VAR_2->channels.params.rx_cq_moderation;
 VAR_3->rx_coalesce_usecs = VAR_4->usec;
 VAR_3->rx_max_coalesced_frames = VAR_4->pkts;
 VAR_3->use_adaptive_rx_coalesce = VAR_2->channels.params.rx_dim_enabled;

 VAR_5 = &VAR_2->channels.params.tx_cq_moderation;
 VAR_3->tx_coalesce_usecs = VAR_5->usec;
 VAR_3->tx_max_coalesced_frames = VAR_5->pkts;
 VAR_3->use_adaptive_tx_coalesce = VAR_2->channels.params.tx_dim_enabled;

 return 0;
}
