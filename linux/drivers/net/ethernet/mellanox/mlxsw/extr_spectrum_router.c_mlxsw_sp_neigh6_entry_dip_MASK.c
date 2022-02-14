
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {int primary_key; } ;
struct TYPE_2__ {struct neighbour* n; } ;
struct mlxsw_sp_neigh_entry {TYPE_1__ key; } ;
struct in6_addr {int dummy; } ;



struct in6_addr *
FUNC_0(struct mlxsw_sp_neigh_entry *VAR_0)
{
 struct neighbour *VAR_1;

 VAR_1 = VAR_0->key.n;
 return (struct in6_addr *) &VAR_1->primary_key;
}
