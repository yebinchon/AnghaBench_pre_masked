
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvdimm_bus_descriptor {char const* provider_name; } ;
struct TYPE_2__ {struct device* parent; } ;
struct nvdimm_bus {TYPE_1__ dev; struct nvdimm_bus_descriptor* nd_desc; } ;
struct device {int dummy; } ;


 char const* FUNC_0 (struct device*) ;

__attribute__((used)) static const char *FUNC_1(struct nvdimm_bus *VAR_0)
{
 struct nvdimm_bus_descriptor *VAR_1 = VAR_0->nd_desc;
 struct device *VAR_2 = VAR_0->dev.parent;

 if (VAR_1->provider_name)
  return VAR_1->provider_name;
 else if (VAR_2)
  return FUNC_0(VAR_2);
 else
  return "unknown";
}
