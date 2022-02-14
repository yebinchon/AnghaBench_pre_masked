
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {int shaper_dw; } ;
struct TYPE_3__ {int update_dw; } ;
struct mlxsw_sp_port {int dev; int vlans_list; int pcpu_stats; int sample; TYPE_2__ ptp; TYPE_1__ periodic_hw_stats; } ;
struct mlxsw_sp {int core; struct mlxsw_sp_port** ports; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,size_t,struct mlxsw_sp*) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (struct mlxsw_sp_port*) ;
 int FUNC_9 (struct mlxsw_sp_port*) ;
 int FUNC_10 (struct mlxsw_sp_port*) ;
 int FUNC_11 (struct mlxsw_sp_port*) ;
 int FUNC_12 (struct mlxsw_sp_port*) ;
 int FUNC_13 (struct mlxsw_sp_port*,int ) ;
 int FUNC_14 (struct mlxsw_sp_port*,int) ;
 int FUNC_15 (struct mlxsw_sp_port*,int) ;
 int FUNC_16 (struct mlxsw_sp_port*) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct mlxsw_sp *VAR_1, u8 VAR_2)
{
 struct mlxsw_sp_port *VAR_3 = VAR_1->ports[VAR_2];

 FUNC_1(&VAR_3->periodic_hw_stats.update_dw);
 FUNC_1(&VAR_3->ptp.shaper_dw);
 FUNC_12(VAR_3);
 FUNC_6(VAR_1->core, VAR_2, VAR_1);
 FUNC_17(VAR_3->dev);
 VAR_1->ports[VAR_2] = ((void*)0);
 FUNC_15(VAR_3, 1);
 FUNC_11(VAR_3);
 FUNC_16(VAR_3);
 FUNC_9(VAR_3);
 FUNC_8(VAR_3);
 FUNC_14(VAR_3, 0);
 FUNC_13(VAR_3, VAR_0);
 FUNC_10(VAR_3);
 FUNC_4(VAR_3->sample);
 FUNC_3(VAR_3->pcpu_stats);
 FUNC_0(!FUNC_5(&VAR_3->vlans_list));
 FUNC_2(VAR_3->dev);
 FUNC_7(VAR_1->core, VAR_2);
}
