
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvdimm_drvdata {int dev; } ;
struct nd_namespace_index {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,unsigned long*) ;
 scalar_t__ FUNC_2 (unsigned long*,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nvdimm_drvdata*,struct nd_namespace_index**,unsigned long**,scalar_t__*) ;

u32 FUNC_5(struct nvdimm_drvdata *VAR_1)
{
 struct nd_namespace_index *VAR_2;
 unsigned long *VAR_3;
 u32 VAR_4, VAR_5;

 if (!FUNC_4(VAR_1, &VAR_2, &VAR_3, &VAR_4))
  return VAR_0;

 FUNC_0(!FUNC_3(VAR_1->dev));

 VAR_5 = FUNC_2(VAR_3, VAR_4, 0);
 if (VAR_5 == VAR_4)
  return VAR_0;

 FUNC_1(VAR_5, VAR_3);

 return VAR_5;
}
