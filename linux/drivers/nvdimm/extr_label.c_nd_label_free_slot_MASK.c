
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvdimm_drvdata {int dev; } ;
struct nd_namespace_index {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvdimm_drvdata*,struct nd_namespace_index**,unsigned long**,scalar_t__*) ;
 int FUNC_3 (scalar_t__,unsigned long*) ;

bool FUNC_4(struct nvdimm_drvdata *VAR_0, u32 VAR_1)
{
 struct nd_namespace_index *VAR_2;
 unsigned long *VAR_3;
 u32 VAR_4;

 if (!FUNC_2(VAR_0, &VAR_2, &VAR_3, &VAR_4))
  return 0;

 FUNC_0(!FUNC_1(VAR_0->dev));

 if (VAR_1 < VAR_4)
  return !FUNC_3(VAR_1, VAR_3);
 return 0;
}
