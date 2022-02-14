
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct nvdimm {int dev; } ;
struct nd_region {size_t ndr_mappings; int id; int lane; struct nd_mapping* mapping; } ;
struct nd_mapping {struct nvdimm* nvdimm; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct nd_region*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 struct nd_region* FUNC_5 (struct device*) ;
 struct nd_region* FUNC_6 (struct device*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_1)
{
 struct nd_region *VAR_2 = FUNC_6(VAR_1);
 u16 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->ndr_mappings; VAR_3++) {
  struct nd_mapping *VAR_4 = &VAR_2->mapping[VAR_3];
  struct nvdimm *VAR_5 = VAR_4->nvdimm;

  FUNC_4(&VAR_5->dev);
 }
 FUNC_0(VAR_2->lane);
 FUNC_1(&VAR_0, VAR_2->id);
 if (FUNC_2(VAR_1))
  FUNC_3(FUNC_5(VAR_1));
 else
  FUNC_3(VAR_2);
}
