
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ mac_version; int phydev; int pci_dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rtl8169_private*,int,int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rtl8169_private*,int ,struct net_device*,char*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4, struct rtl8169_private *VAR_5)
{
 FUNC_5(VAR_4);

 if (VAR_5->mac_version <= VAR_2) {
  FUNC_3(VAR_5->pci_dev, VAR_1, 0x40);
  FUNC_3(VAR_5->pci_dev, VAR_0, 0x08);
  FUNC_2(VAR_5, VAR_3, VAR_4,
     "Set MAC Reg C+CR Offset 0x82h = 0x01h\n");
  FUNC_0(VAR_5, 0x82, 0x01);
 }


 FUNC_4(VAR_5->phydev);

 FUNC_1(VAR_5->phydev);
}
