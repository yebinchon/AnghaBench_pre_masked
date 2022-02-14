
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl8169_private {struct pci_dev* pci_dev; } ;
struct pci_dev {scalar_t__ broken_parity_status; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct rtl8169_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rtl8169_private*,int ,struct net_device*,char*,int,int) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (struct rtl8169_private*,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_11)
{
 struct rtl8169_private *VAR_12 = FUNC_0(VAR_11);
 struct pci_dev *VAR_13 = VAR_12->pci_dev;
 u16 VAR_14, VAR_15;

 FUNC_2(VAR_13, VAR_0, &VAR_15);
 FUNC_2(VAR_13, VAR_3, &VAR_14);

 FUNC_1(VAR_12, VAR_10, VAR_11, "PCI error (cmd = 0x%04x, status = 0x%04x)\n",
    VAR_15, VAR_14);
 if (VAR_13->broken_parity_status)
  VAR_15 &= ~VAR_1;
 else
  VAR_15 |= VAR_2 | VAR_1;

 FUNC_3(VAR_13, VAR_0, VAR_15);

 FUNC_3(VAR_13, VAR_3,
  VAR_14 & (VAR_4 |
  VAR_7 | VAR_5 |
  VAR_6 | VAR_8));

 FUNC_4(VAR_12, VAR_9);
}
