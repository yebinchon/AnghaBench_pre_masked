
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {struct mlxsw_sp_rif** rifs; } ;



struct mlxsw_sp_rif *FUNC_0(const struct mlxsw_sp *VAR_0,
        u16 VAR_1)
{
 return VAR_0->router->rifs[VAR_1];
}
