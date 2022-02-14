
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_lpm_tree {scalar_t__ ref_count; } ;
struct mlxsw_sp {TYPE_2__* router; } ;
struct TYPE_3__ {int tree_count; struct mlxsw_sp_lpm_tree* trees; } ;
struct TYPE_4__ {TYPE_1__ lpm; } ;



__attribute__((used)) static struct mlxsw_sp_lpm_tree *
FUNC_0(struct mlxsw_sp *VAR_0)
{
 static struct mlxsw_sp_lpm_tree *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->router->lpm.tree_count; VAR_2++) {
  VAR_1 = &VAR_0->router->lpm.trees[VAR_2];
  if (VAR_1->ref_count == 0)
   return VAR_1;
 }
 return ((void*)0);
}
