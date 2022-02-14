
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int flags; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct nvdimm* FUNC_1 (struct device*) ;

void FUNC_2(struct device *VAR_1)
{
 struct nvdimm *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, &VAR_2->flags);
}
