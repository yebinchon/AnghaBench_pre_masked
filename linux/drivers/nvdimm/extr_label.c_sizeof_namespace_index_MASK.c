
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int config_size; } ;
struct nvdimm_drvdata {TYPE_1__ nsarea; int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct nvdimm_drvdata*) ;
 int FUNC_3 (struct nvdimm_drvdata*) ;

size_t FUNC_4(struct nvdimm_drvdata *VAR_0)
{
 u32 VAR_1, VAR_2, VAR_3;







 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = VAR_0->nsarea.config_size - VAR_1 * FUNC_3(VAR_0);
 VAR_3 = FUNC_0(VAR_1) * 2;
 if (VAR_3 <= VAR_2 && VAR_1 >= 2)
  return VAR_3 / 2;

 FUNC_1(VAR_0->dev, "label area (%d) too small to host (%d byte) labels\n",
   VAR_0->nsarea.config_size, FUNC_3(VAR_0));
 return 0;
}
