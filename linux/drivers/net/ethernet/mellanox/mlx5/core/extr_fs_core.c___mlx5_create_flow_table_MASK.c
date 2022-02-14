
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct mlx5_flow_table_attr {scalar_t__ level; int flags; scalar_t__ max_fte; int prio; } ;
struct TYPE_5__ {int active; } ;
struct mlx5_flow_table {TYPE_2__ node; int def_miss_action; scalar_t__ max_fte; } ;
struct mlx5_flow_root_namespace {int chain_lock; TYPE_1__* cmds; int dev; int table_type; } ;
struct mlx5_flow_namespace {int def_miss_action; int node; } ;
struct fs_prio {scalar_t__ num_levels; scalar_t__ start_level; int node; int num_ft; } ;
typedef enum fs_flow_table_op_mod { ____Placeholder_fs_flow_table_op_mod } fs_flow_table_op_mod ;
struct TYPE_4__ {int (* create_flow_table ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,int,struct mlx5_flow_table*) ;int (* destroy_flow_table ) (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_flow_table* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlx5_flow_table*) ;
 int FUNC_2 (struct mlx5_flow_table*) ;
 struct mlx5_flow_table* FUNC_3 (scalar_t__,int ,int ,int ,int,int ) ;
 int FUNC_4 (int ,struct mlx5_flow_table*,struct fs_prio*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int) ;
 struct mlx5_flow_table* FUNC_6 (struct fs_prio*) ;
 struct fs_prio* FUNC_7 (struct mlx5_flow_namespace*,int ) ;
 struct mlx5_flow_root_namespace* FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct mlx5_flow_table*) ;
 int FUNC_11 (struct mlx5_flow_table*,struct fs_prio*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*,int,struct mlx5_flow_table*) ;
 int FUNC_17 (struct mlx5_flow_root_namespace*,struct mlx5_flow_table*) ;
 int FUNC_18 (struct mlx5_flow_table*) ;
 int FUNC_19 (TYPE_2__*,int *) ;
 int FUNC_20 (TYPE_2__*,int ,int ) ;
 int FUNC_21 (int *,int) ;

__attribute__((used)) static struct mlx5_flow_table *FUNC_22(struct mlx5_flow_namespace *VAR_5,
       struct mlx5_flow_table_attr *VAR_6,
       enum fs_flow_table_op_mod VAR_7,
       u16 VAR_8)
{
 struct mlx5_flow_root_namespace *VAR_9 = FUNC_8(&VAR_5->node);
 struct mlx5_flow_table *VAR_10 = ((void*)0);
 struct fs_prio *VAR_11 = ((void*)0);
 struct mlx5_flow_table *VAR_12;
 int VAR_13;
 int VAR_14;

 if (!VAR_9) {
  FUNC_14("mlx5: flow steering failed to find root of namespace\n");
  return FUNC_0(-VAR_1);
 }

 FUNC_12(&VAR_9->chain_lock);
 VAR_11 = FUNC_7(VAR_5, VAR_6->prio);
 if (!VAR_11) {
  VAR_14 = -VAR_0;
  goto unlock_root;
 }
 if (VAR_6->level >= VAR_11->num_levels) {
  VAR_14 = -VAR_2;
  goto unlock_root;
 }



 VAR_6->level += VAR_11->start_level;
 VAR_12 = FUNC_3(VAR_6->level,
         VAR_8,
         VAR_6->max_fte ? FUNC_15(VAR_6->max_fte) : 0,
         VAR_9->table_type,
         VAR_7, VAR_6->flags);
 if (FUNC_1(VAR_12)) {
  VAR_14 = FUNC_2(VAR_12);
  goto unlock_root;
 }

 FUNC_20(&VAR_12->node, VAR_3, VAR_4);
 VAR_13 = VAR_12->max_fte ? FUNC_9(VAR_12->max_fte) : 0;
 VAR_10 = FUNC_6(VAR_11);
 VAR_12->def_miss_action = VAR_5->def_miss_action;
 VAR_14 = VAR_9->cmds->create_flow_table(VAR_9, VAR_12, VAR_13, VAR_10);
 if (VAR_14)
  goto free_ft;

 VAR_14 = FUNC_4(VAR_9->dev, VAR_12, VAR_11);
 if (VAR_14)
  goto destroy_ft;
 VAR_12->node.active = 1;
 FUNC_5(&VAR_11->node, 0);
 FUNC_19(&VAR_12->node, &VAR_11->node);
 FUNC_11(VAR_12, VAR_11);
 VAR_11->num_ft++;
 FUNC_21(&VAR_11->node, 0);
 FUNC_13(&VAR_9->chain_lock);
 FUNC_18(VAR_12);
 return VAR_12;
destroy_ft:
 VAR_9->cmds->destroy_flow_table(VAR_9, VAR_12);
free_ft:
 FUNC_10(VAR_12);
unlock_root:
 FUNC_13(&VAR_9->chain_lock);
 return FUNC_0(VAR_14);
}
