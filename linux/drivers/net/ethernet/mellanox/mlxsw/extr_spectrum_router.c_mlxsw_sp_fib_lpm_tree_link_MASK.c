
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlxsw_sp_prefix_usage {int dummy; } ;
struct mlxsw_sp_lpm_tree {scalar_t__* prefix_ref_count; int prefix_usage; } ;
struct TYPE_6__ {size_t prefix_len; } ;
struct mlxsw_sp_fib_node {TYPE_3__ key; struct mlxsw_sp_fib* fib; } ;
struct mlxsw_sp_fib {size_t proto; } ;
struct mlxsw_sp {TYPE_2__* router; } ;
struct TYPE_4__ {struct mlxsw_sp_lpm_tree** proto_trees; } ;
struct TYPE_5__ {TYPE_1__ lpm; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_lpm_tree*) ;
 int FUNC_1 (struct mlxsw_sp_lpm_tree*) ;
 struct mlxsw_sp_lpm_tree* FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_prefix_usage*,size_t) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_lpm_tree*) ;
 int FUNC_4 (struct mlxsw_sp_prefix_usage*,int *) ;
 int FUNC_5 (struct mlxsw_sp_prefix_usage*,size_t) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_fib*,struct mlxsw_sp_lpm_tree*) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp *VAR_0,
          struct mlxsw_sp_fib_node *VAR_1)
{
 struct mlxsw_sp_prefix_usage VAR_2;
 struct mlxsw_sp_fib *VAR_3 = VAR_1->fib;
 struct mlxsw_sp_lpm_tree *VAR_4;
 int VAR_5;

 VAR_4 = VAR_0->router->lpm.proto_trees[VAR_3->proto];
 if (VAR_4->prefix_ref_count[VAR_1->key.prefix_len] != 0)
  goto out;

 FUNC_4(&VAR_2, &VAR_4->prefix_usage);
 FUNC_5(&VAR_2, VAR_1->key.prefix_len);
 VAR_4 = FUNC_2(VAR_0, &VAR_2,
      VAR_3->proto);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_6(VAR_0, VAR_3, VAR_4);
 if (VAR_5)
  goto err_lpm_tree_replace;

out:
 VAR_4->prefix_ref_count[VAR_1->key.prefix_len]++;
 return 0;

err_lpm_tree_replace:
 FUNC_3(VAR_0, VAR_4);
 return VAR_5;
}
