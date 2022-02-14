
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_vr {int dummy; } ;
struct mlxsw_sp_lpm_tree {int id; } ;
struct mlxsw_sp_fib {int proto; struct mlxsw_sp_lpm_tree* lpm_tree; struct mlxsw_sp_vr* vr; int node_list; int ht; } ;
struct mlxsw_sp {TYPE_2__* router; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
struct TYPE_3__ {struct mlxsw_sp_lpm_tree** proto_trees; } ;
struct TYPE_4__ {TYPE_1__ lpm; } ;


 int VAR_0 ;
 struct mlxsw_sp_fib* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_sp_fib*) ;
 struct mlxsw_sp_fib* FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct mlxsw_sp_lpm_tree*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_lpm_tree*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_fib*,int ) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static struct mlxsw_sp_fib *FUNC_8(struct mlxsw_sp *VAR_3,
      struct mlxsw_sp_vr *VAR_4,
      enum mlxsw_sp_l3proto VAR_5)
{
 struct mlxsw_sp_lpm_tree *VAR_6;
 struct mlxsw_sp_fib *VAR_7;
 int VAR_8;

 VAR_6 = VAR_3->router->lpm.proto_trees[VAR_5];
 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);
 VAR_8 = FUNC_7(&VAR_7->ht, &VAR_2);
 if (VAR_8)
  goto err_rhashtable_init;
 FUNC_1(&VAR_7->node_list);
 VAR_7->proto = VAR_5;
 VAR_7->vr = VAR_4;
 VAR_7->lpm_tree = VAR_6;
 FUNC_4(VAR_6);
 VAR_8 = FUNC_6(VAR_3, VAR_7, VAR_6->id);
 if (VAR_8)
  goto err_lpm_tree_bind;
 return VAR_7;

err_lpm_tree_bind:
 FUNC_5(VAR_3, VAR_6);
err_rhashtable_init:
 FUNC_2(VAR_7);
 return FUNC_0(VAR_8);
}
