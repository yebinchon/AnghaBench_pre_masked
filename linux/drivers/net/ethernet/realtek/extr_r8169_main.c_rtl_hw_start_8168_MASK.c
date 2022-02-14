
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ mac_version; int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct rtl8169_private*,int ,int) ;
 int FUNC_1 (struct rtl8169_private*,int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct rtl8169_private*) ;
 scalar_t__ FUNC_4 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_5(struct rtl8169_private *VAR_8)
{
 if (VAR_8->mac_version == VAR_5 ||
     VAR_8->mac_version == VAR_6)
  FUNC_2(VAR_8->pci_dev, VAR_3,
      VAR_4);

 if (FUNC_4(VAR_8))
  FUNC_1(VAR_8, VAR_2, VAR_0);
 else
  FUNC_1(VAR_8, VAR_2, VAR_7);

 FUNC_3(VAR_8);


 FUNC_0(VAR_8, VAR_1, 0x0000);
}
