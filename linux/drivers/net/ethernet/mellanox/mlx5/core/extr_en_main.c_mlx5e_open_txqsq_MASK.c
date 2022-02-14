
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int cqn; } ;
struct TYPE_5__ {TYPE_1__ mcq; } ;
struct mlx5e_txqsq {size_t txq_ix; int state; int sqn; int min_inline_mode; int wq_ctrl; TYPE_2__ cq; } ;
struct mlx5e_sq_param {int dummy; } ;
struct mlx5e_params {scalar_t__ tx_dim_enabled; } ;
struct mlx5e_create_sq_param {int tis_lst_sz; int min_inline_mode; int * wq_ctrl; int cqn; scalar_t__ tisn; } ;
struct mlx5e_channel {int netdev; TYPE_3__* priv; int mdev; } ;
struct TYPE_6__ {scalar_t__* tx_rates; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5e_channel*,int,struct mlx5e_params*,struct mlx5e_sq_param*,struct mlx5e_txqsq*,int) ;
 int FUNC_2 (int ,struct mlx5e_sq_param*,struct mlx5e_create_sq_param*,int *) ;
 int FUNC_3 (struct mlx5e_txqsq*) ;
 int FUNC_4 (int ,struct mlx5e_txqsq*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mlx5e_channel *VAR_1,
       u32 VAR_2,
       int VAR_3,
       struct mlx5e_params *VAR_4,
       struct mlx5e_sq_param *VAR_5,
       struct mlx5e_txqsq *VAR_6,
       int VAR_7)
{
 struct mlx5e_create_sq_param VAR_8 = {};
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_8.tisn = VAR_2;
 VAR_8.tis_lst_sz = 1;
 VAR_8.cqn = VAR_6->cq.mcq.cqn;
 VAR_8.wq_ctrl = &VAR_6->wq_ctrl;
 VAR_8.min_inline_mode = VAR_6->min_inline_mode;
 VAR_10 = FUNC_2(VAR_1->mdev, VAR_5, &VAR_8, &VAR_6->sqn);
 if (VAR_10)
  goto err_free_txqsq;

 VAR_9 = VAR_1->priv->tx_rates[VAR_6->txq_ix];
 if (VAR_9)
  FUNC_4(VAR_1->netdev, VAR_6, VAR_9);

 if (VAR_4->tx_dim_enabled)
  VAR_6->state |= FUNC_0(VAR_0);

 return 0;

err_free_txqsq:
 FUNC_3(VAR_6);

 return VAR_10;
}
