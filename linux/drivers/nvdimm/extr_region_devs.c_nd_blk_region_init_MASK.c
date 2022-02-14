
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvdimm_bus {int dummy; } ;
struct device {int dummy; } ;
struct nd_region {int ndr_mappings; struct device dev; } ;
struct TYPE_2__ {int (* enable ) (struct nvdimm_bus*,struct device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct nvdimm_bus*,struct device*) ;
 TYPE_1__* FUNC_3 (struct device*) ;
 struct nvdimm_bus* FUNC_4 (struct device*) ;

int FUNC_5(struct nd_region *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct nvdimm_bus *VAR_3 = FUNC_4(VAR_2);

 if (!FUNC_1(VAR_2))
  return 0;

 if (VAR_1->ndr_mappings < 1) {
  FUNC_0(VAR_2, "invalid BLK region\n");
  return -VAR_0;
 }

 return FUNC_3(VAR_2)->enable(VAR_3, VAR_2);
}
