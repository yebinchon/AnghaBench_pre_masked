
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_table {TYPE_1__* dmn; } ;
struct mlx5dr_rule {struct mlx5dr_matcher* matcher; } ;
struct mlx5dr_matcher {int refcount; struct mlx5dr_table* tbl; } ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (struct mlx5dr_rule*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mlx5dr_rule *VAR_0)
{
 struct mlx5dr_matcher *VAR_1 = VAR_0->matcher;
 struct mlx5dr_table *VAR_2 = VAR_0->matcher->tbl;
 int VAR_3;

 FUNC_1(&VAR_2->dmn->mutex);

 VAR_3 = FUNC_0(VAR_0);

 FUNC_2(&VAR_2->dmn->mutex);

 if (!VAR_3)
  FUNC_3(&VAR_1->refcount);
 return VAR_3;
}
