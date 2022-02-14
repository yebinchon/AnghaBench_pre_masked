
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_rq {int recover_work; TYPE_2__* channel; int state; } ;
struct mlx5_err_cqe {int syndrome; } ;
struct mlx5_cqe64 {int dummy; } ;
struct TYPE_4__ {TYPE_1__* priv; } ;
struct TYPE_3__ {int wq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5e_rq *VAR_1, struct mlx5_cqe64 *VAR_2)
{
 struct mlx5_err_cqe *VAR_3 = (struct mlx5_err_cqe *)VAR_2;

 if (FUNC_0(VAR_3->syndrome) &&
     !FUNC_2(VAR_0, &VAR_1->state))
  FUNC_1(VAR_1->channel->priv->wq, &VAR_1->recover_work);
}
