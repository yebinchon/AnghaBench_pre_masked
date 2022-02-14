
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnxt_tc_stats_batch {int hw_stats; struct bnxt_tc_flow_node* flow_node; } ;
struct bnxt_tc_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ packets; } ;
struct TYPE_4__ {scalar_t__ packets; } ;
struct bnxt_tc_flow {int stats_lock; int lastused; TYPE_1__ prev_stats; TYPE_2__ stats; } ;
struct bnxt_tc_flow_node {struct bnxt_tc_flow flow; } ;
struct bnxt {struct bnxt_tc_info* tc_info; } ;


 int FUNC_0 (struct bnxt_tc_info*,TYPE_2__*,int *) ;
 int FUNC_1 (struct bnxt*,int,struct bnxt_tc_stats_batch*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct bnxt *VAR_1, int VAR_2,
    struct bnxt_tc_stats_batch VAR_3[])
{
 struct bnxt_tc_info *VAR_4 = VAR_1->tc_info;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct bnxt_tc_flow_node *VAR_7 = VAR_3[VAR_6].flow_node;
  struct bnxt_tc_flow *VAR_8 = &VAR_7->flow;

  FUNC_2(&VAR_8->stats_lock);
  FUNC_0(VAR_4, &VAR_8->stats,
          &VAR_3[VAR_6].hw_stats);
  if (VAR_8->stats.packets != VAR_8->prev_stats.packets)
   VAR_8->lastused = VAR_0;
  FUNC_3(&VAR_8->stats_lock);
 }

 return 0;
}
