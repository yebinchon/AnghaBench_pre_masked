
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int pcie_mpss; int dev; } ;
struct et131x_adapter {scalar_t__ rom_addr; int addr; int has_eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (struct et131x_adapter*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int ,int const) ;
 scalar_t__ FUNC_8 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_9(struct et131x_adapter *VAR_6,
      struct pci_dev *VAR_7)
{
 u16 VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10 < 0)
  goto out;

 if (!FUNC_4(VAR_7)) {
  FUNC_0(&VAR_7->dev, "Missing PCIe capabilities\n");
  goto err_out;
 }


 VAR_8 = VAR_7->pcie_mpss;

 if (VAR_8 < 2) {
  static const u16 VAR_11[2] = { 0x76, 0xD0 };
  static const u16 VAR_12[2] = { 0x1E0, 0x2ED };

  if (FUNC_7(VAR_7, VAR_1,
       VAR_11[VAR_8])) {
   FUNC_0(&VAR_7->dev,
    "Could not write PCI config space for ACK/NAK\n");
   goto err_out;
  }
  if (FUNC_7(VAR_7, VAR_4,
       VAR_12[VAR_8])) {
   FUNC_0(&VAR_7->dev,
    "Could not write PCI config space for Replay Timer\n");
   goto err_out;
  }
 }




 if (FUNC_6(VAR_7, VAR_2, 0x11)) {
  FUNC_0(&VAR_7->dev,
   "Could not write PCI config space for Latency Timers\n");
  goto err_out;
 }


 if (FUNC_8(VAR_7, 2048)) {
  FUNC_0(&VAR_7->dev,
   "Couldn't change PCI config space for Max read size\n");
  goto err_out;
 }




 if (!VAR_6->has_eeprom) {
  FUNC_1(VAR_6);
  return 0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (FUNC_5(VAR_7, VAR_3 + VAR_9,
      VAR_6->rom_addr + VAR_9)) {
   FUNC_0(&VAR_7->dev, "Could not read PCI config space for MAC address\n");
   goto err_out;
  }
 }
 FUNC_3(VAR_6->addr, VAR_6->rom_addr);
out:
 return VAR_10;
err_out:
 VAR_10 = -VAR_0;
 goto out;
}
