
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct qtnf_qlink_transport {scalar_t__ event_queue_max_len; int event_queue; } ;
struct qtnf_bus {int event_work; int workqueue; struct qtnf_qlink_transport trans; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct qtnf_bus *VAR_0, struct sk_buff *VAR_1)
{
 struct qtnf_qlink_transport *VAR_2 = &VAR_0->trans;

 if (FUNC_1(FUNC_4(&VAR_2->event_queue) <
     VAR_2->event_queue_max_len)) {
  FUNC_5(&VAR_2->event_queue, VAR_1);
  FUNC_3(VAR_0->workqueue, &VAR_0->event_work);
 } else {
  FUNC_2("event dropped due to queue overflow\n");
  FUNC_0(VAR_1);
  return -1;
 }

 return 0;
}
