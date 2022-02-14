
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_fid_core {TYPE_1__** fid_family_arr; } ;
struct mlxsw_sp {struct mlxsw_sp_fid_core* fid_core; } ;
typedef enum mlxsw_sp_rif_type { ____Placeholder_mlxsw_sp_rif_type } mlxsw_sp_rif_type ;
typedef enum mlxsw_sp_fid_type { ____Placeholder_mlxsw_sp_fid_type } mlxsw_sp_fid_type ;
struct TYPE_2__ {int rif_type; } ;



enum mlxsw_sp_rif_type
FUNC_0(const struct mlxsw_sp *VAR_0,
      enum mlxsw_sp_fid_type VAR_1)
{
 struct mlxsw_sp_fid_core *VAR_2 = VAR_0->fid_core;

 return VAR_2->fid_family_arr[VAR_1]->rif_type;
}
