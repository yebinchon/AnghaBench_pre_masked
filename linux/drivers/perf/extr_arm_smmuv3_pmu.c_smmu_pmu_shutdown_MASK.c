
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smmu_pmu {int pmu; } ;
struct platform_device {int dummy; } ;


 struct smmu_pmu* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_0)
{
 struct smmu_pmu *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->pmu);
}
