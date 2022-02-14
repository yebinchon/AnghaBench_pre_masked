
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_sq_param {int dummy; } ;
struct mlx5e_params {int tx_min_inline_mode; } ;
struct TYPE_3__ {int cqn; } ;
struct TYPE_4__ {TYPE_1__ mcq; } ;
struct mlx5e_icosq {int sqn; int wq_ctrl; TYPE_2__ cq; } ;
struct mlx5e_create_sq_param {int min_inline_mode; int * wq_ctrl; int cqn; } ;
struct mlx5e_channel {int mdev; } ;


 int FUNC_0 (struct mlx5e_channel*,struct mlx5e_sq_param*,struct mlx5e_icosq*) ;
 int FUNC_1 (int ,struct mlx5e_sq_param*,struct mlx5e_create_sq_param*,int *) ;
 int FUNC_2 (struct mlx5e_icosq*) ;

int FUNC_3(struct mlx5e_channel *VAR_0, struct mlx5e_params *VAR_1,
       struct mlx5e_sq_param *VAR_2, struct mlx5e_icosq *VAR_3)
{
 struct mlx5e_create_sq_param VAR_4 = {};
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4.cqn = VAR_3->cq.mcq.cqn;
 VAR_4.wq_ctrl = &VAR_3->wq_ctrl;
 VAR_4.min_inline_mode = VAR_1->tx_min_inline_mode;
 VAR_5 = FUNC_1(VAR_0->mdev, VAR_2, &VAR_4, &VAR_3->sqn);
 if (VAR_5)
  goto err_free_icosq;

 return 0;

err_free_icosq:
 FUNC_2(VAR_3);

 return VAR_5;
}
