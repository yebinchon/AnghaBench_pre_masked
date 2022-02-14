
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_slim_ngd_ctrl {int * ngd; scalar_t__ mwq; int qmi; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 struct qcom_slim_ngd_ctrl* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qcom_slim_ngd_ctrl*,int) ;
 int FUNC_5 (struct qcom_slim_ngd_ctrl*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct qcom_slim_ngd_ctrl *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_0->dev);
 FUNC_4(VAR_1, 0);
 FUNC_5(VAR_1);
 FUNC_6(&VAR_1->qmi);
 if (VAR_1->mwq)
  FUNC_0(VAR_1->mwq);

 FUNC_1(VAR_1->ngd);
 VAR_1->ngd = ((void*)0);
 return 0;
}
