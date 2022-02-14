
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct arm_spe_pmu {int handle; } ;


 int FUNC_0 (struct arm_spe_pmu*) ;
 int FUNC_1 (struct arm_spe_pmu*) ;
 int FUNC_2 (int ) ;
 struct arm_spe_pmu* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct arm_spe_pmu *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1->handle);
 return 0;
}
