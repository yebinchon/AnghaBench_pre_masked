
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port_type_speed_ops {int (* to_ptys_advert_link ) (struct mlxsw_sp*,int ,struct ethtool_link_ksettings const*) ;int (* to_ptys_speed ) (struct mlxsw_sp*,int ,int ) ;int (* reg_ptys_eth_pack ) (struct mlxsw_sp*,char*,int ,int,int) ;int (* reg_ptys_eth_unpack ) (struct mlxsw_sp*,char*,int*,int *,int *) ;} ;
struct TYPE_6__ {int autoneg; } ;
struct TYPE_4__ {int width; } ;
struct mlxsw_sp_port {TYPE_3__ link; int local_port; TYPE_1__ mapping; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; struct mlxsw_sp_port_type_speed_ops* port_type_speed_ops; } ;
struct TYPE_5__ {int speed; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct mlxsw_sp_port*,int) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct mlxsw_sp_port* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_7 (struct mlxsw_sp*,char*,int ,int,int) ;
 int FUNC_8 (struct mlxsw_sp*,char*,int*,int *,int *) ;
 int FUNC_9 (struct mlxsw_sp*,int ,struct ethtool_link_ksettings const*) ;
 int FUNC_10 (struct mlxsw_sp*,int ,int ) ;
 int FUNC_11 (struct mlxsw_sp*,char*,int ,int,int) ;

__attribute__((used)) static int
FUNC_12(struct net_device *VAR_4,
     const struct ethtool_link_ksettings *VAR_5)
{
 struct mlxsw_sp_port *VAR_6 = FUNC_5(VAR_4);
 struct mlxsw_sp *VAR_7 = VAR_6->mlxsw_sp;
 const struct mlxsw_sp_port_type_speed_ops *VAR_8;
 char VAR_9[VAR_2];
 u32 VAR_10, VAR_11;
 bool VAR_12;
 int VAR_13;

 VAR_8 = VAR_7->port_type_speed_ops;

 VAR_8->reg_ptys_eth_pack(VAR_7, VAR_9, VAR_6->local_port,
          0, 0);
 VAR_13 = FUNC_1(VAR_7->core, FUNC_0(VAR_3), VAR_9);
 if (VAR_13)
  return VAR_13;
 VAR_8->reg_ptys_eth_unpack(VAR_7, VAR_9, &VAR_10, ((void*)0), ((void*)0));

 VAR_12 = VAR_5->base.autoneg == VAR_0;
 VAR_11 = VAR_12 ?
  VAR_8->to_ptys_advert_link(VAR_7, VAR_6->mapping.width,
      VAR_5) :
  VAR_8->to_ptys_speed(VAR_7, VAR_6->mapping.width,
       VAR_5->base.speed);

 VAR_11 = VAR_11 & VAR_10;
 if (!VAR_11) {
  FUNC_4(VAR_4, "No supported speed requested\n");
  return -VAR_1;
 }

 VAR_8->reg_ptys_eth_pack(VAR_7, VAR_9, VAR_6->local_port,
          VAR_11, VAR_12);
 VAR_13 = FUNC_2(VAR_7->core, FUNC_0(VAR_3), VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_6->link.autoneg = VAR_12;

 if (!FUNC_6(VAR_4))
  return 0;

 FUNC_3(VAR_6, 0);
 FUNC_3(VAR_6, 1);

 return 0;
}
