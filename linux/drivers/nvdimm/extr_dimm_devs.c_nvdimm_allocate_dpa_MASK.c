
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct nvdimm_drvdata {int dpa; int dev; } ;
struct nd_label_id {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct resource* FUNC_1 (int *,int ,int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (struct nd_label_id*,int,int ) ;

struct resource *FUNC_5(struct nvdimm_drvdata *VAR_1,
  struct nd_label_id *VAR_2, resource_size_t VAR_3,
  resource_size_t VAR_4)
{
 char *VAR_5 = FUNC_4(VAR_2, sizeof(*VAR_2), VAR_0);
 struct resource *VAR_6;

 if (!VAR_5)
  return ((void*)0);

 FUNC_0(!FUNC_2(VAR_1->dev));
 VAR_6 = FUNC_1(&VAR_1->dpa, VAR_3, VAR_4, VAR_5, 0);
 if (!VAR_6)
  FUNC_3(VAR_5);
 return VAR_6;
}
