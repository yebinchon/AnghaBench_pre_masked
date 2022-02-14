
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_table {int refcount; } ;
struct TYPE_2__ {struct mlx5dr_table* tbl; } ;
struct mlx5dr_action {TYPE_1__ dest_tbl; } ;


 int VAR_0 ;
 struct mlx5dr_action* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct mlx5dr_action *
FUNC_3(struct mlx5dr_table *VAR_1)
{
 struct mlx5dr_action *VAR_2;

 FUNC_2(&VAR_1->refcount);

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  goto dec_ref;

 VAR_2->dest_tbl.tbl = VAR_1;

 return VAR_2;

dec_ref:
 FUNC_1(&VAR_1->refcount);
 return ((void*)0);
}
