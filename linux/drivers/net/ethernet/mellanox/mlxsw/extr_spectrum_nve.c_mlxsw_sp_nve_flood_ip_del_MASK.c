
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
struct mlxsw_sp_nve_mc_list_key {int fid_index; int member_0; } ;
struct mlxsw_sp_nve_mc_list {int dummy; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;


 int FUNC_0 (struct mlxsw_sp_fid*) ;
 int FUNC_1 (struct mlxsw_sp_fid*,struct mlxsw_sp_nve_mc_list*) ;
 struct mlxsw_sp_nve_mc_list* FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_nve_mc_list_key*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_nve_mc_list*,int,union mlxsw_sp_l3addr*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_nve_mc_list*) ;

void FUNC_5(struct mlxsw_sp *VAR_0,
          struct mlxsw_sp_fid *VAR_1,
          enum mlxsw_sp_l3proto VAR_2,
          union mlxsw_sp_l3addr *VAR_3)
{
 struct mlxsw_sp_nve_mc_list_key VAR_4 = { 0 };
 struct mlxsw_sp_nve_mc_list *VAR_5;

 VAR_4.fid_index = FUNC_0(VAR_1);
 VAR_5 = FUNC_2(VAR_0, &VAR_4);
 if (!VAR_5)
  return;

 FUNC_1(VAR_1, VAR_5);
 FUNC_3(VAR_0, VAR_5, VAR_2, VAR_3);
 FUNC_4(VAR_0, VAR_5);
}
