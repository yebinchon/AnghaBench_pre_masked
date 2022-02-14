
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp_fid {struct mlxsw_sp_rif* rif; } ;



void FUNC_0(struct mlxsw_sp_fid *VAR_0, struct mlxsw_sp_rif *VAR_1)
{
 VAR_0->rif = VAR_1;
}
