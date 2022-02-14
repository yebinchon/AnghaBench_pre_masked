
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_slim_ngd_ctrl {scalar_t__ state; int dev; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct qcom_slim_ngd_ctrl* FUNC_1 (struct device*) ;
 int FUNC_2 (struct qcom_slim_ngd_ctrl*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3)
{
 struct qcom_slim_ngd_ctrl *VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = 0;

 if (VAR_4->state >= VAR_0)
  VAR_5 = FUNC_2(VAR_4);
 if (VAR_5) {

  if (VAR_4->state != VAR_2)
   VAR_4->state = VAR_0;
  else
   FUNC_0(VAR_4->dev, "HW wakeup attempt during SSR\n");
 } else {
  VAR_4->state = VAR_1;
 }

 return 0;
}
