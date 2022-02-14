
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eqe {int dummy; } ;
struct mlx5_eq_tasklet {int lock; int list; } ;
struct TYPE_2__ {int list; struct mlx5_eq_tasklet* priv; } ;
struct mlx5_core_cq {TYPE_1__ tasklet_ctx; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_core_cq*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct mlx5_core_cq *VAR_0,
       struct mlx5_eqe *VAR_1)
{
 unsigned long VAR_2;
 struct mlx5_eq_tasklet *VAR_3 = VAR_0->tasklet_ctx.priv;

 FUNC_3(&VAR_3->lock, VAR_2);





 if (FUNC_1(&VAR_0->tasklet_ctx.list)) {
  FUNC_2(VAR_0);
  FUNC_0(&VAR_0->tasklet_ctx.list, &VAR_3->list);
 }
 FUNC_4(&VAR_3->lock, VAR_2);
}
