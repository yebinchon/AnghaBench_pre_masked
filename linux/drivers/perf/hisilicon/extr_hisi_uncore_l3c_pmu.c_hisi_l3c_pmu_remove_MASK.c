
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct hisi_pmu {int node; int pmu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 struct hisi_pmu* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct hisi_pmu *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(&VAR_2->pmu);
 FUNC_0(VAR_0,
        &VAR_2->node);

 return 0;
}
