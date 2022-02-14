
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {scalar_t__ read_only; } ;
struct nvmem_config {scalar_t__ root_only; } ;
struct attribute_group {int dummy; } ;


 struct attribute_group const** VAR_0 ;
 struct attribute_group const** VAR_1 ;
 struct attribute_group const** VAR_2 ;
 struct attribute_group const** VAR_3 ;

const struct attribute_group **FUNC_0(
     struct nvmem_device *VAR_4,
     const struct nvmem_config *VAR_5)
{
 if (VAR_5->root_only)
  return VAR_4->read_only ?
   VAR_1 :
   VAR_3;

 return VAR_4->read_only ? VAR_0 : VAR_2;
}
