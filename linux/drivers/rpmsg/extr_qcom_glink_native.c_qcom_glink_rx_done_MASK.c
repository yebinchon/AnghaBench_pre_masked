
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {scalar_t__ intentless; } ;
struct glink_core_rx_intent {int node; int id; int reuse; struct glink_core_rx_intent* data; } ;
struct glink_channel {int intent_work; int intent_lock; int done_intents; int liids; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct glink_core_rx_intent*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct qcom_glink *VAR_0,
          struct glink_channel *VAR_1,
          struct glink_core_rx_intent *VAR_2)
{

 if (VAR_0->intentless) {
  FUNC_1(VAR_2->data);
  FUNC_1(VAR_2);
  return;
 }


 if (!VAR_2->reuse) {
  FUNC_4(&VAR_1->intent_lock);
  FUNC_0(&VAR_1->liids, VAR_2->id);
  FUNC_5(&VAR_1->intent_lock);
 }


 FUNC_4(&VAR_1->intent_lock);
 FUNC_2(&VAR_2->node, &VAR_1->done_intents);
 FUNC_5(&VAR_1->intent_lock);

 FUNC_3(&VAR_1->intent_work);
}
