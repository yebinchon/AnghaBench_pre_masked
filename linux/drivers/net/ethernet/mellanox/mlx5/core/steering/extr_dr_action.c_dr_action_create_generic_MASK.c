
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_action {int action_type; int refcount; } ;
typedef enum mlx5dr_action_type { ____Placeholder_mlx5dr_action_type } mlx5dr_action_type ;


 int VAR_0 ;
 struct mlx5dr_action* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static struct mlx5dr_action *
FUNC_2(enum mlx5dr_action_type VAR_1)
{
 struct mlx5dr_action *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->action_type = VAR_1;
 FUNC_1(&VAR_2->refcount, 1);

 return VAR_2;
}
