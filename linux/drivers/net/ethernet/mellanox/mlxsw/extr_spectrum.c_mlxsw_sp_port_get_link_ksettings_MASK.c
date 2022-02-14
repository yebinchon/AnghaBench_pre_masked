
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port_type_speed_ops {int (* from_ptys_speed_duplex ) (struct mlxsw_sp*,int ,int ,struct ethtool_link_ksettings*) ;int (* reg_ptys_eth_unpack ) (struct mlxsw_sp*,char*,int *,int *,int *) ;int (* reg_ptys_eth_pack ) (struct mlxsw_sp*,char*,int ,int ,int) ;} ;
struct TYPE_5__ {int width; } ;
struct TYPE_4__ {int autoneg; } ;
struct mlxsw_sp_port {TYPE_2__ mapping; int local_port; TYPE_1__ link; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; struct mlxsw_sp_port_type_speed_ops* port_type_speed_ops; } ;
struct TYPE_6__ {int port; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_3__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlxsw_sp*,int ,int,int ,struct ethtool_link_ksettings*) ;
 int FUNC_5 (struct mlxsw_sp*,int ,int ,struct ethtool_link_ksettings*) ;
 struct mlxsw_sp_port* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_8 (struct mlxsw_sp*,char*,int ,int ,int) ;
 int FUNC_9 (struct mlxsw_sp*,char*,int *,int *,int *) ;
 int FUNC_10 (struct mlxsw_sp*,int ,int ,struct ethtool_link_ksettings*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4,
         struct ethtool_link_ksettings *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 struct mlxsw_sp_port *VAR_9 = FUNC_6(VAR_4);
 struct mlxsw_sp *VAR_10 = VAR_9->mlxsw_sp;
 const struct mlxsw_sp_port_type_speed_ops *VAR_11;
 char VAR_12[VAR_2];
 u8 VAR_13;
 bool VAR_14;
 int VAR_15;

 VAR_11 = VAR_10->port_type_speed_ops;

 VAR_14 = VAR_9->link.autoneg;
 VAR_11->reg_ptys_eth_pack(VAR_10, VAR_12, VAR_9->local_port,
          0, 0);
 VAR_15 = FUNC_2(VAR_10->core, FUNC_0(VAR_3), VAR_12);
 if (VAR_15)
  return VAR_15;
 VAR_11->reg_ptys_eth_unpack(VAR_10, VAR_12, &VAR_6,
     &VAR_7, &VAR_8);

 FUNC_5(VAR_10, VAR_6,
      VAR_9->mapping.width, VAR_5);

 FUNC_4(VAR_10, VAR_7, VAR_14,
      VAR_9->mapping.width, VAR_5);

 VAR_5->base.autoneg = VAR_14 ? VAR_1 : VAR_0;
 VAR_13 = FUNC_1(VAR_12);
 VAR_5->base.port = FUNC_3(VAR_13);
 VAR_11->from_ptys_speed_duplex(VAR_10, FUNC_7(VAR_4),
        VAR_8, VAR_5);

 return 0;
}
