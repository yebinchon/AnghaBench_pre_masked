
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_fid_ops {int (* nve_flood_index_set ) (struct mlxsw_sp_fid*,int ) ;} ;
struct mlxsw_sp_fid_family {struct mlxsw_sp_fid_ops* ops; } ;
struct mlxsw_sp_fid {int nve_flood_index_valid; int nve_flood_index; struct mlxsw_sp_fid_family* fid_family; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_fid*,int ) ;

int FUNC_2(struct mlxsw_sp_fid *VAR_1,
         u32 VAR_2)
{
 struct mlxsw_sp_fid_family *VAR_3 = VAR_1->fid_family;
 const struct mlxsw_sp_fid_ops *VAR_4 = VAR_3->ops;
 int VAR_5;

 if (FUNC_0(!VAR_4->nve_flood_index_set || VAR_1->nve_flood_index_valid))
  return -VAR_0;

 VAR_5 = VAR_4->nve_flood_index_set(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_1->nve_flood_index = VAR_2;
 VAR_1->nve_flood_index_valid = 1;

 return 0;
}
