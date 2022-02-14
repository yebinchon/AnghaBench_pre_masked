
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * handle; } ;
struct qcom_slim_ngd_ctrl {TYPE_1__ qmi; int dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct qcom_slim_ngd_ctrl *VAR_0)
{
 if (!VAR_0->qmi.handle)
  return;

 FUNC_1(VAR_0->qmi.handle);
 FUNC_0(VAR_0->dev, VAR_0->qmi.handle);
 VAR_0->qmi.handle = ((void*)0);
}
