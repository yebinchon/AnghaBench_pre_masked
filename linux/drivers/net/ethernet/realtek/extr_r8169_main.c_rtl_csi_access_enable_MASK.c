
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl8169_private {int dev; struct pci_dev* pci_dev; } ;
struct pci_dev {int cfg_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int,int) ;
 int FUNC_2 (struct rtl8169_private*,int) ;
 int FUNC_3 (struct rtl8169_private*,int,int) ;

__attribute__((used)) static void FUNC_4(struct rtl8169_private *VAR_1, u8 VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pci_dev;
 u32 VAR_4;





 if (VAR_3->cfg_size > 0x070f &&
     FUNC_1(VAR_3, 0x070f, VAR_2) == VAR_0)
  return;

 FUNC_0(VAR_1->dev,
  "No native access to PCI extended config space, falling back to CSI\n");
 VAR_4 = FUNC_2(VAR_1, 0x070c) & 0x00ffffff;
 FUNC_3(VAR_1, 0x070c, VAR_4 | VAR_2 << 24);
}
