
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ saved_wolopts; } ;
struct pci_dev {int dummy; } ;
struct net_device {int perm_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtl8169_private* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct rtl8169_private*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct rtl8169_private*,int ) ;
 int FUNC_7 (struct rtl8169_private*) ;
 int FUNC_8 (struct rtl8169_private*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_1(VAR_3);
 struct rtl8169_private *VAR_5 = FUNC_0(VAR_4);

 FUNC_5(VAR_4);


 FUNC_6(VAR_5, VAR_4->perm_addr);

 FUNC_4(VAR_5);

 if (VAR_2 == VAR_1) {
  if (VAR_5->saved_wolopts) {
   FUNC_8(VAR_5);
   FUNC_7(VAR_5);
  }

  FUNC_3(VAR_3, 1);
  FUNC_2(VAR_3, VAR_0);
 }
}
