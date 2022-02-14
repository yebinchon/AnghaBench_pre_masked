
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_nexthop {TYPE_1__* neigh_entry; int offloaded; } ;
struct TYPE_2__ {unsigned char* ha; } ;



unsigned char *FUNC_0(struct mlxsw_sp_nexthop *VAR_0)
{
 if (!VAR_0->offloaded)
  return ((void*)0);
 return VAR_0->neigh_entry->ha;
}
