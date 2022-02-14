
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlxsw_sp_port_vlan {struct mlxsw_sp_fid* fid; int vid; struct mlxsw_sp_port* mlxsw_sp_port; } ;
struct mlxsw_sp_port {int local_port; } ;
struct mlxsw_sp_fid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlxsw_sp_fid*,int ,int ,int) ;
 int FUNC_1 (struct mlxsw_sp_fid*,struct mlxsw_sp_port*,int ) ;
 int FUNC_2 (struct mlxsw_sp_fid*) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp_port_vlan *VAR_3)
{
 struct mlxsw_sp_port *VAR_4 = VAR_3->mlxsw_sp_port;
 struct mlxsw_sp_fid *VAR_5 = VAR_3->fid;
 u8 VAR_6 = VAR_4->local_port;
 u16 VAR_7 = VAR_3->vid;

 VAR_3->fid = ((void*)0);
 FUNC_1(VAR_5, VAR_4, VAR_7);
 FUNC_0(VAR_5, VAR_0, VAR_6, 0);
 FUNC_0(VAR_5, VAR_1, VAR_6, 0);
 FUNC_0(VAR_5, VAR_2, VAR_6, 0);
 FUNC_2(VAR_5);
}
