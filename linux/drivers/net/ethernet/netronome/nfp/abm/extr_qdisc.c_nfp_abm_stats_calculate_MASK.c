
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_alink_stats {scalar_t__ drops; scalar_t__ overlimits; scalar_t__ backlog_bytes; scalar_t__ backlog_pkts; scalar_t__ tx_pkts; scalar_t__ tx_bytes; } ;
struct gnet_stats_queue {int drops; int overlimits; int backlog; int qlen; } ;
struct gnet_stats_basic_packed {int dummy; } ;


 int FUNC_0 (struct gnet_stats_basic_packed*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct nfp_alink_stats *VAR_0,
   struct nfp_alink_stats *VAR_1,
   struct gnet_stats_basic_packed *VAR_2,
   struct gnet_stats_queue *VAR_3)
{
 FUNC_0(VAR_2, VAR_0->tx_bytes - VAR_1->tx_bytes,
         VAR_0->tx_pkts - VAR_1->tx_pkts);
 VAR_3->qlen += VAR_0->backlog_pkts - VAR_1->backlog_pkts;
 VAR_3->backlog += VAR_0->backlog_bytes - VAR_1->backlog_bytes;
 VAR_3->overlimits += VAR_0->overlimits - VAR_1->overlimits;
 VAR_3->drops += VAR_0->drops - VAR_1->drops;
}
