
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


 scalar_t__ FUNC_0 (struct mlxsw_sp_nve_mc_list*) ;
 int FUNC_1 (struct mlxsw_sp_nve_mc_list*) ;
 int FUNC_2 (struct mlxsw_sp_fid*) ;
 int FUNC_3 (struct mlxsw_sp_fid*,struct mlxsw_sp_nve_mc_list*) ;
 struct mlxsw_sp_nve_mc_list* FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_nve_mc_list_key*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_nve_mc_list*,int,union mlxsw_sp_l3addr*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_nve_mc_list*,int,union mlxsw_sp_l3addr*) ;
 int FUNC_7 (struct mlxsw_sp*,struct mlxsw_sp_nve_mc_list*) ;

int FUNC_8(struct mlxsw_sp *VAR_0,
         struct mlxsw_sp_fid *VAR_1,
         enum mlxsw_sp_l3proto VAR_2,
         union mlxsw_sp_l3addr *VAR_3)
{
 struct mlxsw_sp_nve_mc_list_key VAR_4 = { 0 };
 struct mlxsw_sp_nve_mc_list *VAR_5;
 int VAR_6;

 VAR_4.fid_index = FUNC_2(VAR_1);
 VAR_5 = FUNC_4(VAR_0, &VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_5(VAR_0, VAR_5, VAR_2, VAR_3);
 if (VAR_6)
  goto err_add_ip;

 VAR_6 = FUNC_3(VAR_1, VAR_5);
 if (VAR_6)
  goto err_fid_flood_index_set;

 return 0;

err_fid_flood_index_set:
 FUNC_6(VAR_0, VAR_5, VAR_2, VAR_3);
err_add_ip:
 FUNC_7(VAR_0, VAR_5);
 return VAR_6;
}
