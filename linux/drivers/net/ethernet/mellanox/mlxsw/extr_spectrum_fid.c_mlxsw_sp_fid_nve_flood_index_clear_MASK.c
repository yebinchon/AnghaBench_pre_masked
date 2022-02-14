
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fid_ops {int (* nve_flood_index_clear ) (struct mlxsw_sp_fid*) ;} ;
struct mlxsw_sp_fid_family {struct mlxsw_sp_fid_ops* ops; } ;
struct mlxsw_sp_fid {int nve_flood_index_valid; struct mlxsw_sp_fid_family* fid_family; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_fid*) ;

void FUNC_2(struct mlxsw_sp_fid *VAR_0)
{
 struct mlxsw_sp_fid_family *VAR_1 = VAR_0->fid_family;
 const struct mlxsw_sp_fid_ops *VAR_2 = VAR_1->ops;

 if (FUNC_0(!VAR_2->nve_flood_index_clear || !VAR_0->nve_flood_index_valid))
  return;

 VAR_0->nve_flood_index_valid = 0;
 VAR_2->nve_flood_index_clear(VAR_0);
}
