
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct l2cache_pmu {int node; int pmu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct platform_device*) ;
 struct l2cache_pmu* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct l2cache_pmu *VAR_2 =
  FUNC_3(FUNC_2(VAR_1));

 FUNC_1(&VAR_2->pmu);
 FUNC_0(VAR_0,
        &VAR_2->node);
 return 0;
}
