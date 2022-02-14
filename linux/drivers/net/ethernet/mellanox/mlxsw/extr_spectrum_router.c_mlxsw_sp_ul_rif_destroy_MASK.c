
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_rif {size_t rif_index; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {int ** rifs; } ;


 int FUNC_0 (struct mlxsw_sp_rif*) ;
 int FUNC_1 (struct mlxsw_sp_rif*,int) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp_rif *VAR_0)
{
 struct mlxsw_sp *VAR_1 = VAR_0->mlxsw_sp;

 FUNC_1(VAR_0, 0);
 VAR_1->router->rifs[VAR_0->rif_index] = ((void*)0);
 FUNC_0(VAR_0);
}
