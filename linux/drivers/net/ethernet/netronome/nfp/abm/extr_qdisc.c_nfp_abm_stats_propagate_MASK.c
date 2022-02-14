
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_alink_stats {scalar_t__ drops; scalar_t__ overlimits; scalar_t__ backlog_bytes; scalar_t__ backlog_pkts; scalar_t__ tx_bytes; scalar_t__ tx_pkts; } ;



__attribute__((used)) static void
FUNC_0(struct nfp_alink_stats *VAR_0,
   struct nfp_alink_stats *VAR_1)
{
 VAR_0->tx_pkts += VAR_1->tx_pkts;
 VAR_0->tx_bytes += VAR_1->tx_bytes;
 VAR_0->backlog_pkts += VAR_1->backlog_pkts;
 VAR_0->backlog_bytes += VAR_1->backlog_bytes;
 VAR_0->overlimits += VAR_1->overlimits;
 VAR_0->drops += VAR_1->drops;
}
