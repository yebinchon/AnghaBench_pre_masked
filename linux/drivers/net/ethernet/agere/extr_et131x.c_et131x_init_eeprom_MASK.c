
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int revision; int dev; } ;
struct et131x_adapter {int has_eeprom; int* eeprom_data; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct et131x_adapter*,int,int*) ;
 scalar_t__ FUNC_2 (struct et131x_adapter*,int,int const) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct et131x_adapter *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 u8 VAR_4;

 FUNC_3(VAR_3, VAR_1, &VAR_4);







 if (FUNC_3(VAR_3, VAR_1, &VAR_4)) {
  FUNC_0(&VAR_3->dev,
   "Could not read PCI config space for EEPROM Status\n");
  return -VAR_0;
 }




 if (VAR_4 & 0x4C) {
  int VAR_5 = 0;

  if (VAR_3->revision == 0x01) {
   int VAR_6;
   static const u8 VAR_7[4] = { 0xFE, 0x13, 0x10, 0xFF };





   for (VAR_6 = 0; VAR_6 < 3; VAR_6++)
    if (FUNC_2(VAR_2, VAR_6, VAR_7[VAR_6]) < 0)
     VAR_5 = 1;
  }
  if (VAR_3->revision != 0x01 || VAR_5) {
   FUNC_0(&VAR_3->dev,
    "Fatal EEPROM Status Error - 0x%04x\n",
    VAR_4);







   VAR_2->has_eeprom = 0;
   return -VAR_0;
  }
 }
 VAR_2->has_eeprom = 1;




 FUNC_1(VAR_2, 0x70, &VAR_2->eeprom_data[0]);
 FUNC_1(VAR_2, 0x71, &VAR_2->eeprom_data[1]);

 if (VAR_2->eeprom_data[0] != 0xcd)

  VAR_2->eeprom_data[1] = 0x00;

 return 0;
}
