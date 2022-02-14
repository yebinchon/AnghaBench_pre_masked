
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fid {int nve_type; int vni_valid; } ;
typedef enum mlxsw_sp_nve_type { ____Placeholder_mlxsw_sp_nve_type } mlxsw_sp_nve_type ;


 int VAR_0 ;

int FUNC_0(const struct mlxsw_sp_fid *VAR_1,
     enum mlxsw_sp_nve_type *VAR_2)
{
 if (!VAR_1->vni_valid)
  return -VAR_0;

 *VAR_2 = VAR_1->nve_type;

 return 0;
}
