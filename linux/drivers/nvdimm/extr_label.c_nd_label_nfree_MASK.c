
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvdimm_drvdata {int dev; } ;
struct nd_namespace_index {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nvdimm_drvdata*) ;
 int FUNC_4 (struct nvdimm_drvdata*,struct nd_namespace_index**,unsigned long**,int *) ;

u32 FUNC_5(struct nvdimm_drvdata *VAR_0)
{
 struct nd_namespace_index *VAR_1;
 unsigned long *VAR_2;
 u32 VAR_3;

 FUNC_0(!FUNC_2(VAR_0->dev));

 if (!FUNC_4(VAR_0, &VAR_1, &VAR_2, &VAR_3))
  return FUNC_3(VAR_0);

 return FUNC_1(VAR_2, VAR_3);
}
