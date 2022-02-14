
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_prefix_usage {int dummy; } ;
struct mlxsw_sp_lpm_tree {scalar_t__* prefix_ref_count; int prefix_usage; } ;
struct TYPE_2__ {size_t prefix_len; } ;
struct mlxsw_sp_fib_node {TYPE_1__ key; struct mlxsw_sp_fib* fib; } ;
struct mlxsw_sp_fib {int proto; struct mlxsw_sp_lpm_tree* lpm_tree; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_lpm_tree*) ;
 struct mlxsw_sp_lpm_tree* FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_prefix_usage*,int ) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_lpm_tree*) ;
 int FUNC_3 (struct mlxsw_sp_prefix_usage*,size_t) ;
 int FUNC_4 (struct mlxsw_sp_prefix_usage*,int *) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_fib*,struct mlxsw_sp_lpm_tree*) ;

__attribute__((used)) static void FUNC_6(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_fib_node *VAR_1)
{
 struct mlxsw_sp_lpm_tree *VAR_2 = VAR_1->fib->lpm_tree;
 struct mlxsw_sp_prefix_usage VAR_3;
 struct mlxsw_sp_fib *VAR_4 = VAR_1->fib;
 int VAR_5;

 if (--VAR_2->prefix_ref_count[VAR_1->key.prefix_len] != 0)
  return;



 FUNC_4(&VAR_3, &VAR_2->prefix_usage);
 FUNC_3(&VAR_3,
        VAR_1->key.prefix_len);
 VAR_2 = FUNC_1(VAR_0, &VAR_3,
      VAR_4->proto);
 if (FUNC_0(VAR_2))
  return;

 VAR_5 = FUNC_5(VAR_0, VAR_4, VAR_2);
 if (VAR_5)
  goto err_lpm_tree_replace;

 return;

err_lpm_tree_replace:
 FUNC_2(VAR_0, VAR_2);
}
