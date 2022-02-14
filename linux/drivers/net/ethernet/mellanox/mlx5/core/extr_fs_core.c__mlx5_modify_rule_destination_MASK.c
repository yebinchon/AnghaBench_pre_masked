
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int parent; } ;
struct TYPE_8__ {int action; } ;
struct mlx5_flow_table {TYPE_4__ node; TYPE_2__ action; } ;
struct TYPE_7__ {int parent; } ;
struct mlx5_flow_rule {int dest_attr; TYPE_1__ node; } ;
struct mlx5_flow_root_namespace {TYPE_3__* cmds; } ;
struct mlx5_flow_group {TYPE_4__ node; TYPE_2__ action; } ;
struct mlx5_flow_destination {int dummy; } ;
struct fs_fte {TYPE_4__ node; TYPE_2__ action; } ;
struct TYPE_9__ {int (* update_fte ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_table*,int,struct mlx5_flow_table*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int) ;
 struct mlx5_flow_root_namespace* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct mlx5_flow_table*,int ) ;
 int FUNC_4 (int *,struct mlx5_flow_destination*,int) ;
 int FUNC_5 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,struct mlx5_flow_table*,int,struct mlx5_flow_table*) ;
 int FUNC_6 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_7(struct mlx5_flow_rule *VAR_3,
      struct mlx5_flow_destination *VAR_4)
{
 struct mlx5_flow_root_namespace *VAR_5;
 struct mlx5_flow_table *VAR_6;
 struct mlx5_flow_group *VAR_7;
 struct fs_fte *VAR_8;
 int VAR_9 = FUNC_0(VAR_2);
 int VAR_10 = 0;

 FUNC_3(VAR_8, VAR_3->node.parent);
 if (!(VAR_8->action.action & VAR_1))
  return -VAR_0;
 FUNC_1(&VAR_8->node, 0);
 FUNC_3(VAR_7, VAR_8->node.parent);
 FUNC_3(VAR_6, VAR_7->node.parent);

 FUNC_4(&VAR_3->dest_attr, VAR_4, sizeof(*VAR_4));
 VAR_5 = FUNC_2(&VAR_6->node);
 VAR_10 = VAR_5->cmds->update_fte(VAR_5, VAR_6, VAR_7,
         VAR_9, VAR_8);
 FUNC_6(&VAR_8->node, 0);

 return VAR_10;
}
