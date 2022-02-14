
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct mlxsw_sx_port {int local_port; struct mlxsw_sx* mlxsw_sx; } ;
struct mlxsw_sx {int core; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_2__ {int (* getter ) (char*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 TYPE_1__* VAR_3 ;
 struct mlxsw_sx_port* FUNC_3 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5,
        struct ethtool_stats *VAR_6, u64 *VAR_7)
{
 struct mlxsw_sx_port *VAR_8 = FUNC_3(VAR_5);
 struct mlxsw_sx *VAR_9 = VAR_8->mlxsw_sx;
 char VAR_10[VAR_1];
 int VAR_11;
 int VAR_12;

 FUNC_1(VAR_10, VAR_8->local_port,
        VAR_0, 0);
 VAR_12 = FUNC_2(VAR_9->core, FUNC_0(VAR_4), VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  VAR_7[VAR_11] = !VAR_12 ? VAR_3[VAR_11].getter(VAR_10) : 0;
}
