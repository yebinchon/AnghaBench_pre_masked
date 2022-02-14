
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hclge_fd_rule {scalar_t__ action; int location; scalar_t__ queue_id; } ;
struct hclge_fd_ad_data {int drop_packet; int forward_to_direct_queue; int use_counter; int use_next_stage; int write_rule_id_to_bd; int ad_id; int rule_id; scalar_t__ next_input_key; scalar_t__ counter_id; scalar_t__ queue_id; } ;
struct hclge_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hclge_dev*,int ,int ,struct hclge_fd_ad_data*) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_1, u8 VAR_2,
          struct hclge_fd_rule *VAR_3)
{
 struct hclge_fd_ad_data VAR_4;

 VAR_4.ad_id = VAR_3->location;

 if (VAR_3->action == VAR_0) {
  VAR_4.drop_packet = 1;
  VAR_4.forward_to_direct_queue = 0;
  VAR_4.queue_id = 0;
 } else {
  VAR_4.drop_packet = 0;
  VAR_4.forward_to_direct_queue = 1;
  VAR_4.queue_id = VAR_3->queue_id;
 }

 VAR_4.use_counter = 0;
 VAR_4.counter_id = 0;

 VAR_4.use_next_stage = 0;
 VAR_4.next_input_key = 0;

 VAR_4.write_rule_id_to_bd = 1;
 VAR_4.rule_id = VAR_3->location;

 return FUNC_0(VAR_1, VAR_2, VAR_4.ad_id, &VAR_4);
}
