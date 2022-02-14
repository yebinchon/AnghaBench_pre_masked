
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct nvdimm {int flags; } ;
struct nd_region {size_t ndr_mappings; int dev; struct nd_mapping* mapping; } ;
struct nd_mapping {struct nvdimm* nvdimm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int FUNC_3(struct nd_region *VAR_4)
{
 if (FUNC_0(&VAR_4->dev)) {
  u16 VAR_5, VAR_6;

  for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_4->ndr_mappings; VAR_5++) {
   struct nd_mapping *VAR_7 = &VAR_4->mapping[VAR_5];
   struct nvdimm *VAR_8 = VAR_7->nvdimm;

   if (FUNC_2(VAR_0, &VAR_8->flags))
    VAR_6++;
  }
  if (VAR_6)
   return VAR_3;
  else
   return VAR_2;
 } else if (FUNC_1(&VAR_4->dev)) {
  return VAR_1;
 }

 return 0;
}
