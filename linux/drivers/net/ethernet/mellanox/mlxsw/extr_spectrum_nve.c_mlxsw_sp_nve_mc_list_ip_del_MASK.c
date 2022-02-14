
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
struct mlxsw_sp_nve_mc_record {int dummy; } ;
struct mlxsw_sp_nve_mc_list {int dummy; } ;
struct mlxsw_sp_nve_mc_entry {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;


 int FUNC_0 (struct mlxsw_sp_nve_mc_record*,struct mlxsw_sp_nve_mc_entry*) ;
 struct mlxsw_sp_nve_mc_record* FUNC_1 (struct mlxsw_sp_nve_mc_list*,int,union mlxsw_sp_l3addr*,struct mlxsw_sp_nve_mc_entry**) ;
 int FUNC_2 (struct mlxsw_sp_nve_mc_record*) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_nve_mc_list *VAR_1,
     enum mlxsw_sp_l3proto VAR_2,
     union mlxsw_sp_l3addr *VAR_3)
{
 struct mlxsw_sp_nve_mc_record *VAR_4;
 struct mlxsw_sp_nve_mc_entry *VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3,
      &VAR_5);
 if (!VAR_4)
  return;

 FUNC_0(VAR_4, VAR_5);
 FUNC_2(VAR_4);
}
