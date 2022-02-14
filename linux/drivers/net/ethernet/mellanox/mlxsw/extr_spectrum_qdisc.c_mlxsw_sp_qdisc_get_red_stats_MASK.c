
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u64 ;
struct tc_qopt_offload_stats {TYPE_2__* qstats; int bstats; } ;
struct mlxsw_sp_qdisc_stats {scalar_t__ tx_packets; scalar_t__ tx_bytes; scalar_t__ overlimits; scalar_t__ drops; scalar_t__ backlog; } ;
struct mlxsw_sp_qdisc {size_t tclass_num; int prio_bitmap; struct mlxsw_sp_qdisc_stats stats_base; } ;
struct mlxsw_sp_port_xstats {scalar_t__* backlog; scalar_t__* tail_drop; scalar_t__* wred_drop; scalar_t__ ecn; } ;
struct TYPE_3__ {struct mlxsw_sp_port_xstats xstats; } ;
struct mlxsw_sp_port {int mlxsw_sp; TYPE_1__ periodic_hw_stats; } ;
struct TYPE_4__ {int backlog; int drops; int overlimits; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct mlxsw_sp_port_xstats*,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp_port *VAR_0,
        struct mlxsw_sp_qdisc *VAR_1,
        struct tc_qopt_offload_stats *VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 u8 VAR_8 = VAR_1->tclass_num;
 struct mlxsw_sp_qdisc_stats *VAR_9;
 struct mlxsw_sp_port_xstats *VAR_10;

 VAR_10 = &VAR_0->periodic_hw_stats.xstats;
 VAR_9 = &VAR_1->stats_base;

 FUNC_2(VAR_10,
            VAR_1->prio_bitmap,
            &VAR_4, &VAR_3);
 VAR_3 = VAR_3 - VAR_9->tx_bytes;
 VAR_4 = VAR_4 - VAR_9->tx_packets;

 VAR_5 = VAR_10->wred_drop[VAR_8] + VAR_10->ecn -
       VAR_9->overlimits;
 VAR_6 = VAR_10->wred_drop[VAR_8] + VAR_10->tail_drop[VAR_8] -
  VAR_9->drops;
 VAR_7 = VAR_10->backlog[VAR_8];

 FUNC_0(VAR_2->bstats, VAR_3, VAR_4);
 VAR_2->qstats->overlimits += VAR_5;
 VAR_2->qstats->drops += VAR_6;
 VAR_2->qstats->backlog +=
    FUNC_1(VAR_0->mlxsw_sp,
           VAR_7) -
    FUNC_1(VAR_0->mlxsw_sp,
           VAR_9->backlog);

 VAR_9->backlog = VAR_7;
 VAR_9->drops += VAR_6;
 VAR_9->overlimits += VAR_5;
 VAR_9->tx_bytes += VAR_3;
 VAR_9->tx_packets += VAR_4;
 return 0;
}
