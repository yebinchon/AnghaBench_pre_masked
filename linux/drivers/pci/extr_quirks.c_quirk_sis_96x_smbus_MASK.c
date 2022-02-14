
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,char*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 u8 VAR_1 = 0;
 FUNC_1(VAR_0, 0x77, &VAR_1);
 if (VAR_1 & 0x10) {
  FUNC_0(VAR_0, "Enabling SiS 96x SMBus\n");
  FUNC_2(VAR_0, 0x77, VAR_1 & ~0x10);
 }
}
