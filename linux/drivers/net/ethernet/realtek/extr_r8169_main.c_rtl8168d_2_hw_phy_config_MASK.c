
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8169_private {int dummy; } ;
struct phy_reg {int member_0; int member_1; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 struct phy_reg const* VAR_1 ;
 struct phy_reg const* VAR_2 ;
 int FUNC_1 (struct rtl8169_private*,int) ;
 int FUNC_2 (struct rtl8169_private*,int ,int) ;
 int FUNC_3 (struct rtl8169_private*,int,int) ;
 int FUNC_4 (struct rtl8169_private*,int) ;
 int FUNC_5 (struct rtl8169_private*,int,int,int) ;
 int FUNC_6 (struct rtl8169_private*,int,int) ;
 int FUNC_7 (struct rtl8169_private*,struct phy_reg const*) ;

__attribute__((used)) static void FUNC_8(struct rtl8169_private *VAR_3)
{
 FUNC_7(VAR_3, VAR_1);

 if (FUNC_1(VAR_3, 0x01) == 0xb1) {
  int VAR_4;

  FUNC_7(VAR_3, VAR_2);

  VAR_4 = FUNC_4(VAR_3, 0x0d);
  if ((VAR_4 & 0x00ff) != 0x006c) {
   static const u32 VAR_5[] = {
    0x0065, 0x0066, 0x0067, 0x0068,
    0x0069, 0x006a, 0x006b, 0x006c
   };
   int VAR_6;

   FUNC_6(VAR_3, 0x1f, 0x0002);

   VAR_4 &= 0xff00;
   for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++)
    FUNC_6(VAR_3, 0x0d, VAR_4 | VAR_5[VAR_6]);
  }
 } else {
  static const struct phy_reg VAR_7[] = {
   { 0x1f, 0x0002 },
   { 0x05, 0x2642 },
   { 0x1f, 0x0005 },
   { 0x05, 0x8330 },
   { 0x06, 0x2642 }
  };

  FUNC_7(VAR_3, VAR_7);
 }


 FUNC_6(VAR_3, 0x1f, 0x0002);
 FUNC_5(VAR_3, 0x02, 0x0100, 0x0600);
 FUNC_5(VAR_3, 0x03, 0x0000, 0xe000);


 FUNC_6(VAR_3, 0x1f, 0x0002);
 FUNC_3(VAR_3, 0x0f, 0x0017);

 FUNC_6(VAR_3, 0x1f, 0x0005);
 FUNC_6(VAR_3, 0x05, 0x001b);

 FUNC_2(VAR_3, VAR_0, 0xb300);

 FUNC_6(VAR_3, 0x1f, 0x0000);
}
