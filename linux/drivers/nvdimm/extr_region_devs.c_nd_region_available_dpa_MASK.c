
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_drvdata {int dummy; } ;
struct nd_region {int ndr_mappings; int dev; struct nd_mapping* mapping; } ;
struct nd_mapping {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct nd_region*) ;
 scalar_t__ FUNC_5 (struct nd_region*,struct nd_mapping*,scalar_t__*) ;
 struct nvdimm_drvdata* FUNC_6 (struct nd_mapping*) ;

resource_size_t FUNC_7(struct nd_region *VAR_0)
{
 resource_size_t VAR_1 = 0, VAR_2, VAR_3;
 int VAR_4;

 FUNC_0(!FUNC_3(&VAR_0->dev));

 retry:
 VAR_2 = 0;
 VAR_3 = VAR_1;
 for (VAR_4 = 0; VAR_4 < VAR_0->ndr_mappings; VAR_4++) {
  struct nd_mapping *VAR_5 = &VAR_0->mapping[VAR_4];
  struct nvdimm_drvdata *VAR_6 = FUNC_6(VAR_5);


  if (!VAR_6)
   return 0;

  if (FUNC_1(&VAR_0->dev)) {
   VAR_2 += FUNC_5(VAR_0,
     VAR_5, &VAR_3);
   if (VAR_3 > VAR_1) {
    VAR_1 = VAR_3;
    goto retry;
   }
  } else if (FUNC_2(&VAR_0->dev))
   VAR_2 += FUNC_4(VAR_0);
 }

 return VAR_2;
}
