
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp_port_type_speed_ops {int (* port_speed_base ) (struct mlxsw_sp*,int ,int*) ;int (* to_ptys_upper_speed ) (struct mlxsw_sp*,int) ;int (* reg_ptys_eth_pack ) (struct mlxsw_sp*,char*,int ,int,int ) ;} ;
struct TYPE_2__ {int autoneg; } ;
struct mlxsw_sp_port {TYPE_1__ link; int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; struct mlxsw_sp_port_type_speed_ops* port_type_speed_ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct mlxsw_sp*,int ,int*) ;
 int FUNC_3 (struct mlxsw_sp*,int) ;
 int FUNC_4 (struct mlxsw_sp*,char*,int ,int,int ) ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp_port *VAR_2, u8 VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_2->mlxsw_sp;
 const struct mlxsw_sp_port_type_speed_ops *VAR_5;
 char VAR_6[VAR_0];
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_5 = VAR_4->port_type_speed_ops;

 VAR_10 = VAR_5->port_speed_base(VAR_4, VAR_2->local_port,
       &VAR_9);
 if (VAR_10)
  return VAR_10;
 VAR_8 = VAR_9 * VAR_3;

 VAR_7 = VAR_5->to_ptys_upper_speed(VAR_4, VAR_8);
 VAR_5->reg_ptys_eth_pack(VAR_4, VAR_6, VAR_2->local_port,
          VAR_7, VAR_2->link.autoneg);
 return FUNC_1(VAR_4->core, FUNC_0(VAR_1), VAR_6);
}
