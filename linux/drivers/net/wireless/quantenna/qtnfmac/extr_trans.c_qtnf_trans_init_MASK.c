
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int waiting_for_resp; int resp_lock; int * resp_skb; scalar_t__ seq_num; int cmd_resp_completion; } ;
struct qtnf_qlink_transport {int event_queue_max_len; int event_queue; TYPE_1__ curr_cmd; } ;
struct qtnf_bus {struct qtnf_qlink_transport trans; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct qtnf_bus *VAR_1)
{
 struct qtnf_qlink_transport *VAR_2 = &VAR_1->trans;

 FUNC_0(&VAR_2->curr_cmd.cmd_resp_completion);
 FUNC_3(&VAR_2->curr_cmd.resp_lock);

 FUNC_2(&VAR_2->curr_cmd.resp_lock);
 VAR_2->curr_cmd.seq_num = 0;
 VAR_2->curr_cmd.waiting_for_resp = 0;
 VAR_2->curr_cmd.resp_skb = ((void*)0);
 FUNC_4(&VAR_2->curr_cmd.resp_lock);


 FUNC_1(&VAR_2->event_queue);
 VAR_2->event_queue_max_len = VAR_0;
}
