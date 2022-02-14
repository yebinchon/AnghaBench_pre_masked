
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cqn; } ;
struct TYPE_7__ {TYPE_2__ mcq; } ;
struct mlx5e_rq {int rqn; TYPE_3__ cq; TYPE_4__* channel; } ;
struct mlx5e_priv {int rx_reporter; } ;
struct mlx5e_icosq {int sqn; TYPE_1__* channel; } ;
struct mlx5e_err_ctx {int recover; struct mlx5e_rq* ctx; } ;
struct TYPE_8__ {struct mlx5e_priv* priv; struct mlx5e_icosq icosq; } ;
struct TYPE_5__ {int ix; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*,int ,char*,struct mlx5e_err_ctx*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int,int,int,int) ;

void FUNC_2(struct mlx5e_rq *VAR_2)
{
 struct mlx5e_icosq *VAR_3 = &VAR_2->channel->icosq;
 struct mlx5e_priv *VAR_4 = VAR_2->channel->priv;
 char VAR_5[VAR_0];
 struct mlx5e_err_ctx VAR_6 = {};

 VAR_6.ctx = VAR_2;
 VAR_6.recover = VAR_1;
 FUNC_1(VAR_5, "RX timeout on channel: %d, ICOSQ: 0x%x RQ: 0x%x, CQ: 0x%x\n",
  VAR_3->channel->ix, VAR_3->sqn, VAR_2->rqn, VAR_2->cq.mcq.cqn);

 FUNC_0(VAR_4, VAR_4->rx_reporter, VAR_5, &VAR_6);
}
