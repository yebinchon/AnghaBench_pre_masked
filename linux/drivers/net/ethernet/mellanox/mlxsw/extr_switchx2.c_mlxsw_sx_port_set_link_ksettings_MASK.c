
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mlxsw_sx_port {int local_port; struct mlxsw_sx* mlxsw_sx; } ;
struct mlxsw_sx {int core; } ;
struct TYPE_4__ {int speed; scalar_t__ autoneg; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (char*,int*,int*,int *) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (struct mlxsw_sx_port*,int) ;
 int FUNC_7 (struct mlxsw_sx_port*,int*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct net_device*,char*) ;
 struct mlxsw_sx_port* FUNC_11 (struct net_device*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_12(struct net_device *VAR_4,
     const struct ethtool_link_ksettings *VAR_5)
{
 struct mlxsw_sx_port *VAR_6 = FUNC_11(VAR_4);
 struct mlxsw_sx *VAR_7 = VAR_6->mlxsw_sx;
 char VAR_8[VAR_2];
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 bool VAR_14;
 int VAR_15;

 VAR_9 = VAR_5->base.speed;

 FUNC_1(&VAR_13,
      VAR_5->link_modes.advertising);

 VAR_10 = VAR_5->base.autoneg == VAR_0 ?
  FUNC_8(VAR_13) :
  FUNC_9(VAR_9);

 FUNC_2(VAR_8, VAR_6->local_port, 0, 0);
 VAR_15 = FUNC_4(VAR_7->core, FUNC_0(VAR_3), VAR_8);
 if (VAR_15) {
  FUNC_10(VAR_4, "Failed to get proto");
  return VAR_15;
 }
 FUNC_3(VAR_8, &VAR_11, &VAR_12,
      ((void*)0));

 VAR_10 = VAR_10 & VAR_11;
 if (!VAR_10) {
  FUNC_10(VAR_4, "Not supported proto admin requested");
  return -VAR_1;
 }
 if (VAR_10 == VAR_12)
  return 0;

 FUNC_2(VAR_8, VAR_6->local_port,
    VAR_10, 1);
 VAR_15 = FUNC_5(VAR_7->core, FUNC_0(VAR_3), VAR_8);
 if (VAR_15) {
  FUNC_10(VAR_4, "Failed to set proto admin");
  return VAR_15;
 }

 VAR_15 = FUNC_7(VAR_6, &VAR_14);
 if (VAR_15) {
  FUNC_10(VAR_4, "Failed to get oper status");
  return VAR_15;
 }
 if (!VAR_14)
  return 0;

 VAR_15 = FUNC_6(VAR_6, 0);
 if (VAR_15) {
  FUNC_10(VAR_4, "Failed to set admin status");
  return VAR_15;
 }

 VAR_15 = FUNC_6(VAR_6, 1);
 if (VAR_15) {
  FUNC_10(VAR_4, "Failed to set admin status");
  return VAR_15;
 }

 return 0;
}
