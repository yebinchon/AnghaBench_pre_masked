
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_action {int dummy; } ;
struct TYPE_3__ {int dr_table; struct mlx5dr_action* miss_action; } ;
struct mlx5_flow_table {TYPE_1__ fs_dr_table; int flags; } ;
struct mlx5_flow_root_namespace {int dev; } ;
struct TYPE_4__ {int (* destroy_flow_table ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*) ;} ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (struct mlx5dr_action*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*) ;

__attribute__((used)) static int FUNC_6(struct mlx5_flow_root_namespace *VAR_0,
       struct mlx5_flow_table *VAR_1)
{
 struct mlx5dr_action *VAR_2 = VAR_1->fs_dr_table.miss_action;
 int VAR_3;

 if (FUNC_1(VAR_1->flags))
  return FUNC_2()->destroy_flow_table(VAR_0, VAR_1);

 VAR_3 = FUNC_4(VAR_1->fs_dr_table.dr_table);
 if (VAR_3) {
  FUNC_0(VAR_0->dev, "Failed to destroy flow_table (%d)\n",
         VAR_3);
  return VAR_3;
 }
 if (VAR_2) {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3) {
   FUNC_0(VAR_0->dev, "Failed to destroy action(%d)\n",
          VAR_3);
   return VAR_3;
  }
 }

 return VAR_3;
}
