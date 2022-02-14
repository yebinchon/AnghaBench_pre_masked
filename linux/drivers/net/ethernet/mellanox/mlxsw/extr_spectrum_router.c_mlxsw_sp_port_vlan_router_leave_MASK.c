
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp_port_vlan {struct mlxsw_sp_fid* fid; int vid; struct mlxsw_sp_port* mlxsw_sp_port; } ;
struct mlxsw_sp_port {int dummy; } ;
struct mlxsw_sp_fid {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_fid*,struct mlxsw_sp_port*,int ) ;
 int FUNC_2 (struct mlxsw_sp_fid*) ;
 struct mlxsw_sp_rif* FUNC_3 (struct mlxsw_sp_fid*) ;
 scalar_t__ FUNC_4 (struct mlxsw_sp_fid*) ;
 int FUNC_5 (struct mlxsw_sp_port*,int ,int) ;
 int FUNC_6 (struct mlxsw_sp_port*,int ,int ) ;
 int FUNC_7 (struct mlxsw_sp_rif*) ;

void
FUNC_8(struct mlxsw_sp_port_vlan *VAR_2)
{
 struct mlxsw_sp_port *VAR_3 = VAR_2->mlxsw_sp_port;
 struct mlxsw_sp_fid *VAR_4 = VAR_2->fid;
 struct mlxsw_sp_rif *VAR_5 = FUNC_3(VAR_4);
 u16 VAR_6 = VAR_2->vid;

 if (FUNC_0(FUNC_4(VAR_4) != VAR_1))
  return;

 VAR_2->fid = ((void*)0);
 FUNC_6(VAR_3, VAR_6, VAR_0);
 FUNC_5(VAR_3, VAR_6, 1);
 FUNC_1(VAR_4, VAR_3, VAR_6);
 FUNC_2(VAR_4);
 FUNC_7(VAR_5);
}
