
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct alcor_pci_priv {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;

__attribute__((used)) static int FUNC_3(struct alcor_pci_priv *VAR_1,
         struct pci_dev *VAR_2)
{
 int VAR_3;
 u8 VAR_4;
 u32 VAR_5;

 VAR_3 = VAR_0;
 FUNC_1(VAR_2, VAR_3, &VAR_4);
 if (!VAR_4)
  return 0;

 VAR_3 = (int)VAR_4;
 while (1) {
  FUNC_2(VAR_2, VAR_3, &VAR_5);
  if (VAR_5 == 0xffffffff) {
   FUNC_0(VAR_1->dev, "find_cap_offset invalid value %x.\n",
    VAR_5);
   return 0;
  }

  if ((VAR_5 & 0xff) == 0x10) {
   FUNC_0(VAR_1->dev, "pcie cap offset: %x\n", VAR_3);
   return VAR_3;
  }

  if ((VAR_5 & 0xff00) == 0x00) {
   FUNC_0(VAR_1->dev, "pci_find_cap_offset invalid value %x.\n",
    VAR_5);
   break;
  }
  VAR_3 = (int)((VAR_5 >> 8) & 0xff);
 }

 return 0;
}
