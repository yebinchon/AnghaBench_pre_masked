
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_drvdata {int dummy; } ;
struct nvdimm {int busy; } ;
struct nd_region {int ndr_mappings; struct nd_mapping* mapping; } ;
struct nd_mapping {struct nvdimm_drvdata* ndd; int lock; struct nvdimm* nvdimm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nd_mapping*) ;
 int FUNC_4 (struct nvdimm_drvdata*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct nd_region *VAR_1 = VAR_0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->ndr_mappings; VAR_2++) {
  struct nd_mapping *VAR_3 = &VAR_1->mapping[VAR_2];
  struct nvdimm_drvdata *VAR_4 = VAR_3->ndd;
  struct nvdimm *VAR_5 = VAR_3->nvdimm;

  FUNC_1(&VAR_3->lock);
  FUNC_3(VAR_3);
  FUNC_2(&VAR_3->lock);

  FUNC_4(VAR_4);
  VAR_3->ndd = ((void*)0);
  if (VAR_4)
   FUNC_0(&VAR_5->busy);
 }
}
