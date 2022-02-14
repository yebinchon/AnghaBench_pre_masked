
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_rq {int cq; } ;
struct mlx5e_params {int rq_wq_type; } ;
struct TYPE_4__ {int num; TYPE_1__** c; struct mlx5e_params params; } ;
struct mlx5e_priv {int state_lock; TYPE_2__ channels; int mdev; int state; } ;
struct devlink_health_reporter {int dummy; } ;
struct devlink_fmsg {int dummy; } ;
struct TYPE_3__ {struct mlx5e_rq rq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct devlink_fmsg*) ;
 int FUNC_2 (struct devlink_fmsg*,char*) ;
 int FUNC_3 (struct devlink_fmsg*,char*,int ) ;
 int FUNC_4 (struct devlink_fmsg*,char*,int ) ;
 int FUNC_5 (struct devlink_fmsg*,char*,int ) ;
 struct mlx5e_priv* FUNC_6 (struct devlink_health_reporter*) ;
 int FUNC_7 (int ,struct mlx5e_params*,int *) ;
 int FUNC_8 (int *,struct devlink_fmsg*) ;
 int FUNC_9 (struct devlink_fmsg*) ;
 int FUNC_10 (struct devlink_fmsg*,char*) ;
 int FUNC_11 (struct mlx5e_rq*) ;
 int FUNC_12 (struct mlx5e_rq*,struct devlink_fmsg*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct devlink_health_reporter *VAR_1,
          struct devlink_fmsg *VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_6(VAR_1);
 struct mlx5e_params *VAR_4 = &VAR_3->channels.params;
 struct mlx5e_rq *VAR_5;
 u32 VAR_6, VAR_7;
 int VAR_8, VAR_9 = 0;

 FUNC_13(&VAR_3->state_lock);

 if (!FUNC_15(VAR_0, &VAR_3->state))
  goto unlock;

 VAR_5 = &VAR_3->channels.c[0]->rq;
 VAR_7 = FUNC_11(VAR_5);
 VAR_6 = FUNC_0(FUNC_7(VAR_3->mdev, VAR_4, ((void*)0)));

 VAR_9 = FUNC_10(VAR_2, "Common config");
 if (VAR_9)
  goto unlock;

 VAR_9 = FUNC_10(VAR_2, "RQ");
 if (VAR_9)
  goto unlock;

 VAR_9 = FUNC_5(VAR_2, "type", VAR_4->rq_wq_type);
 if (VAR_9)
  goto unlock;

 VAR_9 = FUNC_4(VAR_2, "stride size", VAR_6);
 if (VAR_9)
  goto unlock;

 VAR_9 = FUNC_3(VAR_2, "size", VAR_7);
 if (VAR_9)
  goto unlock;

 VAR_9 = FUNC_9(VAR_2);
 if (VAR_9)
  goto unlock;

 VAR_9 = FUNC_8(&VAR_5->cq, VAR_2);
 if (VAR_9)
  goto unlock;

 VAR_9 = FUNC_9(VAR_2);
 if (VAR_9)
  goto unlock;

 VAR_9 = FUNC_2(VAR_2, "RQs");
 if (VAR_9)
  goto unlock;

 for (VAR_8 = 0; VAR_8 < VAR_3->channels.num; VAR_8++) {
  struct mlx5e_rq *VAR_10 = &VAR_3->channels.c[VAR_8]->rq;

  VAR_9 = FUNC_12(VAR_10, VAR_2);
  if (VAR_9)
   goto unlock;
 }
 VAR_9 = FUNC_1(VAR_2);
 if (VAR_9)
  goto unlock;
unlock:
 FUNC_14(&VAR_3->state_lock);
 return VAR_9;
}
