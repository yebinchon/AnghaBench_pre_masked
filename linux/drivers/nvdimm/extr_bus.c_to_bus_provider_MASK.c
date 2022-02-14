
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvdimm_bus {TYPE_1__* nd_desc; } ;
struct module {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct module* module; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 struct nvdimm_bus* FUNC_1 (struct device*) ;

__attribute__((used)) static struct module *FUNC_2(struct device *VAR_0)
{

 if (FUNC_0(VAR_0)) {
  struct nvdimm_bus *VAR_1 = FUNC_1(VAR_0);

  return VAR_1->nd_desc->module;
 }
 return ((void*)0);
}
