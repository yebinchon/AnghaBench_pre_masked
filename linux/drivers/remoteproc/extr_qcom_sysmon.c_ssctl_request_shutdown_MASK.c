
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ result; } ;
struct ssctl_shutdown_resp {TYPE_1__ resp; } ;
struct qmi_txn {int dummy; } ;
struct qcom_sysmon {scalar_t__ shutdown_irq; int dev; int ind_comp; int shutdown_comp; int ssctl; int qmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *,struct qmi_txn*,int ,int ,int *,int *) ;
 int FUNC_3 (struct qmi_txn*) ;
 int FUNC_4 (int *,struct qmi_txn*,int ,struct ssctl_shutdown_resp*) ;
 int FUNC_5 (struct qmi_txn*,int) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(struct qcom_sysmon *VAR_3)
{
 struct ssctl_shutdown_resp VAR_4;
 struct qmi_txn VAR_5;
 int VAR_6;

 FUNC_6(&VAR_3->ind_comp);
 FUNC_6(&VAR_3->shutdown_comp);
 VAR_6 = FUNC_4(&VAR_3->qmi, &VAR_5, VAR_2, &VAR_4);
 if (VAR_6 < 0) {
  FUNC_1(VAR_3->dev, "failed to allocate QMI txn\n");
  return;
 }

 VAR_6 = FUNC_2(&VAR_3->qmi, &VAR_3->ssctl, &VAR_5,
          VAR_1, 0, ((void*)0), ((void*)0));
 if (VAR_6 < 0) {
  FUNC_1(VAR_3->dev, "failed to send shutdown request\n");
  FUNC_3(&VAR_5);
  return;
 }

 VAR_6 = FUNC_5(&VAR_5, 5 * VAR_0);
 if (VAR_6 < 0)
  FUNC_1(VAR_3->dev, "failed receiving QMI response\n");
 else if (VAR_4.resp.result)
  FUNC_1(VAR_3->dev, "shutdown request failed\n");
 else
  FUNC_0(VAR_3->dev, "shutdown request completed\n");

 if (VAR_3->shutdown_irq > 0) {
  VAR_6 = FUNC_8(&VAR_3->shutdown_comp,
        10 * VAR_0);
  if (!VAR_6) {
   VAR_6 = FUNC_7(&VAR_3->ind_comp);
   if (!VAR_6)
    FUNC_1(VAR_3->dev,
     "timeout waiting for shutdown ack\n");
  }
 }
}
