
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_eq_tasklet {int lock; int task; int list; } ;
struct TYPE_2__ {int list; struct mlx4_eq_tasklet* priv; } ;
struct mlx4_cq {TYPE_1__ tasklet_ctx; int refcount; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct mlx4_cq *VAR_0)
{
 struct mlx4_eq_tasklet *VAR_1 = VAR_0->tasklet_ctx.priv;
 unsigned long VAR_2;
 bool VAR_3;

 FUNC_4(&VAR_1->lock, VAR_2);





 if (FUNC_2(&VAR_0->tasklet_ctx.list)) {
  FUNC_3(&VAR_0->refcount);
  VAR_3 = FUNC_1(&VAR_1->list);
  FUNC_0(&VAR_0->tasklet_ctx.list, &VAR_1->list);
  if (VAR_3)
   FUNC_6(&VAR_1->task);
 }
 FUNC_5(&VAR_1->lock, VAR_2);
}
