
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nve_mc_list_key {int dummy; } ;
struct mlxsw_sp_nve_mc_list {int dummy; } ;
struct mlxsw_sp_nve {int mc_list_ht; } ;
struct mlxsw_sp {struct mlxsw_sp_nve* nve; } ;


 int VAR_0 ;
 struct mlxsw_sp_nve_mc_list* FUNC_0 (int *,struct mlxsw_sp_nve_mc_list_key const*,int ) ;

__attribute__((used)) static struct mlxsw_sp_nve_mc_list *
FUNC_1(struct mlxsw_sp *VAR_1,
     const struct mlxsw_sp_nve_mc_list_key *VAR_2)
{
 struct mlxsw_sp_nve *VAR_3 = VAR_1->nve;

 return FUNC_0(&VAR_3->mc_list_ht, VAR_2,
          VAR_0);
}
