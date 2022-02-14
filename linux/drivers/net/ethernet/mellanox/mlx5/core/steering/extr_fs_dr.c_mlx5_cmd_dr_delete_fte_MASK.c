
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fs_dr_rule {int num_actions; int * dr_actions; int dr_rule; } ;
struct mlx5_flow_table {int flags; } ;
struct mlx5_flow_root_namespace {int dummy; } ;
struct fs_fte {struct mlx5_fs_dr_rule fs_dr_rule; } ;
struct TYPE_2__ {int (* delete_fte ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct fs_fte*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct fs_fte*) ;

__attribute__((used)) static int FUNC_7(struct mlx5_flow_root_namespace *VAR_0,
      struct mlx5_flow_table *VAR_1,
      struct fs_fte *VAR_2)
{
 struct mlx5_fs_dr_rule *VAR_3 = &VAR_2->fs_dr_rule;
 int VAR_4;
 int VAR_5;

 if (FUNC_2(VAR_1->flags))
  return FUNC_3()->delete_fte(VAR_0, VAR_1, VAR_2);

 VAR_4 = FUNC_5(VAR_3->dr_rule);
 if (VAR_4)
  return VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_actions; VAR_5++)
  if (!FUNC_0(VAR_3->dr_actions[VAR_5]))
   FUNC_4(VAR_3->dr_actions[VAR_5]);

 FUNC_1(VAR_3->dr_actions);
 return 0;
}
