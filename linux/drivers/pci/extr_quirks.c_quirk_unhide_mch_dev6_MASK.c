
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 u8 VAR_1;

 if (FUNC_1(VAR_0, 0xF4, &VAR_1) == 0 && !(VAR_1 & 0x02)) {
  FUNC_0(VAR_0, "Enabling MCH 'Overflow' Device\n");
  FUNC_2(VAR_0, 0xF4, VAR_1 | 0x02);
 }
}
