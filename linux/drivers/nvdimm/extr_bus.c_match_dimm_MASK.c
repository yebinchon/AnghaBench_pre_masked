
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {long id; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 struct nvdimm* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 long VAR_2 = (long) VAR_1;

 if (FUNC_0(VAR_0)) {
  struct nvdimm *VAR_3 = FUNC_1(VAR_0);

  return VAR_3->id == VAR_2;
 }

 return 0;
}
