
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_txqsq {int cq; int wq; } ;
struct TYPE_3__ {int num_tc; } ;
struct TYPE_4__ {int num; TYPE_1__ params; struct mlx5e_channel** c; } ;
struct mlx5e_priv {int state_lock; TYPE_2__ channels; int state; struct mlx5e_txqsq** txq2sq; } ;
struct mlx5e_channel {struct mlx5e_txqsq* sq; } ;
struct devlink_health_reporter {int dummy; } ;
struct devlink_fmsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devlink_fmsg*) ;
 int FUNC_1 (struct devlink_fmsg*,char*) ;
 int FUNC_2 (struct devlink_fmsg*,char*,int ) ;
 int FUNC_3 (struct devlink_fmsg*,char*,int ) ;
 struct mlx5e_priv* FUNC_4 (struct devlink_health_reporter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct devlink_fmsg*) ;
 int FUNC_7 (struct devlink_fmsg*) ;
 int FUNC_8 (struct devlink_fmsg*,char*) ;
 int FUNC_9 (struct devlink_fmsg*,struct mlx5e_txqsq*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct devlink_health_reporter *VAR_2,
          struct devlink_fmsg *VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_4(VAR_2);
 struct mlx5e_txqsq *VAR_5 = VAR_4->txq2sq[0];
 u32 VAR_6, VAR_7;

 int VAR_8, VAR_9, VAR_10 = 0;

 FUNC_10(&VAR_4->state_lock);

 if (!FUNC_12(VAR_0, &VAR_4->state))
  goto unlock;

 VAR_7 = FUNC_5(&VAR_5->wq);
 VAR_6 = VAR_1;

 VAR_10 = FUNC_8(VAR_3, "Common Config");
 if (VAR_10)
  goto unlock;

 VAR_10 = FUNC_8(VAR_3, "SQ");
 if (VAR_10)
  goto unlock;

 VAR_10 = FUNC_3(VAR_3, "stride size", VAR_6);
 if (VAR_10)
  goto unlock;

 VAR_10 = FUNC_2(VAR_3, "size", VAR_7);
 if (VAR_10)
  goto unlock;

 VAR_10 = FUNC_6(&VAR_5->cq, VAR_3);
 if (VAR_10)
  goto unlock;

 VAR_10 = FUNC_7(VAR_3);
 if (VAR_10)
  goto unlock;

 VAR_10 = FUNC_7(VAR_3);
 if (VAR_10)
  goto unlock;

 VAR_10 = FUNC_1(VAR_3, "SQs");
 if (VAR_10)
  goto unlock;

 for (VAR_8 = 0; VAR_8 < VAR_4->channels.num; VAR_8++) {
  struct mlx5e_channel *VAR_11 = VAR_4->channels.c[VAR_8];

  for (VAR_9 = 0; VAR_9 < VAR_4->channels.params.num_tc; VAR_9++) {
   struct mlx5e_txqsq *VAR_12 = &VAR_11->sq[VAR_9];

   VAR_10 = FUNC_9(VAR_3, VAR_12, VAR_9);
   if (VAR_10)
    goto unlock;
  }
 }
 VAR_10 = FUNC_0(VAR_3);
 if (VAR_10)
  goto unlock;

unlock:
 FUNC_11(&VAR_4->state_lock);
 return VAR_10;
}
