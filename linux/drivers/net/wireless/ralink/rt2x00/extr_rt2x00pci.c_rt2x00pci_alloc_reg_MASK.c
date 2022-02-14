
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int base; } ;
struct rt2x00_dev {void* rf; TYPE_1__* ops; void* eeprom; TYPE_2__ csr; int dev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int rf_size; int eeprom_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct rt2x00_dev *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_4(VAR_2->dev);

 VAR_2->csr.base = FUNC_1(VAR_3, 0);
 if (!VAR_2->csr.base)
  goto exit;

 VAR_2->eeprom = FUNC_0(VAR_2->ops->eeprom_size, VAR_1);
 if (!VAR_2->eeprom)
  goto exit;

 VAR_2->rf = FUNC_0(VAR_2->ops->rf_size, VAR_1);
 if (!VAR_2->rf)
  goto exit;

 return 0;

exit:
 FUNC_2("Failed to allocate registers\n");

 FUNC_3(VAR_2);

 return -VAR_0;
}
