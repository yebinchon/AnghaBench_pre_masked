
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {struct mlxsw_sp_rif** rifs; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mlxsw_sp_rif*) ;

void FUNC_3(struct mlxsw_sp *VAR_0, u16 VAR_1)
{
 struct mlxsw_sp_rif *VAR_2;

 FUNC_0();

 VAR_2 = VAR_0->router->rifs[VAR_1];
 if (FUNC_1(!VAR_2))
  return;

 FUNC_2(VAR_2);
}
