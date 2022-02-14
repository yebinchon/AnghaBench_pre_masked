
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8169_private {int phydev; TYPE_1__* pci_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 () ;
 struct rtl8169_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_0)
{
 struct rtl8169_private *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_2(VAR_0)) {
  FUNC_6(VAR_1);
  FUNC_4(&VAR_1->pci_dev->dev);
 } else {
  FUNC_5(&VAR_1->pci_dev->dev);
 }

 if (FUNC_0())
  FUNC_3(VAR_1->phydev);
}
