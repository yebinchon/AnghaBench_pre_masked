
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus_descriptor {int dummy; } ;
struct nvdimm_bus {struct nvdimm_bus_descriptor* nd_desc; } ;



struct nvdimm_bus_descriptor *FUNC_0(struct nvdimm_bus *VAR_0)
{

 return VAR_0->nd_desc;
}
