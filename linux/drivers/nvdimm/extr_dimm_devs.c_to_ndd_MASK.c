
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_drvdata {int dummy; } ;
struct nvdimm {int dev; } ;
struct nd_mapping {struct nvdimm* nvdimm; } ;


 int FUNC_0 (int) ;
 struct nvdimm_drvdata* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct nvdimm_drvdata *FUNC_3(struct nd_mapping *VAR_0)
{
 struct nvdimm *VAR_1 = VAR_0->nvdimm;

 FUNC_0(!FUNC_2(&VAR_1->dev));

 return FUNC_1(&VAR_1->dev);
}
