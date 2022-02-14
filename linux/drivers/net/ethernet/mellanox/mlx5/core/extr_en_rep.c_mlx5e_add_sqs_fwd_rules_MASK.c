
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_rep_priv {struct mlx5_eswitch_rep* rep; } ;
struct TYPE_8__ {int num_tc; } ;
struct TYPE_9__ {int num; struct mlx5e_channel** c; TYPE_3__ params; } ;
struct mlx5e_priv {int netdev; TYPE_4__ channels; struct mlx5e_rep_priv* ppriv; TYPE_2__* mdev; } ;
struct mlx5e_channel {int num_tc; TYPE_5__* sq; } ;
struct mlx5_eswitch_rep {int dummy; } ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_10__ {int sqn; } ;
struct TYPE_6__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_7__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_eswitch*,struct mlx5_eswitch_rep*,int *,int) ;
 int FUNC_3 (int ,char*,int) ;

int FUNC_4(struct mlx5e_priv *VAR_2)
{
 struct mlx5_eswitch *VAR_3 = VAR_2->mdev->priv.eswitch;
 struct mlx5e_rep_priv *VAR_4 = VAR_2->ppriv;
 struct mlx5_eswitch_rep *VAR_5 = VAR_4->rep;
 struct mlx5e_channel *VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;
 int VAR_10 = -VAR_0;
 u32 *VAR_11;

 VAR_11 = FUNC_0(VAR_2->channels.num * VAR_2->channels.params.num_tc, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  goto out;

 for (VAR_7 = 0; VAR_7 < VAR_2->channels.num; VAR_7++) {
  VAR_6 = VAR_2->channels.c[VAR_7];
  for (VAR_8 = 0; VAR_8 < VAR_6->num_tc; VAR_8++)
   VAR_11[VAR_9++] = VAR_6->sq[VAR_8].sqn;
 }

 VAR_10 = FUNC_2(VAR_3, VAR_5, VAR_11, VAR_9);
 FUNC_1(VAR_11);

out:
 if (VAR_10)
  FUNC_3(VAR_2->netdev, "Failed to add SQs FWD rules %d\n", VAR_10);
 return VAR_10;
}
