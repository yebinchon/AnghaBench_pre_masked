
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *,struct device_node*) ;
 int VAR_0 ;
 struct nvmem_device* FUNC_1 (struct device*) ;

__attribute__((used)) static struct nvmem_device *FUNC_2(struct device_node *VAR_1)
{
 struct device *VAR_2;

 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_0(&VAR_0, VAR_1);

 if (!VAR_2)
  return ((void*)0);

 return FUNC_1(VAR_2);
}
