
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_table {TYPE_2__* dmn; TYPE_1__* miss_action; int refcount; } ;
struct TYPE_4__ {int refcount; } ;
struct TYPE_3__ {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_table*) ;
 int FUNC_1 (struct mlx5dr_table*) ;
 int FUNC_2 (struct mlx5dr_table*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mlx5dr_table *VAR_1)
{
 int VAR_2;

 if (FUNC_4(&VAR_1->refcount) > 1)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1);

 if (VAR_1->miss_action)
  FUNC_3(&VAR_1->miss_action->refcount);

 FUNC_3(&VAR_1->dmn->refcount);
 FUNC_2(VAR_1);

 return VAR_2;
}
