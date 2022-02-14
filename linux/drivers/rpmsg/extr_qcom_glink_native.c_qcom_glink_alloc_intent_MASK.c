
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {int dummy; } ;
struct glink_core_rx_intent {int id; size_t size; int reuse; struct glink_core_rx_intent* data; } ;
struct glink_channel {int intent_lock; int liids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct glink_core_rx_intent*,int,int,int ) ;
 int FUNC_1 (struct glink_core_rx_intent*) ;
 void* FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static struct glink_core_rx_intent *
FUNC_5(struct qcom_glink *VAR_2,
   struct glink_channel *VAR_3,
   size_t VAR_4,
   bool VAR_5)
{
 struct glink_core_rx_intent *VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->data = FUNC_2(VAR_4, VAR_1);
 if (!VAR_6->data)
  goto free_intent;

 FUNC_3(&VAR_3->intent_lock, VAR_8);
 VAR_7 = FUNC_0(&VAR_3->liids, VAR_6, 1, -1, VAR_0);
 if (VAR_7 < 0) {
  FUNC_4(&VAR_3->intent_lock, VAR_8);
  goto free_data;
 }
 FUNC_4(&VAR_3->intent_lock, VAR_8);

 VAR_6->id = VAR_7;
 VAR_6->size = VAR_4;
 VAR_6->reuse = VAR_5;

 return VAR_6;

free_data:
 FUNC_1(VAR_6->data);
free_intent:
 FUNC_1(VAR_6);
 return ((void*)0);
}
