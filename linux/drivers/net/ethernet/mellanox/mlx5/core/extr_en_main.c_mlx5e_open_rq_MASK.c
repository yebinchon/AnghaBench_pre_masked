
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_umem {int dummy; } ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_rq_param {int dummy; } ;
struct mlx5e_rq {int dummy; } ;
struct mlx5e_params {scalar_t__ rx_dim_enabled; } ;
struct TYPE_2__ {int state; } ;
struct mlx5e_channel {TYPE_1__ rq; scalar_t__ xdp; int mdev; } ;


 scalar_t__ FUNC_0 (struct mlx5e_params*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (struct mlx5e_channel*,struct mlx5e_params*,struct mlx5e_xsk_param*,struct xdp_umem*,struct mlx5e_rq_param*,struct mlx5e_rq*) ;
 int FUNC_4 (struct mlx5e_rq*,struct mlx5e_rq_param*) ;
 int FUNC_5 (struct mlx5e_rq*) ;
 int FUNC_6 (struct mlx5e_rq*) ;
 int FUNC_7 (struct mlx5e_rq*,int ,int ) ;

int FUNC_8(struct mlx5e_channel *VAR_7, struct mlx5e_params *VAR_8,
    struct mlx5e_rq_param *VAR_9, struct mlx5e_xsk_param *VAR_10,
    struct xdp_umem *VAR_11, struct mlx5e_rq *VAR_12)
{
 int VAR_13;

 VAR_13 = FUNC_3(VAR_7, VAR_8, VAR_10, VAR_11, VAR_9, VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_12, VAR_9);
 if (VAR_13)
  goto err_free_rq;

 VAR_13 = FUNC_7(VAR_12, VAR_5, VAR_4);
 if (VAR_13)
  goto err_destroy_rq;

 if (FUNC_1(VAR_7->mdev, VAR_6))
  FUNC_2(VAR_2, &VAR_7->rq.state);

 if (VAR_8->rx_dim_enabled)
  FUNC_2(VAR_1, &VAR_7->rq.state);





 if (FUNC_0(VAR_8, VAR_0) || VAR_7->xdp)
  FUNC_2(VAR_3, &VAR_7->rq.state);

 return 0;

err_destroy_rq:
 FUNC_5(VAR_12);
err_free_rq:
 FUNC_6(VAR_12);

 return VAR_13;
}
