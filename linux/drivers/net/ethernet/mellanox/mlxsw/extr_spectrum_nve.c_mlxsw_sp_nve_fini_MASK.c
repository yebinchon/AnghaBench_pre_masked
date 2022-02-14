
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {TYPE_1__* nve; } ;
struct TYPE_2__ {int mc_list_ht; int num_nve_tunnels; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlxsw_sp *VAR_0)
{
 FUNC_0(VAR_0->nve->num_nve_tunnels);
 FUNC_2(&VAR_0->nve->mc_list_ht);
 FUNC_1(VAR_0->nve);
 VAR_0->nve = ((void*)0);
}
