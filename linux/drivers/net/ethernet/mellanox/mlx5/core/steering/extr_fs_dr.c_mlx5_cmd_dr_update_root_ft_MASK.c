
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_root_namespace {int dummy; } ;
struct TYPE_2__ {int (* update_root_ft ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,int ,int) ;} ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mlx5_flow_root_namespace *VAR_0,
          struct mlx5_flow_table *VAR_1,
          u32 VAR_2,
          bool VAR_3)
{
 return FUNC_0()->update_root_ft(VAR_0, VAR_1, VAR_2,
        VAR_3);
}
