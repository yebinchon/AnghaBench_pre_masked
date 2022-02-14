
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {struct mlxsw_sp_fid* fid; } ;
struct mlxsw_sp_fid {int dummy; } ;



struct mlxsw_sp_fid *FUNC_0(const struct mlxsw_sp_rif *VAR_0)
{
 return VAR_0->fid;
}
