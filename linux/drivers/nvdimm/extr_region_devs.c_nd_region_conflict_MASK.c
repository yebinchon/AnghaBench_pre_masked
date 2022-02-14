
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus {int dev; } ;
struct nd_region {int dev; } ;
struct conflict_context {int size; int start; struct nd_region* nd_region; } ;
typedef int resource_size_t ;


 int FUNC_0 (int *,struct conflict_context*,int ) ;
 int VAR_0 ;
 struct nvdimm_bus* FUNC_1 (int *) ;

int FUNC_2(struct nd_region *VAR_1, resource_size_t VAR_2,
  resource_size_t VAR_3)
{
 struct nvdimm_bus *VAR_4 = FUNC_1(&VAR_1->dev);
 struct conflict_context VAR_5 = {
  .nd_region = VAR_1,
  .start = VAR_2,
  .size = VAR_3,
 };

 return FUNC_0(&VAR_4->dev, &VAR_5, VAR_0);
}
