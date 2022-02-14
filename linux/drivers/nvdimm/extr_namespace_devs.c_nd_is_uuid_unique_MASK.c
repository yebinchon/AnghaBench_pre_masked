
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvdimm_bus {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct nvdimm_bus* FUNC_3 (struct device*) ;

bool FUNC_4(struct device *VAR_1, u8 *VAR_2)
{
 struct nvdimm_bus *VAR_3 = FUNC_3(VAR_1);

 if (!VAR_3)
  return 0;
 FUNC_0(!FUNC_2(&VAR_3->dev));
 if (FUNC_1(&VAR_3->dev, VAR_2,
    VAR_0) != 0)
  return 0;
 return 1;
}
