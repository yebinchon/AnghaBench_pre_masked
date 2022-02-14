
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_sysmon {int ssr_ack; int lock; int dev; int comp; int ept; } ;
typedef int req ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct qcom_sysmon *VAR_0, const char *VAR_1)
{
 char VAR_2[50];
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_6(VAR_2, sizeof(VAR_2), "ssr:%s:before_shutdown", VAR_1);
 if (VAR_3 >= sizeof(VAR_2))
  return;

 FUNC_2(&VAR_0->lock);
 FUNC_4(&VAR_0->comp);
 VAR_0->ssr_ack = 0;

 VAR_4 = FUNC_5(VAR_0->ept, VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->dev, "failed to send sysmon event\n");
  goto out_unlock;
 }

 VAR_4 = FUNC_7(&VAR_0->comp,
       FUNC_1(5000));
 if (!VAR_4) {
  FUNC_0(VAR_0->dev, "timeout waiting for sysmon ack\n");
  goto out_unlock;
 }

 if (!VAR_0->ssr_ack)
  FUNC_0(VAR_0->dev, "unexpected response to sysmon event\n");

out_unlock:
 FUNC_3(&VAR_0->lock);
}
