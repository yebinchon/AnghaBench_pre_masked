
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_qp_table {int dummy; } ;
struct mlx5_core_rsc_common {int dummy; } ;
struct TYPE_2__ {struct mlx5_qp_table qp_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
typedef enum mlx5_res_type { ____Placeholder_mlx5_res_type } mlx5_res_type ;


 int VAR_0 ;
 struct mlx5_core_rsc_common* FUNC_0 (struct mlx5_qp_table*,int) ;

struct mlx5_core_rsc_common *FUNC_1(struct mlx5_core_dev *VAR_1,
      int VAR_2,
      enum mlx5_res_type VAR_3)
{
 u32 VAR_4 = VAR_2 | (VAR_3 << VAR_0);
 struct mlx5_qp_table *VAR_5 = &VAR_1->priv.qp_table;

 return FUNC_0(VAR_5, VAR_4);
}
