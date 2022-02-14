
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_prefix_usage {int dummy; } ;
struct mlxsw_sp_lpm_tree {scalar_t__ ref_count; int proto; int prefix_usage; } ;
struct mlxsw_sp {TYPE_2__* router; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
struct TYPE_3__ {int tree_count; struct mlxsw_sp_lpm_tree* trees; } ;
struct TYPE_4__ {TYPE_1__ lpm; } ;


 struct mlxsw_sp_lpm_tree* FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_prefix_usage*,int) ;
 int FUNC_1 (struct mlxsw_sp_lpm_tree*) ;
 scalar_t__ FUNC_2 (int *,struct mlxsw_sp_prefix_usage*) ;

__attribute__((used)) static struct mlxsw_sp_lpm_tree *
FUNC_3(struct mlxsw_sp *VAR_0,
        struct mlxsw_sp_prefix_usage *VAR_1,
        enum mlxsw_sp_l3proto VAR_2)
{
 struct mlxsw_sp_lpm_tree *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->router->lpm.tree_count; VAR_4++) {
  VAR_3 = &VAR_0->router->lpm.trees[VAR_4];
  if (VAR_3->ref_count != 0 &&
      VAR_3->proto == VAR_2 &&
      FUNC_2(&VAR_3->prefix_usage,
          VAR_1)) {
   FUNC_1(VAR_3);
   return VAR_3;
  }
 }
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
