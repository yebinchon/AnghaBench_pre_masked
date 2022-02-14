
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus {int reconfig_mutex; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct nvdimm_bus* FUNC_1 (struct device*) ;

void FUNC_2(struct device *VAR_0)
{
 struct nvdimm_bus *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return;
 FUNC_0(&VAR_1->reconfig_mutex);
}
