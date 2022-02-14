
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_9__ {int wq; } ;
struct TYPE_7__ {int head; } ;
struct TYPE_8__ {TYPE_2__ wq; } ;
struct mlx5e_rq {int rqn; int cq; int state; TYPE_5__* channel; TYPE_4__ wqe; TYPE_3__ mpwqe; } ;
struct mlx5e_params {scalar_t__ rq_wq_type; } ;
struct TYPE_6__ {struct mlx5e_params params; } ;
struct mlx5e_priv {int mdev; TYPE_1__ channels; } ;
struct mlx5e_icosq {int sqn; } ;
struct devlink_fmsg {int dummy; } ;
struct TYPE_10__ {int ix; struct mlx5e_icosq icosq; struct mlx5e_priv* priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct devlink_fmsg*) ;
 int FUNC_1 (struct devlink_fmsg*) ;
 int FUNC_2 (struct devlink_fmsg*,char*,int) ;
 int FUNC_3 (struct devlink_fmsg*,char*,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,int *) ;
 int FUNC_7 (int *,struct devlink_fmsg*) ;
 int FUNC_8 (struct mlx5e_rq*) ;

__attribute__((used)) static int FUNC_9(struct mlx5e_rq *VAR_1,
         struct devlink_fmsg *VAR_2)
{
 struct mlx5e_priv *VAR_3 = VAR_1->channel->priv;
 struct mlx5e_params *VAR_4;
 struct mlx5e_icosq *VAR_5;
 u8 VAR_6;
 int VAR_7;
 u8 VAR_8;
 u16 VAR_9;
 int VAR_10;

 VAR_4 = &VAR_3->channels.params;
 VAR_5 = &VAR_1->channel->icosq;
 VAR_10 = FUNC_6(VAR_3->mdev, VAR_1->rqn, &VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_3->mdev, VAR_5->sqn, &VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_7 = FUNC_8(VAR_1);
 VAR_9 = VAR_4->rq_wq_type == VAR_0 ?
    VAR_1->mpwqe.wq.head : FUNC_5(&VAR_1->wqe.wq);

 VAR_10 = FUNC_1(VAR_2);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_2, "channel ix", VAR_1->channel->ix);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_2, "rqn", VAR_1->rqn);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_2, "HW state", VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_2, "SW state", VAR_1->state);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_2, "posted WQEs", VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_2, "cc", VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_2, "ICOSQ HW state", VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_7(&VAR_1->cq, VAR_2);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_2);
 if (VAR_10)
  return VAR_10;

 return 0;
}
