
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tx_stats; int * rx_stats; } ;
struct nicvf {TYPE_1__ bgx_stats; } ;
struct bgx_stats_msg {size_t idx; int stats; scalar_t__ rx; } ;



__attribute__((used)) static void FUNC_0(struct nicvf *VAR_0, struct bgx_stats_msg *VAR_1)
{
 if (VAR_1->rx)
  VAR_0->bgx_stats.rx_stats[VAR_1->idx] = VAR_1->stats;
 else
  VAR_0->bgx_stats.tx_stats[VAR_1->idx] = VAR_1->stats;
}
