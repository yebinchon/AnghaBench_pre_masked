
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_cell {int dummy; } ;
struct device {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvmem_cell* FUNC_0 (int ) ;
 int FUNC_1 (struct nvmem_cell*) ;
 int FUNC_2 (struct nvmem_cell*) ;
 struct nvmem_cell* FUNC_3 (struct device*,char const*) ;
 struct nvmem_cell* FUNC_4 (scalar_t__,char const*) ;

struct nvmem_cell *FUNC_5(struct device *VAR_2, const char *VAR_3)
{
 struct nvmem_cell *VAR_4;

 if (VAR_2->of_node) {
  VAR_4 = FUNC_4(VAR_2->of_node, VAR_3);
  if (!FUNC_1(VAR_4) || FUNC_2(VAR_4) == -VAR_1)
   return VAR_4;
 }


 if (!VAR_3)
  return FUNC_0(-VAR_0);

 return FUNC_3(VAR_2, VAR_3);
}
