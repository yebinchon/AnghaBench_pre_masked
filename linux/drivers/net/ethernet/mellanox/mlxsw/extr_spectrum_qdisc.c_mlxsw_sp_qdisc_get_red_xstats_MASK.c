
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct red_stats {int prob_drop; int prob_mark; int pdrop; } ;
struct TYPE_3__ {struct red_stats red; } ;
struct mlxsw_sp_qdisc {size_t tclass_num; TYPE_1__ xstats_base; } ;
struct mlxsw_sp_port_xstats {int* wred_drop; int ecn; int* tail_drop; } ;
struct TYPE_4__ {struct mlxsw_sp_port_xstats xstats; } ;
struct mlxsw_sp_port {TYPE_2__ periodic_hw_stats; } ;



__attribute__((used)) static int
FUNC_0(struct mlxsw_sp_port *VAR_0,
         struct mlxsw_sp_qdisc *VAR_1,
         void *VAR_2)
{
 struct red_stats *VAR_3 = &VAR_1->xstats_base.red;
 u8 VAR_4 = VAR_1->tclass_num;
 struct mlxsw_sp_port_xstats *VAR_5;
 struct red_stats *VAR_6 = VAR_2;
 int VAR_7, VAR_8, VAR_9;

 VAR_5 = &VAR_0->periodic_hw_stats.xstats;

 VAR_7 = VAR_5->wred_drop[VAR_4] - VAR_3->prob_drop;
 VAR_8 = VAR_5->ecn - VAR_3->prob_mark;
 VAR_9 = VAR_5->tail_drop[VAR_4] - VAR_3->pdrop;

 VAR_6->pdrop += VAR_9;
 VAR_6->prob_drop += VAR_7;
 VAR_6->prob_mark += VAR_8;

 VAR_3->pdrop += VAR_9;
 VAR_3->prob_drop += VAR_7;
 VAR_3->prob_mark += VAR_8;
 return 0;
}
