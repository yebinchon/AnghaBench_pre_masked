
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct mlx5_flow_table_attr {int max_fte; int prio; void* flags; void* level; } ;
struct TYPE_2__ {int active; int required_groups; } ;
struct mlx5_flow_table {TYPE_1__ autogroup; } ;
struct mlx5_flow_namespace {int dummy; } ;


 int VAR_0 ;
 struct mlx5_flow_table* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mlx5_flow_table*) ;
 struct mlx5_flow_table* FUNC_2 (struct mlx5_flow_namespace*,struct mlx5_flow_table_attr*) ;

struct mlx5_flow_table*
FUNC_3(struct mlx5_flow_namespace *VAR_1,
        int VAR_2,
        int VAR_3,
        int VAR_4,
        u32 VAR_5,
        u32 VAR_6)
{
 struct mlx5_flow_table_attr VAR_7 = {};
 struct mlx5_flow_table *VAR_8;

 if (VAR_4 > VAR_3)
  return FUNC_0(-VAR_0);

 VAR_7.max_fte = VAR_3;
 VAR_7.prio = VAR_2;
 VAR_7.level = VAR_5;
 VAR_7.flags = VAR_6;

 VAR_8 = FUNC_2(VAR_1, &VAR_7);
 if (FUNC_1(VAR_8))
  return VAR_8;

 VAR_8->autogroup.active = 1;
 VAR_8->autogroup.required_groups = VAR_4;

 return VAR_8;
}
