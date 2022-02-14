
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dsu_pmu {int num_counters; int pmu_lock; } ;


 int VAR_0 ;
 struct dsu_pmu* FUNC_0 (int ) ;
 int VAR_1 ;
 struct dsu_pmu* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct dsu_pmu *FUNC_3(struct platform_device *VAR_2)
{
 struct dsu_pmu *VAR_3;

 VAR_3 = FUNC_1(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_3->pmu_lock);




 VAR_3->num_counters = -1;
 return VAR_3;
}
