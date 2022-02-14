
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_table {TYPE_1__* dmn; int refcount; } ;
struct mlx5dr_matcher {struct mlx5dr_table* tbl; int refcount; } ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_matcher*) ;
 int FUNC_1 (struct mlx5dr_matcher*) ;
 int FUNC_2 (struct mlx5dr_matcher*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mlx5dr_matcher *VAR_1)
{
 struct mlx5dr_table *VAR_2 = VAR_1->tbl;

 if (FUNC_6(&VAR_1->refcount) > 1)
  return -VAR_0;

 FUNC_3(&VAR_2->dmn->mutex);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 FUNC_5(&VAR_1->tbl->refcount);

 FUNC_4(&VAR_2->dmn->mutex);
 FUNC_2(VAR_1);

 return 0;
}
