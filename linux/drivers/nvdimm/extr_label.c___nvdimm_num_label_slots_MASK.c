
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t config_size; } ;
struct nvdimm_drvdata {TYPE_1__ nsarea; } ;


 size_t FUNC_0 (struct nvdimm_drvdata*) ;

__attribute__((used)) static int FUNC_1(struct nvdimm_drvdata *VAR_0,
  size_t VAR_1)
{
 return (VAR_0->nsarea.config_size - VAR_1 * 2) /
   FUNC_0(VAR_0);
}
