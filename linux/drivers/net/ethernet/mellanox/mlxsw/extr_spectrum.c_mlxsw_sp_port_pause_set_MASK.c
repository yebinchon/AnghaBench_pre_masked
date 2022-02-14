
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_port {TYPE_1__* mlxsw_sp; int local_port; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; } ;
struct TYPE_2__ {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp_port *VAR_2,
       struct ethtool_pauseparam *VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_1(VAR_4, VAR_2->local_port);
 FUNC_2(VAR_4, VAR_3->rx_pause);
 FUNC_3(VAR_4, VAR_3->tx_pause);

 return FUNC_4(VAR_2->mlxsw_sp->core, FUNC_0(VAR_1),
          VAR_4);
}
