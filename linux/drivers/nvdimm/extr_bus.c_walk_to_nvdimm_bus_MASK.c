
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus {int dummy; } ;
struct device {struct device* parent; } ;


 int FUNC_0 (struct device*,int,char*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 struct nvdimm_bus* FUNC_2 (struct device*) ;

struct nvdimm_bus *FUNC_3(struct device *VAR_0)
{
 struct device *VAR_1;

 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->parent)
  if (FUNC_1(VAR_1))
   break;
 FUNC_0(VAR_0, !VAR_1, "invalid dev, not on nd bus\n");
 if (VAR_1)
  return FUNC_2(VAR_1);
 return ((void*)0);
}
