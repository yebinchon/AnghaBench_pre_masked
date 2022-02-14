
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_pmu {scalar_t__ version; } ;
struct platform_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xgene_pmu*,struct platform_device*) ;
 int FUNC_1 (struct xgene_pmu*,struct platform_device*) ;
 int FUNC_2 (struct xgene_pmu*,struct platform_device*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct xgene_pmu *VAR_1,
           struct platform_device *VAR_2)
{
 if (FUNC_3(&VAR_2->dev)) {
  if (VAR_1->version == VAR_0)
   return FUNC_1(VAR_1,
            VAR_2);
  else
   return FUNC_0(VAR_1,
         VAR_2);
 }
 return FUNC_2(VAR_1, VAR_2);
}
