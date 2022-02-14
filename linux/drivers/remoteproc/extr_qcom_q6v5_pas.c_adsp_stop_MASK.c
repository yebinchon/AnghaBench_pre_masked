
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {scalar_t__ priv; } ;
struct qcom_adsp {int q6v5; int dev; int pas_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct rproc *VAR_1)
{
 struct qcom_adsp *VAR_2 = (struct qcom_adsp *)VAR_1->priv;
 int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_2->q6v5);
 if (VAR_4 == -VAR_0)
  FUNC_0(VAR_2->dev, "timed out on wait\n");

 VAR_4 = FUNC_4(VAR_2->pas_id);
 if (VAR_4)
  FUNC_0(VAR_2->dev, "failed to shutdown: %d\n", VAR_4);

 VAR_3 = FUNC_3(&VAR_2->q6v5);
 if (VAR_3)
  FUNC_1(&VAR_2->q6v5);

 return VAR_4;
}
