
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct mlx5_core_dev* mdev; struct mlx5_flow_table* ft; } ;
struct TYPE_4__ {int is_fw_tbl; TYPE_1__ fw_tbl; } ;
struct mlx5dr_action {TYPE_2__ dest_tbl; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 struct mlx5dr_action* FUNC_0 (int ) ;

struct mlx5dr_action *
FUNC_1(struct mlx5_flow_table *VAR_1,
     struct mlx5_core_dev *VAR_2)
{
 struct mlx5dr_action *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->dest_tbl.is_fw_tbl = 1;
 VAR_3->dest_tbl.fw_tbl.ft = VAR_1;
 VAR_3->dest_tbl.fw_tbl.mdev = VAR_2;

 return VAR_3;
}
