
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_service {struct qcom_sysmon* priv; } ;
struct qmi_handle {int dummy; } ;
struct qcom_sysmon {scalar_t__ ssctl_version; } ;



__attribute__((used)) static void FUNC_0(struct qmi_handle *VAR_0, struct qmi_service *VAR_1)
{
 struct qcom_sysmon *VAR_2 = VAR_1->priv;

 VAR_2->ssctl_version = 0;
}
