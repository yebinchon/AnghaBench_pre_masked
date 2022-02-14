
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct qtnf_cmd_ctl_node {int waiting_for_resp; int resp_lock; struct sk_buff* resp_skb; int cmd_resp_completion; int seq_num; } ;
struct TYPE_2__ {struct qtnf_cmd_ctl_node curr_cmd; } ;
struct qtnf_bus {TYPE_1__ trans; } ;
struct qlink_cmd {int seq_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct qtnf_bus*,struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 long FUNC_9 (int *,int ) ;

int FUNC_10(struct qtnf_bus *VAR_4, struct sk_buff *VAR_5,
      struct sk_buff **VAR_6)
{
 struct qtnf_cmd_ctl_node *VAR_7 = &VAR_4->trans.curr_cmd;
 struct qlink_cmd *VAR_8 = (void *)VAR_5->data;
 int VAR_9 = 0;
 long VAR_10;
 bool VAR_11 = 1;
 struct sk_buff *VAR_12 = ((void*)0);

 if (FUNC_8(!VAR_6)) {
  FUNC_2(VAR_5);
  return -VAR_0;
 }

 FUNC_6(&VAR_7->resp_lock);
 VAR_7->seq_num++;
 VAR_8->seq_num = FUNC_1(VAR_7->seq_num);
 FUNC_0(VAR_7->resp_skb, "qtnfmac: response skb not empty\n");
 VAR_7->waiting_for_resp = 1;
 FUNC_7(&VAR_7->resp_lock);

 VAR_9 = FUNC_5(VAR_4, VAR_5);
 FUNC_2(VAR_5);

 if (FUNC_8(VAR_9))
  goto out;

 VAR_10 = FUNC_9(
      &VAR_7->cmd_resp_completion,
      VAR_3);

 FUNC_6(&VAR_7->resp_lock);
 VAR_11 = VAR_7->waiting_for_resp;
 VAR_12 = VAR_7->resp_skb;
 VAR_7->resp_skb = ((void*)0);
 VAR_7->waiting_for_resp = 0;
 FUNC_7(&VAR_7->resp_lock);

 if (FUNC_8(VAR_10 <= 0)) {
  if (VAR_10 == 0) {
   VAR_9 = -VAR_2;
   FUNC_4("response timeout\n");
  } else {
   VAR_9 = -VAR_1;
   FUNC_3("interrupted\n");
  }
 }

 if (FUNC_8(!VAR_12 || VAR_11)) {
  if (!VAR_9)
   VAR_9 = -VAR_0;

  goto out;
 }

 VAR_9 = 0;
 *VAR_6 = VAR_12;

out:
 if (FUNC_8(VAR_12 && VAR_11))
  FUNC_2(VAR_12);

 return VAR_9;
}
