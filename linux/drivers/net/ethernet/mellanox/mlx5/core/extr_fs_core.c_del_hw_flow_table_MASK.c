
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_table {int node; } ;
struct mlx5_flow_root_namespace {TYPE_1__* cmds; } ;
struct mlx5_core_dev {int dummy; } ;
struct fs_node {scalar_t__ active; } ;
struct TYPE_2__ {int (* destroy_flow_table ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*) ;} ;


 struct mlx5_flow_root_namespace* FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_flow_table*,struct fs_node*) ;
 struct mlx5_core_dev* FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 int FUNC_4 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*) ;
 int FUNC_5 (struct mlx5_flow_table*) ;

__attribute__((used)) static void FUNC_6(struct fs_node *VAR_0)
{
 struct mlx5_flow_root_namespace *VAR_1;
 struct mlx5_flow_table *VAR_2;
 struct mlx5_core_dev *VAR_3;
 int VAR_4;

 FUNC_1(VAR_2, VAR_0);
 VAR_3 = FUNC_2(&VAR_2->node);
 VAR_1 = FUNC_0(&VAR_2->node);
 FUNC_5(VAR_2);

 if (VAR_0->active) {
  VAR_4 = VAR_1->cmds->destroy_flow_table(VAR_1, VAR_2);
  if (VAR_4)
   FUNC_3(VAR_3, "flow steering can't destroy ft\n");
 }
}
