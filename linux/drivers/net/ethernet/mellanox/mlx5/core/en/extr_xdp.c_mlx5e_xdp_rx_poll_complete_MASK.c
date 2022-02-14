
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ wqe; } ;
struct mlx5e_xdpsq {TYPE_1__ mpwqe; } ;
struct mlx5e_rq {int flags; struct mlx5e_xdpsq* xdpsq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5e_xdpsq*) ;
 int FUNC_2 (struct mlx5e_xdpsq*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;

void FUNC_5(struct mlx5e_rq *VAR_1)
{
 struct mlx5e_xdpsq *VAR_2 = VAR_1->xdpsq;

 if (VAR_2->mpwqe.wqe)
  FUNC_1(VAR_2);

 FUNC_2(VAR_2);

 if (FUNC_3(VAR_0, VAR_1->flags)) {
  FUNC_4();
  FUNC_0(VAR_0, VAR_1->flags);
 }
}
