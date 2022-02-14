
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8169_private {TYPE_1__* dev; } ;
struct phy_reg {int member_0; int member_1; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (struct rtl8169_private*) ;
 int FUNC_1 (struct rtl8169_private*) ;
 int FUNC_2 (struct rtl8169_private*) ;
 int FUNC_3 (struct rtl8169_private*,int ) ;
 int FUNC_4 (struct rtl8169_private*,int,int,int) ;
 int FUNC_5 (struct rtl8169_private*,int,int) ;
 int FUNC_6 (struct rtl8169_private*,struct phy_reg const*) ;

__attribute__((used)) static void FUNC_7(struct rtl8169_private *VAR_0)
{
 static const struct phy_reg VAR_1[] = {

  { 0x1f, 0x0004 },
  { 0x1f, 0x0007 },
  { 0x1e, 0x00ac },
  { 0x18, 0x0006 },
  { 0x1f, 0x0002 },
  { 0x1f, 0x0000 },
  { 0x1f, 0x0000 },


  { 0x1f, 0x0003 },
  { 0x09, 0xa20f },
  { 0x1f, 0x0000 },
  { 0x1f, 0x0000 },


  { 0x1f, 0x0005 },
  { 0x05, 0x8b5b },
  { 0x06, 0x9222 },
  { 0x05, 0x8b6d },
  { 0x06, 0x8000 },
  { 0x05, 0x8b76 },
  { 0x06, 0x8000 },
  { 0x1f, 0x0000 }
 };

 FUNC_1(VAR_0);

 FUNC_6(VAR_0, VAR_1);


 FUNC_5(VAR_0, 0x1f, 0x0005);
 FUNC_5(VAR_0, 0x05, 0x8b80);
 FUNC_4(VAR_0, 0x17, 0x0006, 0x0000);
 FUNC_5(VAR_0, 0x1f, 0x0000);


 FUNC_5(VAR_0, 0x1f, 0x0004);
 FUNC_5(VAR_0, 0x1f, 0x0007);
 FUNC_5(VAR_0, 0x1e, 0x002d);
 FUNC_4(VAR_0, 0x18, 0x0010, 0x0000);
 FUNC_5(VAR_0, 0x1f, 0x0002);
 FUNC_5(VAR_0, 0x1f, 0x0000);
 FUNC_4(VAR_0, 0x14, 0x8000, 0x0000);


 FUNC_5(VAR_0, 0x1f, 0x0005);
 FUNC_5(VAR_0, 0x05, 0x8b86);
 FUNC_4(VAR_0, 0x06, 0x0001, 0x0000);
 FUNC_5(VAR_0, 0x1f, 0x0000);


 FUNC_5(VAR_0, 0x1f, 0x0005);
 FUNC_5(VAR_0, 0x05, 0x8b85);
 FUNC_4(VAR_0, 0x06, 0x4000, 0x0000);
 FUNC_5(VAR_0, 0x1f, 0x0000);

 FUNC_0(VAR_0);
 FUNC_2(VAR_0);


 FUNC_5(VAR_0, 0x1f, 0x0003);
 FUNC_4(VAR_0, 0x19, 0x0001, 0x0000);
 FUNC_4(VAR_0, 0x10, 0x0400, 0x0000);
 FUNC_5(VAR_0, 0x1f, 0x0000);
 FUNC_5(VAR_0, 0x1f, 0x0005);
 FUNC_4(VAR_0, 0x01, 0x0100, 0x0000);
 FUNC_5(VAR_0, 0x1f, 0x0000);


 FUNC_3(VAR_0, VAR_0->dev->dev_addr);
}
