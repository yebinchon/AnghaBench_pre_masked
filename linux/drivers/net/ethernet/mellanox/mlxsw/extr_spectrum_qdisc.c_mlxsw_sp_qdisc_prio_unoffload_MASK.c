
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct tc_prio_qopt_offload_params {TYPE_2__* qstats; } ;
struct TYPE_3__ {int backlog; } ;
struct mlxsw_sp_qdisc {TYPE_1__ stats_base; } ;
struct mlxsw_sp_port {int mlxsw_sp; } ;
struct TYPE_4__ {int backlog; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_port *VAR_0,
         struct mlxsw_sp_qdisc *VAR_1,
         void *VAR_2)
{
 struct tc_prio_qopt_offload_params *VAR_3 = VAR_2;
 u64 VAR_4;

 VAR_4 = FUNC_0(VAR_0->mlxsw_sp,
           VAR_1->stats_base.backlog);
 VAR_3->qstats->backlog -= VAR_4;
}
