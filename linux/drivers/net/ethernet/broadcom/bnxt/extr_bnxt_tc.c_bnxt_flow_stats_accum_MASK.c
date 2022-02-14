
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_tc_info {int packets_mask; int bytes_mask; } ;
struct bnxt_tc_flow_stats {int packets; int bytes; } ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bnxt_tc_info *VAR_0,
      struct bnxt_tc_flow_stats *VAR_1,
      struct bnxt_tc_flow_stats *VAR_2)
{
 FUNC_0(&VAR_1->bytes, VAR_2->bytes, VAR_0->bytes_mask);
 FUNC_0(&VAR_1->packets, VAR_2->packets,
         VAR_0->packets_mask);
}
