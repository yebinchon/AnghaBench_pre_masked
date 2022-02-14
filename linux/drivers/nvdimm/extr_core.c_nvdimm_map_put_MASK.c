
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_map {int kref; struct nvdimm_bus* nvdimm_bus; } ;
struct nvdimm_bus {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct nvdimm_map *VAR_2 = VAR_1;
 struct nvdimm_bus *VAR_3 = VAR_2->nvdimm_bus;

 FUNC_1(&VAR_3->dev);
 FUNC_0(&VAR_2->kref, VAR_0);
 FUNC_2(&VAR_3->dev);
}
