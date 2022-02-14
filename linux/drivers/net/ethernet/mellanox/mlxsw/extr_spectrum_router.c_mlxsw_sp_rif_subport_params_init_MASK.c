
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif_params {int system_port; int lag_id; int lag; int vid; } ;
struct mlxsw_sp_port_vlan {int vid; struct mlxsw_sp_port* mlxsw_sp_port; } ;
struct mlxsw_sp_port {int local_port; int lag_id; int lagged; } ;



__attribute__((used)) static void
FUNC_0(struct mlxsw_sp_rif_params *VAR_0,
     struct mlxsw_sp_port_vlan *VAR_1)
{
 struct mlxsw_sp_port *VAR_2 = VAR_1->mlxsw_sp_port;

 VAR_0->vid = VAR_1->vid;
 VAR_0->lag = VAR_2->lagged;
 if (VAR_0->lag)
  VAR_0->lag_id = VAR_2->lag_id;
 else
  VAR_0->system_port = VAR_2->local_port;
}
