
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {scalar_t__ priv; } ;
struct qcom_wcnss {int dev; int stop_bit; scalar_t__ state; int stop_done; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct rproc *VAR_1)
{
 struct qcom_wcnss *VAR_2 = (struct qcom_wcnss *)VAR_1->priv;
 int VAR_3;

 if (VAR_2->state) {
  FUNC_4(VAR_2->state,
         FUNC_0(VAR_2->stop_bit),
         FUNC_0(VAR_2->stop_bit));

  VAR_3 = FUNC_5(&VAR_2->stop_done,
        FUNC_2(5000));
  if (VAR_3 == 0)
   FUNC_1(VAR_2->dev, "timed out on wait\n");

  FUNC_4(VAR_2->state,
         FUNC_0(VAR_2->stop_bit),
         0);
 }

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3)
  FUNC_1(VAR_2->dev, "failed to shutdown: %d\n", VAR_3);

 return VAR_3;
}
