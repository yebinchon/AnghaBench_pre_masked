
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvmem_device*,unsigned int,void*,size_t) ;

int FUNC_1(struct nvmem_device *VAR_1,
         unsigned int VAR_2,
         size_t VAR_3, void *VAR_4)
{
 int VAR_5;

 if (!VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4, VAR_3);

 if (VAR_5)
  return VAR_5;


 return VAR_3;
}
