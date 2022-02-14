
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {int dummy; } ;
struct nvmem_cell {struct nvmem_device* nvmem; } ;


 int FUNC_0 (struct nvmem_device*) ;

void FUNC_1(struct nvmem_cell *VAR_0)
{
 struct nvmem_device *VAR_1 = VAR_0->nvmem;

 FUNC_0(VAR_1);
}
