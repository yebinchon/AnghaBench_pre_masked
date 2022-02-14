
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int num_flush; int flags; } ;
struct nd_region_data {int hints_shift; } ;
struct device {int dummy; } ;
struct nd_region {int ndr_mappings; struct device dev; struct nd_mapping* mapping; } ;
struct nd_mapping {struct nvdimm* nvdimm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,struct nd_region_data*) ;
 struct nd_region_data* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (struct nd_region_data*,int,int ) ;
 int FUNC_5 (struct nd_region_data*,int,int ,int *) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,struct nvdimm*,int,struct nd_region_data*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

int FUNC_10(struct nd_region *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;
 struct nd_region_data *VAR_8;
 struct device *VAR_9 = &VAR_4->dev;
 size_t VAR_10 = sizeof(void *);

 FUNC_6(&VAR_4->dev);
 for (VAR_5 = 0; VAR_5 < VAR_4->ndr_mappings; VAR_5++) {
  struct nd_mapping *VAR_11 = &VAR_4->mapping[VAR_5];
  struct nvdimm *VAR_12 = VAR_11->nvdimm;

  if (FUNC_9(VAR_3, &VAR_12->flags)) {
   FUNC_7(&VAR_4->dev);
   return -VAR_0;
  }


  VAR_10 += sizeof(void *);
  VAR_7 = FUNC_3(VAR_7, VAR_12->num_flush);
  if (!VAR_12->num_flush)
   continue;
  VAR_10 += VAR_12->num_flush * sizeof(void *);
 }
 FUNC_7(&VAR_4->dev);

 VAR_8 = FUNC_1(VAR_9, sizeof(*VAR_8) + VAR_10, VAR_2);
 if (!VAR_8)
  return -VAR_1;
 FUNC_0(VAR_9, VAR_8);

 if (!VAR_7)
  return 0;

 VAR_8->hints_shift = FUNC_2(VAR_7);
 for (VAR_5 = 0; VAR_5 < VAR_4->ndr_mappings; VAR_5++) {
  struct nd_mapping *VAR_13 = &VAR_4->mapping[VAR_5];
  struct nvdimm *VAR_14 = VAR_13->nvdimm;
  int VAR_15 = FUNC_8(&VAR_4->dev, VAR_14, VAR_5, VAR_8);

  if (VAR_15)
   return VAR_15;
 }





 for (VAR_5 = 0; VAR_5 < VAR_4->ndr_mappings - 1; VAR_5++) {

  if (!FUNC_4(VAR_8, VAR_5, 0))
   continue;

  for (VAR_6 = VAR_5 + 1; VAR_6 < VAR_4->ndr_mappings; VAR_6++)
   if (FUNC_4(VAR_8, VAR_5, 0) ==
       FUNC_4(VAR_8, VAR_6, 0))
    FUNC_5(VAR_8, VAR_6, 0, ((void*)0));
 }

 return 0;
}
