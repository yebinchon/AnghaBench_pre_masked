
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {scalar_t__ device_id; int pci_width; char* mem_map_registers; scalar_t__ pci_x; int flags; int pci_slot; int chip_rev_id; int index; struct pci_dev* pdev; } ;
struct pci_dev {char* irq; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*,char*,...) ;
 struct ql3_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ql3_adapter*,int ,struct net_device*,char*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4)
{
 struct ql3_adapter *VAR_5 = FUNC_1(VAR_4);
 struct pci_dev *VAR_6 = VAR_5->pdev;

 FUNC_0(VAR_4,
      "%s Adapter %d RevisionID %d found %s on PCI slot %d\n",
      VAR_0, VAR_5->index, VAR_5->chip_rev_id,
      VAR_5->device_id == VAR_1 ? "QLA3032" : "QLA3022",
      VAR_5->pci_slot);
 FUNC_0(VAR_4, "%s Interface\n",
  FUNC_3(VAR_2, &VAR_5->flags) ? "OPTICAL" : "COPPER");




 FUNC_0(VAR_4, "Bus interface is %s %s\n",
      ((VAR_5->pci_width == 64) ? "64-bit" : "32-bit"),
      ((VAR_5->pci_x) ? "PCI-X" : "PCI"));

 FUNC_0(VAR_4, "mem  IO base address adjusted = 0x%p\n",
      VAR_5->mem_map_registers);
 FUNC_0(VAR_4, "Interrupt number = %d\n", VAR_6->irq);

 FUNC_2(VAR_5, VAR_3, VAR_4, "MAC address %pM\n", VAR_4->dev_addr);
}
