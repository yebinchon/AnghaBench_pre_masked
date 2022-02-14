
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_rif {struct net_device const* dev; } ;
struct mlxsw_sp {TYPE_1__* router; int core; } ;
struct TYPE_2__ {struct mlxsw_sp_rif** rifs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

struct mlxsw_sp_rif *
FUNC_1(const struct mlxsw_sp *VAR_1,
    const struct net_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->core, VAR_0); VAR_3++)
  if (VAR_1->router->rifs[VAR_3] &&
      VAR_1->router->rifs[VAR_3]->dev == VAR_2)
   return VAR_1->router->rifs[VAR_3];

 return ((void*)0);
}
