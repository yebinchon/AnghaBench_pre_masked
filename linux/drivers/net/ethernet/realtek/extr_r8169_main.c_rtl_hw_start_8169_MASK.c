
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ mac_version; int cp_cmd; int dev; int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct rtl8169_private*,int ,int) ;
 int FUNC_1 (struct rtl8169_private*,int ,int ) ;
 int FUNC_2 (struct rtl8169_private*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct rtl8169_private*,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct rtl8169_private*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct rtl8169_private *VAR_11)
{
 if (VAR_11->mac_version == VAR_8)
  FUNC_4(VAR_11->pci_dev, VAR_5, 0x08);

 FUNC_2(VAR_11, VAR_1, VAR_3);

 VAR_11->cp_cmd |= VAR_4;

 if (VAR_11->mac_version == VAR_6 ||
     VAR_11->mac_version == VAR_7) {
  FUNC_3(VAR_11, VAR_10, VAR_11->dev,
     "Set MAC Reg C+CR Offset 0xe0. Bit 3 and Bit 14 MUST be 1\n");
  VAR_11->cp_cmd |= (1 << 14);
 }

 FUNC_0(VAR_11, VAR_0, VAR_11->cp_cmd);

 FUNC_5(VAR_11, VAR_11->mac_version);

 FUNC_1(VAR_11, VAR_9, 0);


 FUNC_0(VAR_11, VAR_2, 0x0000);
}
