
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_drvdata {int dummy; } ;
struct device {int dummy; } ;


 struct nvdimm_drvdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct nvdimm_drvdata*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct nvdimm_drvdata *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return 0;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0, ((void*)0));
 FUNC_3(VAR_0);
 FUNC_4(VAR_1);

 return 0;
}
