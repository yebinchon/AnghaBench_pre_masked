
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int config_size; } ;
struct nvdimm_drvdata {TYPE_1__ nsarea; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvdimm_drvdata*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nvdimm_drvdata*) ;

int FUNC_3(struct nvdimm_drvdata *VAR_1)
{
 u32 VAR_2, VAR_3;

 VAR_2 = VAR_1->nsarea.config_size / FUNC_2(VAR_1);
 VAR_3 = FUNC_1(VAR_2) / VAR_0;

 return FUNC_0(VAR_1, VAR_0 * VAR_3);
}
