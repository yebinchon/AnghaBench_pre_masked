
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct ephy_info {int member_0; int member_1; int member_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int) ;
 int FUNC_2 (struct rtl8169_private*,int,int,int) ;
 int FUNC_3 (struct rtl8169_private*,struct ephy_info const*) ;
 int FUNC_4 (struct rtl8169_private*,int) ;
 int FUNC_5 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_6(struct rtl8169_private *VAR_4)
{
 static const struct ephy_info VAR_5[] = {
  { 0x00, 0x0000, 0x0080 },
  { 0x0d, 0x0100, 0x0200 },
  { 0x19, 0x8021, 0x0000 },
  { 0x1e, 0x0000, 0x2000 },
 };


 FUNC_4(VAR_4, 0);
 FUNC_3(VAR_4, VAR_5);

 FUNC_5(VAR_4);

 FUNC_1(VAR_4, VAR_0, FUNC_0(VAR_4, VAR_0) & ~VAR_3);
 FUNC_1(VAR_4, VAR_1, FUNC_0(VAR_4, VAR_1) & ~VAR_2);

 FUNC_2(VAR_4, 0xd3e2, 0x0fff, 0x0271);
 FUNC_2(VAR_4, 0xd3e4, 0x00ff, 0x0000);
 FUNC_2(VAR_4, 0xe860, 0x0000, 0x0080);

 FUNC_4(VAR_4, 1);
}
