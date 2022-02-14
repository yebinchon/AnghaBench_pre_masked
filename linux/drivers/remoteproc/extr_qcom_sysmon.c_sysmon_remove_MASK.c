
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_device {TYPE_1__* ept; } ;
struct qcom_sysmon {int * ept; } ;
struct TYPE_2__ {struct qcom_sysmon* priv; } ;



__attribute__((used)) static void FUNC_0(struct rpmsg_device *VAR_0)
{
 struct qcom_sysmon *VAR_1 = VAR_0->ept->priv;

 VAR_1->ept = ((void*)0);
}
