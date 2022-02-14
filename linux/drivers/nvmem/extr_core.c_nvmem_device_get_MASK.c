
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {int dummy; } ;
struct device {scalar_t__ of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvmem_device*) ;
 int FUNC_1 (struct nvmem_device*) ;
 struct nvmem_device* FUNC_2 (int *,char const*) ;
 struct nvmem_device* FUNC_3 (scalar_t__,char const*) ;

struct nvmem_device *FUNC_4(struct device *VAR_1, const char *VAR_2)
{
 if (VAR_1->of_node) {
  struct nvmem_device *VAR_3;

  VAR_3 = FUNC_3(VAR_1->of_node, VAR_2);

  if (!FUNC_0(VAR_3) || FUNC_1(VAR_3) == -VAR_0)
   return VAR_3;

 }

 return FUNC_2(((void*)0), VAR_2);
}
