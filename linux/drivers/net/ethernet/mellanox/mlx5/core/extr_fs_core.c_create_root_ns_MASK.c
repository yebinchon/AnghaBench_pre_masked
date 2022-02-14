
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_steering {int dev; } ;
struct mlx5_flow_namespace {int node; } ;
struct mlx5_flow_root_namespace {int table_type; int chain_lock; struct mlx5_flow_namespace ns; int underlay_qpns; struct mlx5_flow_cmds const* cmds; int dev; } ;
struct mlx5_flow_cmds {int dummy; } ;
typedef enum fs_flow_table_type { ____Placeholder_fs_flow_table_type } fs_flow_table_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5_flow_namespace*) ;
 struct mlx5_flow_root_namespace* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 struct mlx5_flow_cmds* FUNC_4 (int) ;
 struct mlx5_flow_cmds* FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int *) ;

__attribute__((used)) static struct mlx5_flow_root_namespace
*FUNC_9(struct mlx5_flow_steering *VAR_4,
  enum fs_flow_table_type VAR_5)
{
 const struct mlx5_flow_cmds *VAR_6 = FUNC_4(VAR_5);
 struct mlx5_flow_root_namespace *VAR_7;
 struct mlx5_flow_namespace *VAR_8;

 if (FUNC_3(VAR_4->dev) & VAR_3 &&
     (VAR_5 == VAR_0 || VAR_5 == VAR_1))
  VAR_6 = FUNC_5(VAR_5);


 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->dev = VAR_4->dev;
 VAR_7->table_type = VAR_5;
 VAR_7->cmds = VAR_6;

 FUNC_0(&VAR_7->underlay_qpns);

 VAR_8 = &VAR_7->ns;
 FUNC_1(VAR_8);
 FUNC_6(&VAR_7->chain_lock);
 FUNC_8(&VAR_8->node, ((void*)0), ((void*)0));
 FUNC_7(&VAR_8->node, ((void*)0));

 return VAR_7;
}
