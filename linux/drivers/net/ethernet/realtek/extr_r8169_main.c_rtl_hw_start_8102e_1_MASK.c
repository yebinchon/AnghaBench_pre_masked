
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl8169_private {int dummy; } ;
struct ephy_info {int member_0; int member_2; int member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct rtl8169_private*,struct ephy_info const*) ;
 int FUNC_3 (struct rtl8169_private*) ;
 int FUNC_4 (struct rtl8169_private*,int ) ;

__attribute__((used)) static void FUNC_5(struct rtl8169_private *VAR_13)
{
 static const struct ephy_info VAR_14[] = {
  { 0x01, 0, 0x6e65 },
  { 0x02, 0, 0x091f },
  { 0x03, 0, 0xc2f9 },
  { 0x06, 0, 0xafb5 },
  { 0x07, 0, 0x0e00 },
  { 0x19, 0, 0xec80 },
  { 0x01, 0, 0x2e65 },
  { 0x01, 0, 0x6e65 }
 };
 u8 VAR_15;

 FUNC_3(VAR_13);

 FUNC_1(VAR_13, VAR_3, VAR_4);

 FUNC_4(VAR_13, VAR_9);

 FUNC_1(VAR_13, VAR_1,
        VAR_7 | VAR_6 | VAR_11 | VAR_8 | VAR_5 | VAR_12 | VAR_10);
 FUNC_1(VAR_13, VAR_2, FUNC_0(VAR_13, VAR_2) & ~VAR_0);

 VAR_15 = FUNC_0(VAR_13, VAR_1);
 if ((VAR_15 & VAR_6) && (VAR_15 & VAR_7))
  FUNC_1(VAR_13, VAR_1, VAR_15 & ~VAR_6);

 FUNC_2(VAR_13, VAR_14);
}
