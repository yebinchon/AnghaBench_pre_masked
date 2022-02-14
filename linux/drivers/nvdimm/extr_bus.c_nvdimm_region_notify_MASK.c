
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus {int dummy; } ;
struct nd_region {int dev; } ;
typedef enum nvdimm_event { ____Placeholder_nvdimm_event } nvdimm_event ;


 int FUNC_0 (int *,int) ;
 struct nvdimm_bus* FUNC_1 (int *) ;

void FUNC_2(struct nd_region *VAR_0, enum nvdimm_event VAR_1)
{
 struct nvdimm_bus *VAR_2 = FUNC_1(&VAR_0->dev);

 if (!VAR_2)
  return;


 FUNC_0(&VAR_0->dev, VAR_1);
}
