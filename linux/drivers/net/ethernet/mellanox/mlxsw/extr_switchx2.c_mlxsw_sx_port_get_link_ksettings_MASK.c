
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
struct TYPE_4__ {int lp_advertising; int advertising; int supported; } ;
struct TYPE_3__ {int port; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ,int ,int) ;
 int FUNC_3 (char*,int*,int*,int*) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,struct ethtool_link_ksettings*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct net_device*,char*) ;
 struct mlxsw_sx_port* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_13(struct net_device *VAR_4,
     struct ethtool_link_ksettings *VAR_5)
{
 struct mlxsw_sx_port *VAR_6 = FUNC_11(VAR_4);
 struct mlxsw_sx *VAR_7 = VAR_6->mlxsw_sx;
 char VAR_8[VAR_0];
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 int VAR_15;

 FUNC_2(VAR_8, VAR_6->local_port, 0, 0);
 VAR_15 = FUNC_4(VAR_7->core, FUNC_0(VAR_3), VAR_8);
 if (VAR_15) {
  FUNC_10(VAR_4, "Failed to get proto");
  return VAR_15;
 }
 FUNC_3(VAR_8, &VAR_9,
      &VAR_10, &VAR_11);

 VAR_12 = FUNC_8(VAR_9) |
    FUNC_7(VAR_9) |
    VAR_2 | VAR_1;
 VAR_13 = FUNC_5(VAR_10);
 FUNC_6(FUNC_12(VAR_4),
     VAR_11, VAR_5);

 VAR_11 = VAR_11 ? VAR_11 : VAR_9;
 VAR_5->base.port = FUNC_9(VAR_11);
 VAR_14 = FUNC_5(VAR_11);

 FUNC_1(VAR_5->link_modes.supported,
      VAR_12);
 FUNC_1(VAR_5->link_modes.advertising,
      VAR_13);
 FUNC_1(VAR_5->link_modes.lp_advertising,
      VAR_14);

 return 0;
}
