
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvdimm_drvdata {int dev; } ;
struct nd_mapping {int dummy; } ;
struct nd_label_ent {int * label; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct nvdimm_drvdata*,int ) ;
 struct nvdimm_drvdata* FUNC_2 (struct nd_mapping*) ;
 int FUNC_3 (struct nvdimm_drvdata*,int *) ;

__attribute__((used)) static void FUNC_4(struct nd_mapping *VAR_0,
  struct nd_label_ent *VAR_1)
{
 struct nvdimm_drvdata *VAR_2 = FUNC_2(VAR_0);
 u32 VAR_3 = FUNC_3(VAR_2, VAR_1->label);

 FUNC_0(VAR_2->dev, "free: %d\n", VAR_3);
 FUNC_1(VAR_2, VAR_3);
 VAR_1->label = ((void*)0);
}
