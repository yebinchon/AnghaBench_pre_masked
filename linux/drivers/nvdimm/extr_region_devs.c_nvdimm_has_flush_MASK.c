
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {scalar_t__ num_flush; } ;
struct nd_region {int ndr_mappings; struct nd_mapping* mapping; } ;
struct nd_mapping {struct nvdimm* nvdimm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct nd_region *VAR_2)
{
 int VAR_3;


 if (VAR_2->ndr_mappings == 0
   || !FUNC_0(VAR_0))
  return -VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_2->ndr_mappings; VAR_3++) {
  struct nd_mapping *VAR_4 = &VAR_2->mapping[VAR_3];
  struct nvdimm *VAR_5 = VAR_4->nvdimm;


  if (VAR_5->num_flush)
   return 1;
 }





 return 0;
}
