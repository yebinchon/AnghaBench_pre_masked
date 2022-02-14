
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp {TYPE_2__* router; } ;
struct TYPE_3__ {int dw; } ;
struct TYPE_4__ {int neigh_ht; int nexthop_probe_dw; TYPE_1__ neighs_update; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_0)
{
 FUNC_0(&VAR_0->router->neighs_update.dw);
 FUNC_0(&VAR_0->router->nexthop_probe_dw);
 FUNC_1(&VAR_0->router->neigh_ht);
}
