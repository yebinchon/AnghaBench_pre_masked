
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct phy_reg {int member_0; int member_1; } ;


 int FUNC_0 (struct rtl8169_private*,int,int) ;
 int FUNC_1 (struct rtl8169_private*,int,int) ;
 int FUNC_2 (struct rtl8169_private*,struct phy_reg const*) ;

__attribute__((used)) static void FUNC_3(struct rtl8169_private *VAR_0)
{
 static const struct phy_reg VAR_1[] = {
  { 0x1f, 0x0001 },
  { 0x12, 0x2300 },
  { 0x1f, 0x0002 },
  { 0x00, 0x88d4 },
  { 0x01, 0x82b1 },
  { 0x03, 0x7002 },
  { 0x08, 0x9e30 },
  { 0x09, 0x01f0 },
  { 0x0a, 0x5500 },
  { 0x0c, 0x00c8 },
  { 0x1f, 0x0003 },
  { 0x12, 0xc096 },
  { 0x16, 0x000a },
  { 0x1f, 0x0000 },
  { 0x1f, 0x0000 },
  { 0x09, 0x2000 },
  { 0x09, 0x0000 }
 };

 FUNC_2(VAR_0, VAR_1);

 FUNC_0(VAR_0, 0x14, 1 << 5);
 FUNC_0(VAR_0, 0x0d, 1 << 5);
 FUNC_1(VAR_0, 0x1f, 0x0000);
}
