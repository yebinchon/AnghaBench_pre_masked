
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {int dummy; } ;
struct nvmem_cell_info {int dummy; } ;
struct nvmem_cell {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct nvmem_device*,struct nvmem_cell*,void*,int*) ;
 int FUNC_1 (struct nvmem_device*,struct nvmem_cell_info*,struct nvmem_cell*) ;

ssize_t FUNC_2(struct nvmem_device *VAR_1,
      struct nvmem_cell_info *VAR_2, void *VAR_3)
{
 struct nvmem_cell VAR_4;
 int VAR_5;
 ssize_t VAR_6;

 if (!VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_4, VAR_3, &VAR_6);
 if (VAR_5)
  return VAR_5;

 return VAR_6;
}
