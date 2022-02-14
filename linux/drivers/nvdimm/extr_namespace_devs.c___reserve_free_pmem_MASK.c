
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int dummy; } ;
struct nd_region {int ndr_mappings; int dev; struct nd_mapping* mapping; } ;
struct nd_mapping {struct nvdimm* nvdimm; } ;
struct nd_label_id {int id; } ;
struct device {int dummy; } ;
typedef scalar_t__ resource_size_t ;
typedef int label_id ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,char*,scalar_t__,unsigned long long) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct nd_label_id*,int ,int) ;
 scalar_t__ FUNC_3 (struct nd_region*,struct nd_mapping*,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct nd_region*,struct nd_mapping*,struct nd_label_id*,scalar_t__) ;
 int FUNC_5 (int ,char*) ;
 struct nd_region* FUNC_6 (struct device*) ;

int FUNC_7(struct device *VAR_1, void *VAR_2)
{
 struct nvdimm *VAR_3 = VAR_2;
 struct nd_region *VAR_4;
 struct nd_label_id VAR_5;
 int VAR_6;

 if (!FUNC_1(VAR_1))
  return 0;

 VAR_4 = FUNC_6(VAR_1);
 if (VAR_4->ndr_mappings == 0)
  return 0;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_5(VAR_5.id, "pmem-reserve");
 for (VAR_6 = 0; VAR_6 < VAR_4->ndr_mappings; VAR_6++) {
  struct nd_mapping *VAR_7 = &VAR_4->mapping[VAR_6];
  resource_size_t VAR_8, VAR_9 = 0;

  if (VAR_7->nvdimm != VAR_3)
   continue;

  VAR_8 = FUNC_3(VAR_4, VAR_7, &VAR_9);
  if (VAR_8 == 0)
   return 0;
  VAR_9 = FUNC_4(VAR_4, VAR_7, &VAR_5, VAR_8);
  FUNC_0(&VAR_4->dev, VAR_9,
    "pmem reserve underrun: %#llx of %#llx bytes\n",
    (unsigned long long) VAR_8 - VAR_9,
    (unsigned long long) VAR_8);
  return VAR_9 ? -VAR_0 : 0;
 }

 return 0;
}
