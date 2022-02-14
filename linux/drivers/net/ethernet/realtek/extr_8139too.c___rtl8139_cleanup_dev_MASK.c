
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8139_private {scalar_t__ mmio_addr; struct pci_dev* pci_dev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 struct rtl8139_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_5 (struct net_device *VAR_0)
{
 struct rtl8139_private *VAR_1 = FUNC_2(VAR_0);
 struct pci_dev *VAR_2;

 FUNC_0 (VAR_0 != ((void*)0));
 FUNC_0 (VAR_1->pci_dev != ((void*)0));
 VAR_2 = VAR_1->pci_dev;

 if (VAR_1->mmio_addr)
  FUNC_3 (VAR_2, VAR_1->mmio_addr);


 FUNC_4 (VAR_2);

 FUNC_1(VAR_0);
}
