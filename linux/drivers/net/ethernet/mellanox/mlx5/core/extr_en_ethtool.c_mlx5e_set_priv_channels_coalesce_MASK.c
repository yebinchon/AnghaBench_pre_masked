
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num; struct mlx5e_channel** c; } ;
struct mlx5e_priv {TYPE_1__ channels; struct mlx5_core_dev* mdev; } ;
struct TYPE_9__ {int mcq; } ;
struct TYPE_10__ {TYPE_4__ cq; } ;
struct mlx5e_channel {int num_tc; TYPE_5__ rq; TYPE_3__* sq; } ;
struct mlx5_core_dev {int dummy; } ;
struct ethtool_coalesce {int rx_max_coalesced_frames; int rx_coalesce_usecs; int tx_max_coalesced_frames; int tx_coalesce_usecs; } ;
struct TYPE_7__ {int mcq; } ;
struct TYPE_8__ {TYPE_2__ cq; } ;


 int FUNC_0 (struct mlx5_core_dev*,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct mlx5e_priv *VAR_0, struct ethtool_coalesce *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_0->mdev;
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->channels.num; ++VAR_4) {
  struct mlx5e_channel *VAR_5 = VAR_0->channels.c[VAR_4];

  for (VAR_3 = 0; VAR_3 < VAR_5->num_tc; VAR_3++) {
   FUNC_0(VAR_2,
      &VAR_5->sq[VAR_3].cq.mcq,
      VAR_1->tx_coalesce_usecs,
      VAR_1->tx_max_coalesced_frames);
  }

  FUNC_0(VAR_2, &VAR_5->rq.cq.mcq,
            VAR_1->rx_coalesce_usecs,
            VAR_1->rx_max_coalesced_frames);
 }
}
