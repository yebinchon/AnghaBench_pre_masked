
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl8169_private {TYPE_2__* phydev; int napi; } ;
struct pci_dev {int dev; } ;
struct net_device {int perm_addr; } ;
struct TYPE_3__ {int bus; } ;
struct TYPE_4__ {TYPE_1__ mdio; } ;


 int FUNC_0 (int ) ;
 struct rtl8169_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct net_device* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct rtl8169_private*) ;
 int FUNC_7 (struct rtl8169_private*) ;
 int FUNC_8 (struct rtl8169_private*,int ) ;
 int FUNC_9 (struct rtl8169_private*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct rtl8169_private *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_6(VAR_2))
  FUNC_7(VAR_2);

 FUNC_2(&VAR_2->napi);

 FUNC_10(VAR_1);
 FUNC_0(VAR_2->phydev->mdio.bus);

 FUNC_9(VAR_2);

 if (FUNC_3(VAR_0))
  FUNC_5(&VAR_0->dev);


 FUNC_8(VAR_2, VAR_1->perm_addr);
}
