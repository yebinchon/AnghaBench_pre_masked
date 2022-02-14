
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_lpm_tree {int id; } ;
struct mlxsw_sp_fib {struct mlxsw_sp_lpm_tree* lpm_tree; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_lpm_tree*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_lpm_tree*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_fib*,int ) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_fib *VAR_1,
     struct mlxsw_sp_lpm_tree *VAR_2)
{
 struct mlxsw_sp_lpm_tree *VAR_3 = VAR_1->lpm_tree;
 int VAR_4;

 VAR_1->lpm_tree = VAR_2;
 FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2->id);
 if (VAR_4)
  goto err_tree_bind;
 FUNC_1(VAR_0, VAR_3);
 return 0;

err_tree_bind:
 FUNC_1(VAR_0, VAR_2);
 VAR_1->lpm_tree = VAR_3;
 return VAR_4;
}
