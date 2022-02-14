
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_rule {int dummy; } ;
struct mlx5dr_matcher {TYPE_2__* tbl; int refcount; } ;
struct mlx5dr_match_parameters {int dummy; } ;
struct mlx5dr_action {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dmn; } ;
struct TYPE_3__ {int mutex; } ;


 struct mlx5dr_rule* FUNC_0 (struct mlx5dr_matcher*,struct mlx5dr_match_parameters*,size_t,struct mlx5dr_action**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct mlx5dr_rule *FUNC_5(struct mlx5dr_matcher *VAR_0,
           struct mlx5dr_match_parameters *VAR_1,
           size_t VAR_2,
           struct mlx5dr_action *VAR_3[])
{
 struct mlx5dr_rule *VAR_4;

 FUNC_1(&VAR_0->tbl->dmn->mutex);
 FUNC_4(&VAR_0->refcount);

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  FUNC_3(&VAR_0->refcount);

 FUNC_2(&VAR_0->tbl->dmn->mutex);

 return VAR_4;
}
