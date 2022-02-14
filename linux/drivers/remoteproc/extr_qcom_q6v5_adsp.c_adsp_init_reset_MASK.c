
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_adsp {void* restart; int dev; void* pdc_sync_reset; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ,char*) ;
 void* FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct qcom_adsp *VAR_0)
{
 VAR_0->pdc_sync_reset = FUNC_4(VAR_0->dev,
   "pdc_sync");
 if (FUNC_0(VAR_0->pdc_sync_reset)) {
  FUNC_2(VAR_0->dev, "failed to acquire pdc_sync reset\n");
  return FUNC_1(VAR_0->pdc_sync_reset);
 }

 VAR_0->restart = FUNC_4(VAR_0->dev, "restart");


 if (!VAR_0->restart)
  VAR_0->restart = FUNC_3(VAR_0->dev, "cc_lpass");

 if (FUNC_0(VAR_0->restart)) {
  FUNC_2(VAR_0->dev, "failed to acquire restart\n");
  return FUNC_1(VAR_0->restart);
 }

 return 0;
}
