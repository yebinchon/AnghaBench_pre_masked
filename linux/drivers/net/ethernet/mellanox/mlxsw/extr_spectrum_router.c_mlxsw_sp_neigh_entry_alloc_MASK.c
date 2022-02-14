
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct neighbour {int dummy; } ;
struct TYPE_2__ {struct neighbour* n; } ;
struct mlxsw_sp_neigh_entry {int nexthop_list; int rif; TYPE_1__ key; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mlxsw_sp_neigh_entry* FUNC_1 (int,int ) ;

__attribute__((used)) static struct mlxsw_sp_neigh_entry *
FUNC_2(struct mlxsw_sp *VAR_1, struct neighbour *VAR_2,
      u16 VAR_3)
{
 struct mlxsw_sp_neigh_entry *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->key.n = VAR_2;
 VAR_4->rif = VAR_3;
 FUNC_0(&VAR_4->nexthop_list);

 return VAR_4;
}
