
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_cmd_ctl_node {int waiting_for_resp; scalar_t__ const seq_num; int resp_lock; int cmd_resp_completion; struct sk_buff* resp_skb; } ;
struct TYPE_2__ {struct qtnf_cmd_ctl_node curr_cmd; } ;
struct qtnf_bus {TYPE_1__ trans; } ;
struct qlink_resp {int seq_num; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct qtnf_bus *VAR_0, struct sk_buff *VAR_1)
{
 struct qtnf_cmd_ctl_node *VAR_2 = &VAR_0->trans.curr_cmd;
 const struct qlink_resp *VAR_3 = (const struct qlink_resp *)VAR_1->data;
 const u16 VAR_4 = FUNC_2(VAR_3->seq_num);

 FUNC_4(&VAR_2->resp_lock);

 if (FUNC_6(!VAR_2->waiting_for_resp)) {
  FUNC_3("unexpected response\n");
  goto out_err;
 }

 if (FUNC_6(VAR_4 != VAR_2->seq_num)) {
  FUNC_3("seq num mismatch\n");
  goto out_err;
 }

 VAR_2->resp_skb = VAR_1;
 VAR_2->waiting_for_resp = 0;

 FUNC_5(&VAR_2->resp_lock);

 FUNC_0(&VAR_2->cmd_resp_completion);
 return;

out_err:
 FUNC_5(&VAR_2->resp_lock);
 FUNC_1(VAR_1);
}
