
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int tx_bytes; int tx_packets; } ;
struct mlxsw_sp_qdisc_stats {scalar_t__ backlog; scalar_t__ drops; int tx_bytes; int tx_packets; } ;
struct mlxsw_sp_qdisc {struct mlxsw_sp_qdisc_stats stats_base; } ;
struct mlxsw_sp_port_xstats {scalar_t__* wred_drop; scalar_t__* tail_drop; } ;
struct TYPE_2__ {struct rtnl_link_stats64 stats; struct mlxsw_sp_port_xstats xstats; } ;
struct mlxsw_sp_port {TYPE_1__ periodic_hw_stats; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct mlxsw_sp_port *VAR_1,
      struct mlxsw_sp_qdisc *VAR_2)
{
 struct mlxsw_sp_qdisc_stats *VAR_3;
 struct mlxsw_sp_port_xstats *VAR_4;
 struct rtnl_link_stats64 *VAR_5;
 int VAR_6;

 VAR_4 = &VAR_1->periodic_hw_stats.xstats;
 VAR_5 = &VAR_1->periodic_hw_stats.stats;
 VAR_3 = &VAR_2->stats_base;

 VAR_3->tx_packets = VAR_5->tx_packets;
 VAR_3->tx_bytes = VAR_5->tx_bytes;

 VAR_3->drops = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_3->drops += VAR_4->tail_drop[VAR_6];
  VAR_3->drops += VAR_4->wred_drop[VAR_6];
 }

 VAR_2->stats_base.backlog = 0;
}
