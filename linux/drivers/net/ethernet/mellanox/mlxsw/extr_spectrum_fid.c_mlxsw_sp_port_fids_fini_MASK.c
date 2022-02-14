
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_port {size_t local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {TYPE_1__* fid_core; } ;
struct TYPE_2__ {scalar_t__* port_fid_mappings; } ;



void FUNC_0(struct mlxsw_sp_port *VAR_0)
{
 struct mlxsw_sp *VAR_1 = VAR_0->mlxsw_sp;

 VAR_1->fid_core->port_fid_mappings[VAR_0->local_port] = 0;
}
