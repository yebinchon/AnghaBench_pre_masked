
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp_port_type_speed_ops {int (* from_ptys_link ) (struct mlxsw_sp*,int ,int ,int ) ;int (* from_ptys_supported_port ) (struct mlxsw_sp*,int ,struct ethtool_link_ksettings*) ;} ;
struct mlxsw_sp {struct mlxsw_sp_port_type_speed_ops* port_type_speed_ops; } ;
struct TYPE_2__ {int supported; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_1 (struct mlxsw_sp*,int ,struct ethtool_link_ksettings*) ;
 int FUNC_2 (struct mlxsw_sp*,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp *VAR_4, u32 VAR_5,
     u8 VAR_6, struct ethtool_link_ksettings *VAR_7)
{
 const struct mlxsw_sp_port_type_speed_ops *VAR_8;

 VAR_8 = VAR_4->port_type_speed_ops;

 FUNC_0(VAR_7, VAR_3, VAR_0);
 FUNC_0(VAR_7, VAR_3, VAR_1);
 FUNC_0(VAR_7, VAR_3, VAR_2);

 VAR_8->from_ptys_supported_port(VAR_4, VAR_5, VAR_7);
 VAR_8->from_ptys_link(VAR_4, VAR_5, VAR_6,
       VAR_7->link_modes.supported);
}
