
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* n; } ;
struct mlxsw_sp_neigh_entry {TYPE_3__ key; } ;
struct TYPE_5__ {TYPE_1__* tbl; } ;
struct TYPE_4__ {int family; } ;



int FUNC_0(struct mlxsw_sp_neigh_entry *VAR_0)
{
 return VAR_0->key.n->tbl->family;
}
