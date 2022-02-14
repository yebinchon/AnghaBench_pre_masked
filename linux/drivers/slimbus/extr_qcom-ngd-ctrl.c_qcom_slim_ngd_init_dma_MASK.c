
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_slim_ngd_ctrl {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct qcom_slim_ngd_ctrl*) ;
 int FUNC_2 (struct qcom_slim_ngd_ctrl*) ;

__attribute__((used)) static int FUNC_3(struct qcom_slim_ngd_ctrl *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0->dev, "rx dma init failed\n");
  return VAR_1;
 }

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_0->dev, "tx dma init failed\n");

 return VAR_1;
}
