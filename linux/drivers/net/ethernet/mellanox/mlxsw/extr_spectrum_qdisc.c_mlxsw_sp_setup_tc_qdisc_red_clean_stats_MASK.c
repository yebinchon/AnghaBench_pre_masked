
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct red_stats {scalar_t__ pdrop; scalar_t__ prob_drop; scalar_t__ prob_mark; } ;
struct mlxsw_sp_qdisc_stats {scalar_t__ backlog; scalar_t__ drops; scalar_t__ overlimits; int tx_bytes; int tx_packets; } ;
struct TYPE_4__ {struct red_stats red; } ;
struct mlxsw_sp_qdisc {size_t tclass_num; int prio_bitmap; TYPE_2__ xstats_base; struct mlxsw_sp_qdisc_stats stats_base; } ;
struct mlxsw_sp_port_xstats {scalar_t__* tail_drop; scalar_t__* wred_drop; scalar_t__ ecn; } ;
struct TYPE_3__ {struct mlxsw_sp_port_xstats xstats; } ;
struct mlxsw_sp_port {TYPE_1__ periodic_hw_stats; } ;


 int FUNC_0 (struct mlxsw_sp_port_xstats*,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_port *VAR_0,
     struct mlxsw_sp_qdisc *VAR_1)
{
 u8 VAR_2 = VAR_1->tclass_num;
 struct mlxsw_sp_qdisc_stats *VAR_3;
 struct mlxsw_sp_port_xstats *VAR_4;
 struct red_stats *VAR_5;

 VAR_4 = &VAR_0->periodic_hw_stats.xstats;
 VAR_3 = &VAR_1->stats_base;
 VAR_5 = &VAR_1->xstats_base.red;

 FUNC_0(VAR_4,
            VAR_1->prio_bitmap,
            &VAR_3->tx_packets,
            &VAR_3->tx_bytes);
 VAR_5->prob_mark = VAR_4->ecn;
 VAR_5->prob_drop = VAR_4->wred_drop[VAR_2];
 VAR_5->pdrop = VAR_4->tail_drop[VAR_2];

 VAR_3->overlimits = VAR_5->prob_drop + VAR_5->prob_mark;
 VAR_3->drops = VAR_5->prob_drop + VAR_5->pdrop;

 VAR_3->backlog = 0;
}
