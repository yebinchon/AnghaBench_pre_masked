
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct nvdimm*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 struct nvdimm* FUNC_3 (struct device*) ;

int FUNC_4(struct device *VAR_0)
{
 struct nvdimm *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(VAR_0);
 return VAR_2;
}
