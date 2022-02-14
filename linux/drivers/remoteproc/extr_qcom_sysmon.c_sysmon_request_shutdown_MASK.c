
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_sysmon {int ssr_ack; int lock; int dev; int comp; int ept; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct qcom_sysmon *VAR_0)
{
 char *VAR_1 = "ssr:shutdown";
 int VAR_2;

 FUNC_2(&VAR_0->lock);
 FUNC_4(&VAR_0->comp);
 VAR_0->ssr_ack = 0;

 VAR_2 = FUNC_5(VAR_0->ept, VAR_1, FUNC_6(VAR_1) + 1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "send sysmon shutdown request failed\n");
  goto out_unlock;
 }

 VAR_2 = FUNC_7(&VAR_0->comp,
       FUNC_1(5000));
 if (!VAR_2) {
  FUNC_0(VAR_0->dev, "timeout waiting for sysmon ack\n");
  goto out_unlock;
 }

 if (!VAR_0->ssr_ack)
  FUNC_0(VAR_0->dev,
   "unexpected response to sysmon shutdown request\n");

out_unlock:
 FUNC_3(&VAR_0->lock);
}
