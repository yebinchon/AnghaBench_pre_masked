
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_fd_rule_tuples {scalar_t__ ether_proto; scalar_t__ ip_proto; } ;
struct hclge_fd_rule {int unused_tuple; int tuples_mask; int tuples; int flow_type; int rule_type; scalar_t__ vf_id; scalar_t__ action; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,struct hclge_fd_rule_tuples const*,int) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static void FUNC_3(const struct hclge_fd_rule_tuples *VAR_12,
         struct hclge_fd_rule *VAR_13)
{
 VAR_13->unused_tuple = FUNC_0(VAR_4) | FUNC_0(VAR_2) |
        FUNC_0(VAR_6) | FUNC_0(VAR_3) |
        FUNC_0(VAR_5);
 VAR_13->action = 0;
 VAR_13->vf_id = 0;
 VAR_13->rule_type = VAR_1;
 if (VAR_12->ether_proto == VAR_0) {
  if (VAR_12->ip_proto == VAR_7)
   VAR_13->flow_type = VAR_8;
  else
   VAR_13->flow_type = VAR_10;
 } else {
  if (VAR_12->ip_proto == VAR_7)
   VAR_13->flow_type = VAR_9;
  else
   VAR_13->flow_type = VAR_11;
 }
 FUNC_1(&VAR_13->tuples, VAR_12, sizeof(VAR_13->tuples));
 FUNC_2(&VAR_13->tuples_mask, 0xFF, sizeof(VAR_13->tuples_mask));
}
