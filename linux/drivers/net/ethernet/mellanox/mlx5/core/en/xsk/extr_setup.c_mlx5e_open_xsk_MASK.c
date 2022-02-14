
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xdp_umem {int dummy; } ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_priv {int mdev; } ;
struct dim_cq_moder {int dummy; } ;
struct mlx5e_params {struct dim_cq_moder tx_cq_moderation; struct dim_cq_moder rx_cq_moderation; } ;
struct mlx5e_channel_param {int icosq; int icosq_cq; int xdp_sq; int tx_cq; int rq; int rx_cq; } ;
struct TYPE_7__ {int cq; } ;
struct TYPE_6__ {int cq; } ;
struct TYPE_8__ {int cq; } ;
struct mlx5e_channel {TYPE_2__ xskrq; TYPE_1__ xsksq; TYPE_3__ xskicosq; int state; int xskicosq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5e_channel_param*) ;
 struct mlx5e_channel_param* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_params*,struct mlx5e_xsk_param*,struct mlx5e_channel_param*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct mlx5e_channel*,struct dim_cq_moder,int *,int *) ;
 int FUNC_7 (struct mlx5e_channel*,struct mlx5e_params*,int *,TYPE_3__*) ;
 int FUNC_8 (struct mlx5e_channel*,struct mlx5e_params*,int *,struct mlx5e_xsk_param*,struct xdp_umem*,TYPE_2__*) ;
 int FUNC_9 (struct mlx5e_channel*,struct mlx5e_params*,int *,struct xdp_umem*,TYPE_1__*,int) ;
 int FUNC_10 (struct mlx5e_params*,struct mlx5e_xsk_param*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct mlx5e_priv *VAR_4, struct mlx5e_params *VAR_5,
     struct mlx5e_xsk_param *VAR_6, struct xdp_umem *VAR_7,
     struct mlx5e_channel *VAR_8)
{
 struct mlx5e_channel_param *VAR_9;
 struct dim_cq_moder VAR_10 = {};
 int VAR_11;

 if (!FUNC_10(VAR_5, VAR_6, VAR_4->mdev))
  return -VAR_0;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_2(VAR_4, VAR_5, VAR_6, VAR_9);

 VAR_11 = FUNC_6(VAR_8, VAR_5->rx_cq_moderation, &VAR_9->rx_cq, &VAR_8->xskrq.cq);
 if (FUNC_13(VAR_11))
  goto err_free_cparam;

 VAR_11 = FUNC_8(VAR_8, VAR_5, &VAR_9->rq, VAR_6, VAR_7, &VAR_8->xskrq);
 if (FUNC_13(VAR_11))
  goto err_close_rx_cq;

 VAR_11 = FUNC_6(VAR_8, VAR_5->tx_cq_moderation, &VAR_9->tx_cq, &VAR_8->xsksq.cq);
 if (FUNC_13(VAR_11))
  goto err_close_rq;







 VAR_11 = FUNC_9(VAR_8, VAR_5, &VAR_9->xdp_sq, VAR_7, &VAR_8->xsksq, 1);
 if (FUNC_13(VAR_11))
  goto err_close_tx_cq;

 VAR_11 = FUNC_6(VAR_8, VAR_10, &VAR_9->icosq_cq, &VAR_8->xskicosq.cq);
 if (FUNC_13(VAR_11))
  goto err_close_sq;




 VAR_11 = FUNC_7(VAR_8, VAR_5, &VAR_9->icosq, &VAR_8->xskicosq);
 if (FUNC_13(VAR_11))
  goto err_close_icocq;

 FUNC_0(VAR_9);

 FUNC_12(&VAR_8->xskicosq_lock);

 FUNC_11(VAR_3, VAR_8->state);

 return 0;

err_close_icocq:
 FUNC_3(&VAR_8->xskicosq.cq);

err_close_sq:
 FUNC_5(&VAR_8->xsksq);

err_close_tx_cq:
 FUNC_3(&VAR_8->xsksq.cq);

err_close_rq:
 FUNC_4(&VAR_8->xskrq);

err_close_rx_cq:
 FUNC_3(&VAR_8->xskrq.cq);

err_free_cparam:
 FUNC_0(VAR_9);

 return VAR_11;
}
