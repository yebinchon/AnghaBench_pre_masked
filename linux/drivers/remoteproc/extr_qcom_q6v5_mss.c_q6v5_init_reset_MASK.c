
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6v5 {void* pdc_reset; int dev; scalar_t__ has_alt_reset; void* mss_restart; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct q6v5 *VAR_0)
{
 VAR_0->mss_restart = FUNC_3(VAR_0->dev,
             "mss_restart");
 if (FUNC_0(VAR_0->mss_restart)) {
  FUNC_2(VAR_0->dev, "failed to acquire mss restart\n");
  return FUNC_1(VAR_0->mss_restart);
 }

 if (VAR_0->has_alt_reset) {
  VAR_0->pdc_reset = FUNC_3(VAR_0->dev,
            "pdc_reset");
  if (FUNC_0(VAR_0->pdc_reset)) {
   FUNC_2(VAR_0->dev, "failed to acquire pdc reset\n");
   return FUNC_1(VAR_0->pdc_reset);
  }
 }

 return 0;
}
