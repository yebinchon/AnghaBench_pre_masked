
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {int primary_key; } ;
struct TYPE_2__ {struct neighbour* n; } ;
struct mlxsw_sp_neigh_entry {TYPE_1__ key; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*) ;

bool FUNC_1(struct mlxsw_sp_neigh_entry *VAR_1)
{
 struct neighbour *VAR_2 = VAR_1->key.n;





 if (FUNC_0((struct in6_addr *) &VAR_2->primary_key) &
     VAR_0)
  return 1;
 return 0;
}
