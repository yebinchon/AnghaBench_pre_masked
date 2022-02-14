
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_flow_table {int flags; } ;
struct mlx5_flow_root_namespace {int dummy; } ;
struct TYPE_3__ {int dr_matcher; } ;
struct mlx5_flow_group {TYPE_1__ fs_dr_matcher; } ;
struct TYPE_4__ {int (* destroy_flow_group ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_group*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_group*) ;

__attribute__((used)) static int FUNC_4(struct mlx5_flow_root_namespace *VAR_0,
       struct mlx5_flow_table *VAR_1,
       struct mlx5_flow_group *VAR_2)
{
 if (FUNC_0(VAR_1->flags))
  return FUNC_1()->destroy_flow_group(VAR_0, VAR_1, VAR_2);

 return FUNC_2(VAR_2->fs_dr_matcher.dr_matcher);
}
