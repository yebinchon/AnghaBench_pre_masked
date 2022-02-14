
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int type; } ;
struct mlx5_flow_table {int level; int op_mod; int type; int max_fte; int lock; int fwd_rules; int flags; int vport; TYPE_1__ node; int fgs_hash; } ;
typedef enum fs_flow_table_type { ____Placeholder_fs_flow_table_type } fs_flow_table_type ;
typedef enum fs_flow_table_op_mod { ____Placeholder_fs_flow_table_op_mod } fs_flow_table_op_mod ;


 int VAR_0 ;
 struct mlx5_flow_table* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_flow_table*) ;
 struct mlx5_flow_table* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static struct mlx5_flow_table *FUNC_6(int VAR_4, u16 VAR_5, int VAR_6,
      enum fs_flow_table_type VAR_7,
      enum fs_flow_table_op_mod VAR_8,
      u32 VAR_9)
{
 struct mlx5_flow_table *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_11 = FUNC_5(&VAR_10->fgs_hash, &VAR_3);
 if (VAR_11) {
  FUNC_2(VAR_10);
  return FUNC_0(VAR_11);
 }

 VAR_10->level = VAR_4;
 VAR_10->node.type = VAR_1;
 VAR_10->op_mod = VAR_8;
 VAR_10->type = VAR_7;
 VAR_10->vport = VAR_5;
 VAR_10->max_fte = VAR_6;
 VAR_10->flags = VAR_9;
 FUNC_1(&VAR_10->fwd_rules);
 FUNC_4(&VAR_10->lock);

 return VAR_10;
}
