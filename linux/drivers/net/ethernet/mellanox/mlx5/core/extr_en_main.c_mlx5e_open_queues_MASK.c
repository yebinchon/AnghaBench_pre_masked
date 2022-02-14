
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dim_cq_moder {int member_1; int member_0; } ;
struct mlx5e_params {struct dim_cq_moder tx_cq_moderation; struct dim_cq_moder rx_cq_moderation; } ;
struct mlx5e_channel_param {int xdp_sq; int rq; int icosq; int tx_cq; int rx_cq; int icosq_cq; } ;
struct TYPE_9__ {int cq; } ;
struct TYPE_7__ {int cq; } ;
struct TYPE_8__ {int cq; } ;
struct mlx5e_channel {TYPE_3__ icosq; TYPE_1__ xdpsq; TYPE_2__ rq; TYPE_1__ rq_xdpsq; scalar_t__ xdp; int napi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct mlx5e_channel*) ;
 int FUNC_4 (struct mlx5e_channel*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct mlx5e_channel*,struct dim_cq_moder,int *,int *) ;
 int FUNC_7 (struct mlx5e_channel*,struct mlx5e_params*,int *,TYPE_3__*) ;
 int FUNC_8 (struct mlx5e_channel*,struct mlx5e_params*,int *,int *,int *,TYPE_2__*) ;
 int FUNC_9 (struct mlx5e_channel*,struct mlx5e_params*,struct mlx5e_channel_param*) ;
 int FUNC_10 (struct mlx5e_channel*,struct mlx5e_params*,struct mlx5e_channel_param*) ;
 int FUNC_11 (struct mlx5e_channel*,struct mlx5e_params*,int *,int *,TYPE_1__*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct mlx5e_channel *VAR_0,
        struct mlx5e_params *VAR_1,
        struct mlx5e_channel_param *VAR_2)
{
 struct dim_cq_moder VAR_3 = {0, 0};
 int VAR_4;

 VAR_4 = FUNC_6(VAR_0, VAR_3, &VAR_2->icosq_cq, &VAR_0->icosq.cq);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_10(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  goto err_close_icosq_cq;

 VAR_4 = FUNC_6(VAR_0, VAR_1->tx_cq_moderation, &VAR_2->tx_cq, &VAR_0->xdpsq.cq);
 if (VAR_4)
  goto err_close_tx_cqs;

 VAR_4 = FUNC_6(VAR_0, VAR_1->rx_cq_moderation, &VAR_2->rx_cq, &VAR_0->rq.cq);
 if (VAR_4)
  goto err_close_xdp_tx_cqs;


 VAR_4 = VAR_0->xdp ? FUNC_6(VAR_0, VAR_1->tx_cq_moderation,
         &VAR_2->tx_cq, &VAR_0->rq_xdpsq.cq) : 0;
 if (VAR_4)
  goto err_close_rx_cq;

 FUNC_13(&VAR_0->napi);

 VAR_4 = FUNC_7(VAR_0, VAR_1, &VAR_2->icosq, &VAR_0->icosq);
 if (VAR_4)
  goto err_disable_napi;

 VAR_4 = FUNC_9(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  goto err_close_icosq;

 if (VAR_0->xdp) {
  VAR_4 = FUNC_11(VAR_0, VAR_1, &VAR_2->xdp_sq, ((void*)0),
           &VAR_0->rq_xdpsq, 0);
  if (VAR_4)
   goto err_close_sqs;
 }

 VAR_4 = FUNC_8(VAR_0, VAR_1, &VAR_2->rq, ((void*)0), ((void*)0), &VAR_0->rq);
 if (VAR_4)
  goto err_close_xdp_sq;

 VAR_4 = FUNC_11(VAR_0, VAR_1, &VAR_2->xdp_sq, ((void*)0), &VAR_0->xdpsq, 1);
 if (VAR_4)
  goto err_close_rq;

 return 0;

err_close_rq:
 FUNC_2(&VAR_0->rq);

err_close_xdp_sq:
 if (VAR_0->xdp)
  FUNC_5(&VAR_0->rq_xdpsq);

err_close_sqs:
 FUNC_3(VAR_0);

err_close_icosq:
 FUNC_1(&VAR_0->icosq);

err_disable_napi:
 FUNC_12(&VAR_0->napi);

 if (VAR_0->xdp)
  FUNC_0(&VAR_0->rq_xdpsq.cq);

err_close_rx_cq:
 FUNC_0(&VAR_0->rq.cq);

err_close_xdp_tx_cqs:
 FUNC_0(&VAR_0->xdpsq.cq);

err_close_tx_cqs:
 FUNC_4(VAR_0);

err_close_icosq_cq:
 FUNC_0(&VAR_0->icosq.cq);

 return VAR_4;
}
