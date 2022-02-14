
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int revision; } ;


 int FUNC_0 (struct pci_dev*,char*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 u16 VAR_1;

 if (VAR_0->revision != 0x04)
  return;
 FUNC_1(VAR_0, 0x40, &VAR_1);
 if (VAR_1 & (1<<6)) {
  VAR_1 &= ~(1<<6);
  FUNC_2(VAR_0, 0x40, VAR_1);
  FUNC_0(VAR_0, "C0 revision 450NX. Disabling PCI restreaming\n");
 }
}
