
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct cobalt {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_3(struct cobalt *VAR_0, struct pci_dev *VAR_1)
{
 u16 VAR_2, VAR_3;
 u32 VAR_4, VAR_5;

 FUNC_2(VAR_1, 0x52, &VAR_2);
 FUNC_0("MSI %s\n", VAR_2 & 1 ? "enable" : "disable");
 FUNC_0("MSI multiple message: Capable %u. Enable %u\n",
      (1 << ((VAR_2 >> 1) & 7)), (1 << ((VAR_2 >> 4) & 7)));
 if (VAR_2 & 0x80)
  FUNC_0("MSI: 64-bit address capable\n");
 FUNC_1(VAR_1, 0x54, &VAR_4);
 FUNC_1(VAR_1, 0x58, &VAR_5);
 FUNC_2(VAR_1, 0x5c, &VAR_3);
 if (VAR_2 & 0x80)
  FUNC_0("MSI: Address 0x%08x%08x. Data 0x%04x\n",
    VAR_5, VAR_4, VAR_3);
 else
  FUNC_0("MSI: Address 0x%08x. Data 0x%04x\n",
    VAR_4, VAR_3);
}
