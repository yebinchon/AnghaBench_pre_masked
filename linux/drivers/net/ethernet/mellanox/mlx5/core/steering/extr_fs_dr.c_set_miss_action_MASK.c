
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_table {int dummy; } ;
struct mlx5dr_action {int dummy; } ;
struct TYPE_2__ {struct mlx5dr_action* miss_action; struct mlx5dr_table* dr_table; } ;
struct mlx5_flow_table {TYPE_1__ fs_dr_table; } ;
struct mlx5_flow_root_namespace {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct mlx5dr_action* FUNC_1 (struct mlx5dr_table*) ;
 int FUNC_2 (struct mlx5dr_action*) ;
 int FUNC_3 (struct mlx5dr_table*,struct mlx5dr_action*) ;

__attribute__((used)) static int FUNC_4(struct mlx5_flow_root_namespace *VAR_1,
      struct mlx5_flow_table *VAR_2,
      struct mlx5_flow_table *VAR_3)
{
 struct mlx5dr_action *VAR_4;
 struct mlx5dr_action *VAR_5 = ((void*)0);
 struct mlx5dr_table *VAR_6;
 int VAR_7;

 VAR_6 = VAR_3 ? VAR_3->fs_dr_table.dr_table : ((void*)0);
 if (VAR_6) {
  VAR_5 = FUNC_1(VAR_6);
  if (!VAR_5)
   return -VAR_0;
 }
 VAR_4 = VAR_2->fs_dr_table.miss_action;
 VAR_7 = FUNC_3(VAR_2->fs_dr_table.dr_table, VAR_5);
 if (VAR_7 && VAR_5) {
  VAR_7 = FUNC_2(VAR_5);
  if (VAR_7) {
   VAR_5 = ((void*)0);
   FUNC_0(VAR_1->dev, "Failed to destroy action (%d)\n",
          VAR_7);
  }
 }
 VAR_2->fs_dr_table.miss_action = VAR_5;
 if (VAR_4) {
  VAR_7 = FUNC_2(VAR_4);
  if (VAR_7)
   FUNC_0(VAR_1->dev, "Failed to destroy action (%d)\n",
          VAR_7);
 }

 return VAR_7;
}
