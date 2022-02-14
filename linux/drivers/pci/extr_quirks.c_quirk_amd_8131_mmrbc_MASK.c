
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int revision; TYPE_1__* subordinate; } ;
struct TYPE_2__ {int bus_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{
 if (VAR_1->subordinate && VAR_1->revision <= 0x12) {
  FUNC_0(VAR_1, "AMD8131 rev %x detected; disabling PCI-X MMRBC\n",
    VAR_1->revision);
  VAR_1->subordinate->bus_flags |= VAR_0;
 }
}
