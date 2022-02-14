
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_pause; int rx_pause; } ;
struct mlxsw_sp_port {TYPE_2__* mlxsw_sp; TYPE_1__ link; int local_port; } ;
struct ieee_pfc {int pfc_en; } ;
struct TYPE_4__ {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp_port *VAR_2,
     struct ieee_pfc *VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_1(VAR_4, VAR_2->local_port);
 FUNC_2(VAR_4, VAR_2->link.rx_pause);
 FUNC_3(VAR_4, VAR_2->link.tx_pause);
 FUNC_4(VAR_4, VAR_3->pfc_en);

 return FUNC_5(VAR_2->mlxsw_sp->core, FUNC_0(VAR_1),
          VAR_4);
}
