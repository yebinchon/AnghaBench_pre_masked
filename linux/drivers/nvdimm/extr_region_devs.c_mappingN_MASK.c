
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int dev; } ;
struct nd_region {int ndr_mappings; struct nd_mapping* mapping; } ;
struct nd_mapping {int position; int size; int start; struct nvdimm* nvdimm; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,char*,int ,int ,int ) ;
 struct nd_region* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, char *VAR_2, int VAR_3)
{
 struct nd_region *VAR_4 = FUNC_2(VAR_1);
 struct nd_mapping *VAR_5;
 struct nvdimm *VAR_6;

 if (VAR_3 >= VAR_4->ndr_mappings)
  return -VAR_0;
 VAR_5 = &VAR_4->mapping[VAR_3];
 VAR_6 = VAR_5->nvdimm;

 return FUNC_1(VAR_2, "%s,%llu,%llu,%d\n", FUNC_0(&VAR_6->dev),
   VAR_5->start, VAR_5->size,
   VAR_5->position);
}
