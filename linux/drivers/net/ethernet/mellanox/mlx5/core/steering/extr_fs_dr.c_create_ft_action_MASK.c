
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_action {int dummy; } ;
struct TYPE_4__ {int dr_table; } ;
struct mlx5_flow_table {TYPE_2__ fs_dr_table; int flags; } ;
struct TYPE_3__ {struct mlx5_flow_table* ft; } ;
struct mlx5_flow_rule {TYPE_1__ dest_attr; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct mlx5dr_action* FUNC_1 (int ) ;
 struct mlx5dr_action* FUNC_2 (struct mlx5_flow_table*,struct mlx5_core_dev*) ;

__attribute__((used)) static struct mlx5dr_action *FUNC_3(struct mlx5_core_dev *VAR_0,
           struct mlx5_flow_rule *VAR_1)
{
 struct mlx5_flow_table *VAR_2 = VAR_1->dest_attr.ft;

 if (FUNC_0(VAR_2->flags))
  return FUNC_2(VAR_2, VAR_0);
 return FUNC_1(VAR_2->fs_dr_table.dr_table);
}
