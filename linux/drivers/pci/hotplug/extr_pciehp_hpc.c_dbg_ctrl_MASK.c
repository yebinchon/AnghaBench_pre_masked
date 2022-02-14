
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct controller {int slot_cap; TYPE_1__* pcie; } ;
struct TYPE_2__ {struct pci_dev* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct controller*,char*,int ) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct controller *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pcie->port;
 u16 VAR_4;

 FUNC_0(VAR_2, "Slot Capabilities      : 0x%08x\n", VAR_2->slot_cap);
 FUNC_1(VAR_3, VAR_1, &VAR_4);
 FUNC_0(VAR_2, "Slot Status            : 0x%04x\n", VAR_4);
 FUNC_1(VAR_3, VAR_0, &VAR_4);
 FUNC_0(VAR_2, "Slot Control           : 0x%04x\n", VAR_4);
}
