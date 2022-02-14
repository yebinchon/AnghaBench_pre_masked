
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nve_mc_list_key {int dummy; } ;
struct mlxsw_sp_nve_mc_list {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 struct mlxsw_sp_nve_mc_list* FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_nve_mc_list_key const*) ;
 struct mlxsw_sp_nve_mc_list* FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_nve_mc_list_key const*) ;

__attribute__((used)) static struct mlxsw_sp_nve_mc_list *
FUNC_2(struct mlxsw_sp *VAR_0,
    const struct mlxsw_sp_nve_mc_list_key *VAR_1)
{
 struct mlxsw_sp_nve_mc_list *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, VAR_1);
}
