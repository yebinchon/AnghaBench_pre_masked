
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp_nexthop {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct devlink_dpipe_entry {int counter_valid; int counter; } ;


 int FUNC_0 (struct devlink_dpipe_entry*,int ,int ,int ,unsigned char*,struct mlxsw_sp_rif*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_nexthop*,int *) ;
 unsigned char* FUNC_2 (struct mlxsw_sp_nexthop*) ;
 int FUNC_3 (struct mlxsw_sp_nexthop*,int *,int *,int *) ;
 struct mlxsw_sp_rif* FUNC_4 (struct mlxsw_sp_nexthop*) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_nexthop *VAR_1,
      struct devlink_dpipe_entry *VAR_2)
{
 struct mlxsw_sp_rif *VAR_3 = FUNC_4(VAR_1);
 unsigned char *VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 int VAR_8;

 FUNC_3(VAR_1, &VAR_6, &VAR_7, &VAR_5);
 FUNC_0(VAR_2, VAR_6, VAR_7,
           VAR_5, VAR_4, VAR_3);
 VAR_8 = FUNC_1(VAR_0, VAR_1, &VAR_2->counter);
 if (!VAR_8)
  VAR_2->counter_valid = 1;
}
