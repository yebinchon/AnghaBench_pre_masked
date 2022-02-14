
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_glink {int dev; int idr_lock; int rcids; } ;
struct glink_channel {int intent_req_result; int intent_req_comp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 struct glink_channel* FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct qcom_glink *VAR_0,
          unsigned int VAR_1, bool VAR_2)
{
 struct glink_channel *VAR_3;
 unsigned long VAR_4;

 FUNC_3(&VAR_0->idr_lock, VAR_4);
 VAR_3 = FUNC_2(&VAR_0->rcids, VAR_1);
 FUNC_4(&VAR_0->idr_lock, VAR_4);
 if (!VAR_3) {
  FUNC_1(VAR_0->dev, "unable to find channel\n");
  return;
 }

 VAR_3->intent_req_result = VAR_2;
 FUNC_0(&VAR_3->intent_req_comp);
}
