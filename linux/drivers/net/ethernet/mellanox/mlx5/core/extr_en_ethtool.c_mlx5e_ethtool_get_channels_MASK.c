
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ refcnt; } ;
struct TYPE_4__ {int num_channels; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
struct mlx5e_priv {int max_nch; int state_lock; TYPE_3__ xsk; TYPE_2__ channels; } ;
struct ethtool_channels {int max_combined; int combined_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mlx5e_priv *VAR_0,
    struct ethtool_channels *VAR_1)
{
 FUNC_0(&VAR_0->state_lock);

 VAR_1->max_combined = VAR_0->max_nch;
 VAR_1->combined_count = VAR_0->channels.params.num_channels;
 if (VAR_0->xsk.refcnt) {

  VAR_1->max_combined *= 2;
  VAR_1->combined_count *= 2;
 }

 FUNC_1(&VAR_0->state_lock);
}
