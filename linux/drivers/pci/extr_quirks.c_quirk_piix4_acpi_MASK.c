
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,char*,int,int) ;
 int FUNC_2 (struct pci_dev*,char*,int,int) ;
 int FUNC_3 (struct pci_dev*,int,int,scalar_t__,char*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1)
{
 u32 VAR_2;

 FUNC_3(VAR_1, 0x40, 64, VAR_0, "PIIX4 ACPI");
 FUNC_3(VAR_1, 0x90, 16, VAR_0+1, "PIIX4 SMB");


 FUNC_0(VAR_1, 0x5c, &VAR_2);

 FUNC_1(VAR_1, "PIIX4 devres B", 0x60, 3 << 21);
 FUNC_1(VAR_1, "PIIX4 devres C", 0x64, 3 << 21);




 if (VAR_2 & (1 << 29)) {
  FUNC_1(VAR_1, "PIIX4 devres E", 0x68, 1 << 20);
  FUNC_2(VAR_1, "PIIX4 devres F", 0x6c, 1 << 7);
 }

 if (VAR_2 & (1 << 30)) {
  FUNC_1(VAR_1, "PIIX4 devres G", 0x70, 1 << 20);
  FUNC_2(VAR_1, "PIIX4 devres H", 0x74, 1 << 7);
 }
 FUNC_1(VAR_1, "PIIX4 devres I", 0x78, 1 << 20);
 FUNC_1(VAR_1, "PIIX4 devres J", 0x7c, 1 << 20);
}
