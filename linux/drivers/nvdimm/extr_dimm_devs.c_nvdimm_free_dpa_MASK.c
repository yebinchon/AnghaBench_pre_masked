
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int name; } ;
struct nvdimm_drvdata {int dpa; int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct resource*) ;

void FUNC_5(struct nvdimm_drvdata *VAR_0, struct resource *VAR_1)
{
 FUNC_0(!FUNC_2(VAR_0->dev));
 FUNC_3(VAR_1->name);
 FUNC_1(&VAR_0->dpa, VAR_1->start, FUNC_4(VAR_1));
}
