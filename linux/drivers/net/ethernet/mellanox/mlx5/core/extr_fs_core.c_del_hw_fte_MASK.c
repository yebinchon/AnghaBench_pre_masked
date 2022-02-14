
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct fs_node* parent; } ;
struct mlx5_flow_table {int id; int index; TYPE_2__ node; } ;
struct mlx5_flow_root_namespace {TYPE_1__* cmds; } ;
struct mlx5_flow_group {int id; int index; TYPE_2__ node; } ;
struct mlx5_core_dev {int dummy; } ;
struct fs_node {scalar_t__ active; } ;
struct fs_fte {int id; int index; TYPE_2__ node; } ;
struct TYPE_4__ {int (* delete_fte ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_table*) ;} ;


 struct mlx5_flow_root_namespace* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct mlx5_flow_table*,struct fs_node*) ;
 struct mlx5_core_dev* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int ,int ) ;
 int FUNC_4 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_table*) ;
 int FUNC_5 (struct mlx5_flow_table*) ;

__attribute__((used)) static void FUNC_6(struct fs_node *VAR_0)
{
 struct mlx5_flow_root_namespace *VAR_1;
 struct mlx5_flow_table *VAR_2;
 struct mlx5_flow_group *VAR_3;
 struct mlx5_core_dev *VAR_4;
 struct fs_fte *VAR_5;
 int VAR_6;

 FUNC_1(VAR_5, VAR_0);
 FUNC_1(VAR_3, VAR_5->node.parent);
 FUNC_1(VAR_2, VAR_3->node.parent);

 FUNC_5(VAR_5);
 VAR_4 = FUNC_2(&VAR_2->node);
 VAR_1 = FUNC_0(&VAR_2->node);
 if (VAR_0->active) {
  VAR_6 = VAR_1->cmds->delete_fte(VAR_1, VAR_2, VAR_5);
  if (VAR_6)
   FUNC_3(VAR_4,
           "flow steering can't delete fte in index %d of flow group id %d\n",
           VAR_5->index, VAR_3->id);
  VAR_0->active = 0;
 }
}
