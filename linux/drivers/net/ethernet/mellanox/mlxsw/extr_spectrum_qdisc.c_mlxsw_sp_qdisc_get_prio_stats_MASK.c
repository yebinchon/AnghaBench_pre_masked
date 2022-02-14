
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct tc_qopt_offload_stats {TYPE_2__* qstats; int bstats; } ;
struct rtnl_link_stats64 {scalar_t__ tx_packets; scalar_t__ tx_bytes; } ;
struct mlxsw_sp_qdisc_stats {scalar_t__ tx_packets; scalar_t__ tx_bytes; scalar_t__ drops; scalar_t__ backlog; } ;
struct mlxsw_sp_qdisc {struct mlxsw_sp_qdisc_stats stats_base; } ;
struct mlxsw_sp_port_xstats {scalar_t__* backlog; scalar_t__* wred_drop; scalar_t__* tail_drop; } ;
struct TYPE_3__ {struct rtnl_link_stats64 stats; struct mlxsw_sp_port_xstats xstats; } ;
struct mlxsw_sp_port {int mlxsw_sp; TYPE_1__ periodic_hw_stats; } ;
struct TYPE_4__ {int backlog; int drops; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct mlxsw_sp_port *VAR_1,
         struct mlxsw_sp_qdisc *VAR_2,
         struct tc_qopt_offload_stats *VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6 = 0, VAR_7 = 0;
 struct mlxsw_sp_qdisc_stats *VAR_8;
 struct mlxsw_sp_port_xstats *VAR_9;
 struct rtnl_link_stats64 *VAR_10;
 int VAR_11;

 VAR_9 = &VAR_1->periodic_hw_stats.xstats;
 VAR_10 = &VAR_1->periodic_hw_stats.stats;
 VAR_8 = &VAR_2->stats_base;

 VAR_4 = VAR_10->tx_bytes - VAR_8->tx_bytes;
 VAR_5 = VAR_10->tx_packets - VAR_8->tx_packets;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_6 += VAR_9->tail_drop[VAR_11];
  VAR_6 += VAR_9->wred_drop[VAR_11];
  VAR_7 += VAR_9->backlog[VAR_11];
 }
 VAR_6 = VAR_6 - VAR_8->drops;

 FUNC_0(VAR_3->bstats, VAR_4, VAR_5);
 VAR_3->qstats->drops += VAR_6;
 VAR_3->qstats->backlog +=
    FUNC_1(VAR_1->mlxsw_sp,
           VAR_7) -
    FUNC_1(VAR_1->mlxsw_sp,
           VAR_8->backlog);
 VAR_8->backlog = VAR_7;
 VAR_8->drops += VAR_6;
 VAR_8->tx_bytes += VAR_4;
 VAR_8->tx_packets += VAR_5;
 return 0;
}
