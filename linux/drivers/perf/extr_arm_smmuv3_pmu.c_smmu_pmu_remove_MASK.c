
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smmu_pmu {int node; int pmu; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 struct smmu_pmu* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct smmu_pmu *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(&VAR_2->pmu);
 FUNC_0(VAR_0, &VAR_2->node);

 return 0;
}
