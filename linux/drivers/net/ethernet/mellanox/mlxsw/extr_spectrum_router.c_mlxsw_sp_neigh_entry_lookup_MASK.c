
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {int dummy; } ;
struct mlxsw_sp_neigh_key {struct neighbour* n; } ;
struct mlxsw_sp_neigh_entry {int dummy; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {int neigh_ht; } ;


 int VAR_0 ;
 struct mlxsw_sp_neigh_entry* FUNC_0 (int *,struct mlxsw_sp_neigh_key*,int ) ;

__attribute__((used)) static struct mlxsw_sp_neigh_entry *
FUNC_1(struct mlxsw_sp *VAR_1, struct neighbour *VAR_2)
{
 struct mlxsw_sp_neigh_key VAR_3;

 VAR_3.n = VAR_2;
 return FUNC_0(&VAR_1->router->neigh_ht,
          &VAR_3, VAR_0);
}
