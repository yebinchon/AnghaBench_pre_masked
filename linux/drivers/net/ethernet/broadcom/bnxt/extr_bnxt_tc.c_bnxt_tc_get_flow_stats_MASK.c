
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_cls_offload {int stats; int cookie; } ;
struct bnxt_tc_info {int flow_ht_params; int flow_table; } ;
struct bnxt_tc_flow_stats {scalar_t__ packets; scalar_t__ bytes; } ;
struct bnxt_tc_flow {unsigned long lastused; int stats_lock; struct bnxt_tc_flow_stats prev_stats; struct bnxt_tc_flow_stats stats; } ;
struct bnxt_tc_flow_node {struct bnxt_tc_flow flow; } ;
struct bnxt {struct bnxt_tc_info* tc_info; } ;


 int FUNC_0 (int *,scalar_t__,scalar_t__,unsigned long) ;
 struct bnxt_tc_flow_node* FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_0,
      struct flow_cls_offload *VAR_1)
{
 struct bnxt_tc_flow_stats VAR_2, *VAR_3, *VAR_4;
 struct bnxt_tc_info *VAR_5 = VAR_0->tc_info;
 struct bnxt_tc_flow_node *VAR_6;
 struct bnxt_tc_flow *VAR_7;
 unsigned long VAR_8;

 VAR_6 = FUNC_1(&VAR_5->flow_table,
        &VAR_1->cookie,
        VAR_5->flow_ht_params);
 if (!VAR_6)
  return -1;

 VAR_7 = &VAR_6->flow;
 VAR_3 = &VAR_7->stats;
 VAR_4 = &VAR_7->prev_stats;

 FUNC_2(&VAR_7->stats_lock);
 VAR_2.packets = VAR_3->packets - VAR_4->packets;
 VAR_2.bytes = VAR_3->bytes - VAR_4->bytes;
 *VAR_4 = *VAR_3;
 VAR_8 = VAR_7->lastused;
 FUNC_3(&VAR_7->stats_lock);

 FUNC_0(&VAR_1->stats, VAR_2.bytes, VAR_2.packets,
     VAR_8);
 return 0;
}
