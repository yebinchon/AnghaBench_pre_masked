
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
struct mlx5e_txqsq {int sqn; int cc; int pc; TYPE_4__* txq; TYPE_3__ cq; TYPE_1__* channel; } ;
struct mlx5e_priv {int tx_reporter; } ;
struct mlx5e_err_ctx {int recover; struct mlx5e_txqsq* ctx; } ;
struct TYPE_8__ {scalar_t__ trans_start; } ;
struct TYPE_5__ {int ix; struct mlx5e_priv* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mlx5e_priv*,int ,char*,struct mlx5e_err_ctx*) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,int,int,int,int,int,int) ;

int FUNC_3(struct mlx5e_txqsq *VAR_3)
{
 struct mlx5e_priv *VAR_4 = VAR_3->channel->priv;
 char VAR_5[VAR_0];
 struct mlx5e_err_ctx VAR_6;

 VAR_6.ctx = VAR_3;
 VAR_6.recover = VAR_2;
 FUNC_2(VAR_5,
  "TX timeout on queue: %d, SQ: 0x%x, CQ: 0x%x, SQ Cons: 0x%x SQ Prod: 0x%x, usecs since last trans: %u\n",
  VAR_3->channel->ix, VAR_3->sqn, VAR_3->cq.mcq.cqn, VAR_3->cc, VAR_3->pc,
  FUNC_0(VAR_1 - VAR_3->txq->trans_start));

 return FUNC_1(VAR_4, VAR_4->tx_reporter, VAR_5, &VAR_6);
}
