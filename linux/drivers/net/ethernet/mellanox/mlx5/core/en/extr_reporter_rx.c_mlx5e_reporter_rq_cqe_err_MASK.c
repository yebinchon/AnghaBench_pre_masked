
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_rq {int rqn; TYPE_1__* channel; } ;
struct mlx5e_priv {int rx_reporter; } ;
struct mlx5e_err_ctx {int recover; struct mlx5e_rq* ctx; } ;
struct TYPE_2__ {struct mlx5e_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*,int ,char*,struct mlx5e_err_ctx*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;

void FUNC_2(struct mlx5e_rq *VAR_2)
{
 struct mlx5e_priv *VAR_3 = VAR_2->channel->priv;
 char VAR_4[VAR_0];
 struct mlx5e_err_ctx VAR_5 = {};

 VAR_5.ctx = VAR_2;
 VAR_5.recover = VAR_1;
 FUNC_1(VAR_4, "ERR CQE on RQ: 0x%x", VAR_2->rqn);

 FUNC_0(VAR_3, VAR_3->rx_reporter, VAR_4, &VAR_5);
}
