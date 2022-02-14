
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_port {size_t local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {struct mlxsw_sp_port** ports; TYPE_1__* bus_info; int base_mac; int core; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlxsw_sp_port*) ;
 struct mlxsw_sp_port* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct mlxsw_sp_port*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_3)
{
 struct mlxsw_sp_port *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->mlxsw_sp = VAR_3;
 VAR_4->local_port = VAR_2;

 VAR_5 = FUNC_3(VAR_3->core,
           VAR_4,
           VAR_3->base_mac,
           sizeof(VAR_3->base_mac));
 if (VAR_5) {
  FUNC_0(VAR_3->bus_info->dev, "Failed to initialize core CPU port\n");
  goto err_core_cpu_port_init;
 }

 VAR_3->ports[VAR_2] = VAR_4;
 return 0;

err_core_cpu_port_init:
 FUNC_1(VAR_4);
 return VAR_5;
}
