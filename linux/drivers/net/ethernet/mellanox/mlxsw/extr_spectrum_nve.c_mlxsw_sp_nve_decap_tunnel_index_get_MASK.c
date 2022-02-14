
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp {TYPE_1__* nve; } ;
struct TYPE_2__ {scalar_t__ num_nve_tunnels; int tunnel_index; } ;


 int FUNC_0 (int) ;

u32 FUNC_1(const struct mlxsw_sp *VAR_0)
{
 FUNC_0(VAR_0->nve->num_nve_tunnels == 0);

 return VAR_0->nve->tunnel_index;
}
