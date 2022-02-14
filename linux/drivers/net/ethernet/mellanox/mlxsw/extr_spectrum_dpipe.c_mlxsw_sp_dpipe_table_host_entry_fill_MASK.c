
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp_neigh_entry {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct devlink_dpipe_entry {int counter_valid; int counter; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct devlink_dpipe_entry*,struct mlxsw_sp_neigh_entry*,struct mlxsw_sp_rif*) ;
 int FUNC_2 (struct devlink_dpipe_entry*,struct mlxsw_sp_neigh_entry*,struct mlxsw_sp_rif*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_neigh_entry*,int *) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp *VAR_0,
         struct devlink_dpipe_entry *VAR_1,
         struct mlxsw_sp_neigh_entry *VAR_2,
         struct mlxsw_sp_rif *VAR_3,
         int VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 129:
  FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 default:
  FUNC_0(1);
  return;
 }

 VAR_5 = FUNC_3(VAR_0, VAR_2,
      &VAR_1->counter);
 if (!VAR_5)
  VAR_1->counter_valid = 1;
}
