
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_pmu {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (struct xgene_pmu*,struct platform_device*) ;
 int FUNC_1 (struct xgene_pmu*,struct platform_device*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct xgene_pmu *VAR_0,
       struct platform_device *VAR_1)
{
 if (FUNC_2(&VAR_1->dev))
  return FUNC_0(VAR_0, VAR_1);
 return FUNC_1(VAR_0, VAR_1);
}
