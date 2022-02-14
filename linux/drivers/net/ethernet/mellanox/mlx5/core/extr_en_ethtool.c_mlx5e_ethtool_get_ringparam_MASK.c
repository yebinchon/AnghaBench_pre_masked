
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int log_rq_mtu_frames; int log_sq_size; } ;
struct TYPE_3__ {TYPE_2__ params; } ;
struct mlx5e_priv {TYPE_1__ channels; } ;
struct ethtool_ringparam {int rx_max_pending; int tx_max_pending; int rx_pending; int tx_pending; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct mlx5e_priv *VAR_2,
     struct ethtool_ringparam *VAR_3)
{
 VAR_3->rx_max_pending = 1 << VAR_0;
 VAR_3->tx_max_pending = 1 << VAR_1;
 VAR_3->rx_pending = 1 << VAR_2->channels.params.log_rq_mtu_frames;
 VAR_3->tx_pending = 1 << VAR_2->channels.params.log_sq_size;
}
