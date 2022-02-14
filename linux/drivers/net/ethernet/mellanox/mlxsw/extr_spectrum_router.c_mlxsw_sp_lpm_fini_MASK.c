
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_lpm_tree {int dummy; } ;
struct mlxsw_sp {TYPE_2__* router; } ;
struct TYPE_3__ {int trees; struct mlxsw_sp_lpm_tree** proto_trees; } ;
struct TYPE_4__ {TYPE_1__ lpm; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_lpm_tree*) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_2)
{
 struct mlxsw_sp_lpm_tree *VAR_3;

 VAR_3 = VAR_2->router->lpm.proto_trees[VAR_1];
 FUNC_1(VAR_2, VAR_3);

 VAR_3 = VAR_2->router->lpm.proto_trees[VAR_0];
 FUNC_1(VAR_2, VAR_3);

 FUNC_0(VAR_2->router->lpm.trees);
}
