
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct qcom_glink {int dev; int idr_lock; int rcids; } ;
struct glink_core_rx_intent {int in_use; int id; } ;
struct glink_channel {int intent_lock; int riids; } ;


 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct glink_core_rx_intent*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct qcom_glink *VAR_0,
          u32 VAR_1, uint32_t VAR_2,
          bool VAR_3)
{
 struct glink_core_rx_intent *VAR_4;
 struct glink_channel *VAR_5;
 unsigned long VAR_6;

 FUNC_4(&VAR_0->idr_lock, VAR_6);
 VAR_5 = FUNC_1(&VAR_0->rcids, VAR_1);
 FUNC_5(&VAR_0->idr_lock, VAR_6);
 if (!VAR_5) {
  FUNC_0(VAR_0->dev, "invalid channel id received\n");
  return;
 }

 FUNC_4(&VAR_5->intent_lock, VAR_6);
 VAR_4 = FUNC_1(&VAR_5->riids, VAR_2);

 if (!VAR_4) {
  FUNC_5(&VAR_5->intent_lock, VAR_6);
  FUNC_0(VAR_0->dev, "invalid intent id received\n");
  return;
 }

 VAR_4->in_use = 0;

 if (!VAR_3) {
  FUNC_2(&VAR_5->riids, VAR_4->id);
  FUNC_3(VAR_4);
 }
 FUNC_5(&VAR_5->intent_lock, VAR_6);
}
