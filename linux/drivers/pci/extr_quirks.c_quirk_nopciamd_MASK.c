
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_2)
{
 u8 VAR_3;
 FUNC_1(VAR_2, 0x08, &VAR_3);
 if (VAR_3 == 0x13) {

  FUNC_0(VAR_2, "Chipset erratum: Disabling direct PCI/AGP transfers\n");
  VAR_1 |= VAR_0;
 }
}
