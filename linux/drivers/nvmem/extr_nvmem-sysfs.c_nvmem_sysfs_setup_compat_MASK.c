
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* name; int * key; } ;
struct TYPE_8__ {int * private; TYPE_1__ attr; int size; } ;
struct nvmem_device {int flags; int dev; TYPE_2__ eeprom; scalar_t__ base_dev; int size; scalar_t__ read_only; } ;
struct nvmem_config {scalar_t__ base_dev; scalar_t__ root_only; int compat; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (scalar_t__,TYPE_2__*) ;
 int VAR_6 ;

int FUNC_2(struct nvmem_device *VAR_7,
         const struct nvmem_config *VAR_8)
{
 int VAR_9;

 if (!VAR_8->compat)
  return 0;

 if (!VAR_8->base_dev)
  return -VAR_0;

 if (VAR_7->read_only) {
  if (VAR_8->root_only)
   VAR_7->eeprom = VAR_3;
  else
   VAR_7->eeprom = VAR_2;
 } else {
  if (VAR_8->root_only)
   VAR_7->eeprom = VAR_5;
  else
   VAR_7->eeprom = VAR_4;
 }
 VAR_7->eeprom.attr.name = "eeprom";
 VAR_7->eeprom.size = VAR_7->size;



 VAR_7->eeprom.private = &VAR_7->dev;
 VAR_7->base_dev = VAR_8->base_dev;

 VAR_9 = FUNC_1(VAR_7->base_dev, &VAR_7->eeprom);
 if (VAR_9) {
  FUNC_0(&VAR_7->dev,
   "Failed to create eeprom binary file %d\n", VAR_9);
  return VAR_9;
 }

 VAR_7->flags |= VAR_1;

 return 0;
}
