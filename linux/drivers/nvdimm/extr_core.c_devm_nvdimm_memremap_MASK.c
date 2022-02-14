
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_map {void* mem; int kref; } ;
struct device {int dummy; } ;
typedef int resource_size_t ;


 struct nvdimm_map* FUNC_0 (struct device*,int ,size_t,unsigned long) ;
 scalar_t__ FUNC_1 (struct device*,int ,struct nvdimm_map*) ;
 struct nvdimm_map* FUNC_2 (struct device*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int VAR_0 ;

void *FUNC_6(struct device *VAR_1, resource_size_t VAR_2,
  size_t VAR_3, unsigned long VAR_4)
{
 struct nvdimm_map *VAR_5;

 FUNC_4(VAR_1);
 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  FUNC_3(&VAR_5->kref);
 FUNC_5(VAR_1);

 if (!VAR_5)
  return ((void*)0);

 if (FUNC_1(VAR_1, VAR_0, VAR_5))
  return ((void*)0);

 return VAR_5->mem;
}
