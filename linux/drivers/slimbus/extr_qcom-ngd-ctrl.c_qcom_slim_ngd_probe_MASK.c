
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* dev; } ;
struct qcom_slim_ngd_ctrl {scalar_t__ mwq; int qmi; int m_work; TYPE_1__ ctrl; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct qcom_slim_ngd_ctrl* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,int ) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct qcom_slim_ngd_ctrl*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_3)
{
 struct qcom_slim_ngd_ctrl *VAR_4 = FUNC_4(VAR_3);
 struct device *VAR_5 = &VAR_3->dev;
 int VAR_6;

 VAR_4->ctrl.dev = VAR_5;

 FUNC_9(VAR_5);
 FUNC_7(VAR_5, VAR_1);
 FUNC_8(VAR_5);
 FUNC_5(VAR_5);
 FUNC_6(VAR_5);
 VAR_6 = FUNC_11(VAR_4);
 if (VAR_6) {
  FUNC_3(&VAR_3->dev, "QMI service registration failed:%d", VAR_6);
  return VAR_6;
 }

 FUNC_0(&VAR_4->m_work, VAR_2);
 VAR_4->mwq = FUNC_1("ngd_master");
 if (!VAR_4->mwq) {
  FUNC_3(&VAR_3->dev, "Failed to start master worker\n");
  VAR_6 = -VAR_0;
  goto wq_err;
 }

 return 0;
wq_err:
 FUNC_10(&VAR_4->qmi);
 if (VAR_4->mwq)
  FUNC_2(VAR_4->mwq);

 return VAR_6;
}
