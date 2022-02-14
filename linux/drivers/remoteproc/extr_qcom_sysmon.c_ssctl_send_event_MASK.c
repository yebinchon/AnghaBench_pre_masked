
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ result; } ;
struct ssctl_subsys_event_resp {int evt_driven_valid; TYPE_1__ resp; int evt_driven; int event; int subsys_name; int subsys_name_len; } ;
struct ssctl_subsys_event_req {int evt_driven_valid; TYPE_1__ resp; int evt_driven; int event; int subsys_name; int subsys_name_len; } ;
struct qmi_txn {int dummy; } ;
struct qcom_sysmon {int dev; int ssctl; int qmi; } ;
typedef int resp ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ssctl_subsys_event_resp*,int ,int) ;
 int FUNC_3 (int *,int *,struct qmi_txn*,int ,int,int ,struct ssctl_subsys_event_resp*) ;
 int FUNC_4 (struct qmi_txn*) ;
 int FUNC_5 (int *,struct qmi_txn*,int ,struct ssctl_subsys_event_resp*) ;
 int FUNC_6 (struct qmi_txn*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,char const*,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct qcom_sysmon *VAR_6, const char *VAR_7)
{
 struct ssctl_subsys_event_resp VAR_8;
 struct ssctl_subsys_event_req VAR_9;
 struct qmi_txn VAR_10;
 int VAR_11;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_11 = FUNC_5(&VAR_6->qmi, &VAR_10, VAR_5, &VAR_8);
 if (VAR_11 < 0) {
  FUNC_1(VAR_6->dev, "failed to allocate QMI txn\n");
  return;
 }

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 FUNC_7(VAR_9.subsys_name, VAR_7, sizeof(VAR_9.subsys_name));
 VAR_9.subsys_name_len = FUNC_8(VAR_9.subsys_name);
 VAR_9.event = VAR_1;
 VAR_9.evt_driven_valid = 1;
 VAR_9.evt_driven = VAR_2;

 VAR_11 = FUNC_3(&VAR_6->qmi, &VAR_6->ssctl, &VAR_10,
          VAR_3, 40,
          VAR_4, &VAR_9);
 if (VAR_11 < 0) {
  FUNC_1(VAR_6->dev, "failed to send shutdown request\n");
  FUNC_4(&VAR_10);
  return;
 }

 VAR_11 = FUNC_6(&VAR_10, 5 * VAR_0);
 if (VAR_11 < 0)
  FUNC_1(VAR_6->dev, "failed receiving QMI response\n");
 else if (VAR_8.resp.result)
  FUNC_1(VAR_6->dev, "ssr event send failed\n");
 else
  FUNC_0(VAR_6->dev, "ssr event send completed\n");
}
