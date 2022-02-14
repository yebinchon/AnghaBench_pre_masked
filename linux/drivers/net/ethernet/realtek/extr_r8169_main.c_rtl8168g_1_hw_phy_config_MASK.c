
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int phydev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct rtl8169_private*) ;
 int FUNC_4 (struct rtl8169_private*) ;
 int FUNC_5 (struct rtl8169_private*) ;
 int FUNC_6 (struct rtl8169_private*) ;
 int FUNC_7 (struct rtl8169_private*) ;
 int FUNC_8 (struct rtl8169_private*,int,int,int) ;
 int FUNC_9 (struct rtl8169_private*,int,int) ;

__attribute__((used)) static void FUNC_10(struct rtl8169_private *VAR_0)
{
 int VAR_1;

 FUNC_6(VAR_0);

 VAR_1 = FUNC_2(VAR_0->phydev, 0x0a46, 0x10);
 if (VAR_1 & FUNC_0(8))
  FUNC_1(VAR_0->phydev, 0x0bcc, 0x12, FUNC_0(15), 0);
 else
  FUNC_1(VAR_0->phydev, 0x0bcc, 0x12, 0, FUNC_0(15));

 VAR_1 = FUNC_2(VAR_0->phydev, 0x0a46, 0x13);
 if (VAR_1 & FUNC_0(8))
  FUNC_1(VAR_0->phydev, 0x0c41, 0x15, 0, FUNC_0(1));
 else
  FUNC_1(VAR_0->phydev, 0x0c41, 0x15, FUNC_0(1), 0);


 FUNC_1(VAR_0->phydev, 0x0a44, 0x11, 0, FUNC_0(3) | FUNC_0(2));

 FUNC_5(VAR_0);


 FUNC_1(VAR_0->phydev, 0x0a4b, 0x11, 0, FUNC_0(2));


 FUNC_9(VAR_0, 0x1f, 0x0a43);
 FUNC_9(VAR_0, 0x13, 0x8012);
 FUNC_8(VAR_0, 0x14, 0x8000, 0x0000);

 FUNC_1(VAR_0->phydev, 0x0c42, 0x11, FUNC_0(13), FUNC_0(14));


 FUNC_9(VAR_0, 0x1f, 0x0bcd);
 FUNC_9(VAR_0, 0x14, 0x5065);
 FUNC_9(VAR_0, 0x14, 0xd065);
 FUNC_9(VAR_0, 0x1f, 0x0bc8);
 FUNC_9(VAR_0, 0x11, 0x5655);
 FUNC_9(VAR_0, 0x1f, 0x0bcd);
 FUNC_9(VAR_0, 0x14, 0x1065);
 FUNC_9(VAR_0, 0x14, 0x9065);
 FUNC_9(VAR_0, 0x14, 0x1065);
 FUNC_9(VAR_0, 0x1f, 0x0000);

 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
 FUNC_7(VAR_0);
}
