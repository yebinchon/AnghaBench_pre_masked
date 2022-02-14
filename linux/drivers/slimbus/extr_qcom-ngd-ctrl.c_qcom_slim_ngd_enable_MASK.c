
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qmi_comp; } ;
struct qcom_slim_ngd_ctrl {int ctrl; int dev; TYPE_1__ qmi; int state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct qcom_slim_ngd_ctrl*) ;
 int FUNC_10 (struct qcom_slim_ngd_ctrl*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct qcom_slim_ngd_ctrl *VAR_0, bool VAR_1)
{
 if (VAR_1) {
  int VAR_2 = FUNC_10(VAR_0, 0);

  if (VAR_2) {
   FUNC_1(VAR_0->dev, "qmi init fail, ret:%d, state:%d\n",
    VAR_2, VAR_0->state);
   return VAR_2;
  }

  FUNC_0(&VAR_0->qmi.qmi_comp);
  if (!FUNC_3(VAR_0->dev) ||
    !FUNC_7(VAR_0->dev))
   FUNC_8(VAR_0->dev);
  else
   FUNC_6(VAR_0->dev);
  FUNC_4(VAR_0->dev);
  FUNC_5(VAR_0->dev);

  VAR_2 = FUNC_11(&VAR_0->ctrl);
  if (VAR_2) {
   FUNC_1(VAR_0->dev, "error adding slim controller\n");
   return VAR_2;
  }

  FUNC_2(VAR_0->dev, "SLIM controller Registered\n");
 } else {
  FUNC_9(VAR_0);
  FUNC_12(&VAR_0->ctrl);
 }

 return 0;
}
