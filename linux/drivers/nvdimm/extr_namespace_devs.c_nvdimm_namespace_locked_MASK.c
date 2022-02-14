
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int flags; } ;
struct nd_region {int ndr_mappings; struct nd_mapping* mapping; } ;
struct device {int parent; } ;
struct nd_namespace_common {struct device dev; } ;
struct nd_mapping {struct nvdimm* nvdimm; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct nvdimm*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 struct nd_region* FUNC_3 (int ) ;

bool FUNC_4(struct nd_namespace_common *VAR_1)
{
 int VAR_2;
 bool VAR_3 = 0;
 struct device *VAR_4 = &VAR_1->dev;
 struct nd_region *VAR_5 = FUNC_3(VAR_4->parent);

 for (VAR_2 = 0; VAR_2 < VAR_5->ndr_mappings; VAR_2++) {
  struct nd_mapping *VAR_6 = &VAR_5->mapping[VAR_2];
  struct nvdimm *VAR_7 = VAR_6->nvdimm;

  if (FUNC_2(VAR_0, &VAR_7->flags)) {
   FUNC_0(VAR_4, "%s locked\n", FUNC_1(VAR_7));
   VAR_3 = 1;
  }
 }
 return VAR_3;
}
