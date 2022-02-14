
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvdimm_bus {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct nvdimm {TYPE_1__ dev; } ;


 struct nvdimm_bus* FUNC_0 (int ) ;

struct nvdimm_bus *FUNC_1(struct nvdimm *VAR_0)
{
 return FUNC_0(VAR_0->dev.parent);
}
