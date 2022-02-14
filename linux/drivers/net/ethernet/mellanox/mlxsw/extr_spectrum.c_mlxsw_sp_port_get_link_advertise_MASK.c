
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp_port_type_speed_ops {int (* from_ptys_link ) (struct mlxsw_sp*,int ,int ,int ) ;} ;
struct mlxsw_sp {struct mlxsw_sp_port_type_speed_ops* port_type_speed_ops; } ;
struct TYPE_2__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp *VAR_2,
     u32 VAR_3, bool VAR_4, u8 VAR_5,
     struct ethtool_link_ksettings *VAR_6)
{
 const struct mlxsw_sp_port_type_speed_ops *VAR_7;

 VAR_7 = VAR_2->port_type_speed_ops;

 if (!VAR_4)
  return;

 FUNC_0(VAR_6, VAR_1, VAR_0);
 VAR_7->from_ptys_link(VAR_2, VAR_3, VAR_5,
       VAR_6->link_modes.advertising);
}
