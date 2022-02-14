
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {int eeprom; int base_dev; } ;
struct nvmem_config {scalar_t__ compat; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct nvmem_device *VAR_0,
         const struct nvmem_config *VAR_1)
{
 if (VAR_1->compat)
  FUNC_0(VAR_0->base_dev, &VAR_0->eeprom);
}
