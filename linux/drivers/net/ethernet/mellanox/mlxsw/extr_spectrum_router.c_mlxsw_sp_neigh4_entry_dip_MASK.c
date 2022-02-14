
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct neighbour {scalar_t__ primary_key; } ;
struct TYPE_2__ {struct neighbour* n; } ;
struct mlxsw_sp_neigh_entry {TYPE_1__ key; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;

u32 FUNC_1(struct mlxsw_sp_neigh_entry *VAR_0)
{
 struct neighbour *VAR_1;

 VAR_1 = VAR_0->key.n;
 return FUNC_0(*((__be32 *) VAR_1->primary_key));
}
