
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* n; } ;
struct mlxsw_sp_neigh_entry {int connected; TYPE_3__ key; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_reg_rauht_op { ____Placeholder_mlxsw_reg_rauht_op } mlxsw_reg_rauht_op ;
struct TYPE_5__ {int flags; TYPE_1__* tbl; } ;
struct TYPE_4__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp_neigh_entry*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_neigh_entry*,int) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_neigh_entry*,int) ;

__attribute__((used)) static void
FUNC_5(struct mlxsw_sp *VAR_3,
       struct mlxsw_sp_neigh_entry *VAR_4,
       bool VAR_5)
{
 enum mlxsw_reg_rauht_op VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 if (!VAR_5 && !VAR_4->connected)
  return;
 VAR_4->connected = VAR_5;
 if (VAR_4->key.n->tbl->family == VAR_0) {
  VAR_7 = FUNC_3(VAR_3, VAR_4,
            VAR_6);
  if (VAR_7)
   return;
 } else if (VAR_4->key.n->tbl->family == VAR_1) {
  if (FUNC_1(VAR_4))
   return;
  VAR_7 = FUNC_4(VAR_3, VAR_4,
            VAR_6);
  if (VAR_7)
   return;
 } else {
  FUNC_0(1);
  return;
 }

 if (VAR_5)
  VAR_4->key.n->flags |= VAR_2;
 else
  VAR_4->key.n->flags &= ~VAR_2;
}
