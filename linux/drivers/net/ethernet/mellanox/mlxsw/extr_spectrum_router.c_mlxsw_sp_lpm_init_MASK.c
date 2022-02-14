
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_4__ {int member_0; } ;
struct mlxsw_sp_prefix_usage {TYPE_1__ member_0; } ;
struct mlxsw_sp_lpm_tree {void* id; } ;
struct mlxsw_sp {TYPE_3__* router; int core; } ;
struct TYPE_5__ {int tree_count; struct mlxsw_sp_lpm_tree* trees; struct mlxsw_sp_lpm_tree** proto_trees; } ;
struct TYPE_6__ {TYPE_2__ lpm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp_lpm_tree*) ;
 int VAR_3 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* VAR_6 ;
 int FUNC_3 (struct mlxsw_sp_lpm_tree*) ;
 struct mlxsw_sp_lpm_tree* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct mlxsw_sp_lpm_tree*) ;
 struct mlxsw_sp_lpm_tree* FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_prefix_usage*,size_t) ;
 int FUNC_7 (struct mlxsw_sp*,struct mlxsw_sp_lpm_tree*) ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp *VAR_7)
{
 struct mlxsw_sp_prefix_usage VAR_8 = {{ 0 } };
 struct mlxsw_sp_lpm_tree *VAR_9;
 u64 VAR_10;
 int VAR_11, VAR_12;

 if (!FUNC_2(VAR_7->core, VAR_3))
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_7->core, VAR_3);
 VAR_7->router->lpm.tree_count = VAR_10 - VAR_6;
 VAR_7->router->lpm.trees = FUNC_4(VAR_7->router->lpm.tree_count,
          sizeof(struct mlxsw_sp_lpm_tree),
          VAR_2);
 if (!VAR_7->router->lpm.trees)
  return -VAR_1;

 for (VAR_12 = 0; VAR_12 < VAR_7->router->lpm.tree_count; VAR_12++) {
  VAR_9 = &VAR_7->router->lpm.trees[VAR_12];
  VAR_9->id = VAR_12 + VAR_6;
 }

 VAR_9 = FUNC_6(VAR_7, &VAR_8,
      VAR_4);
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_3(VAR_9);
  goto err_ipv4_tree_get;
 }
 VAR_7->router->lpm.proto_trees[VAR_4] = VAR_9;

 VAR_9 = FUNC_6(VAR_7, &VAR_8,
      VAR_5);
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_3(VAR_9);
  goto err_ipv6_tree_get;
 }
 VAR_7->router->lpm.proto_trees[VAR_5] = VAR_9;

 return 0;

err_ipv6_tree_get:
 VAR_9 = VAR_7->router->lpm.proto_trees[VAR_4];
 FUNC_7(VAR_7, VAR_9);
err_ipv4_tree_get:
 FUNC_5(VAR_7->router->lpm.trees);
 return VAR_11;
}
