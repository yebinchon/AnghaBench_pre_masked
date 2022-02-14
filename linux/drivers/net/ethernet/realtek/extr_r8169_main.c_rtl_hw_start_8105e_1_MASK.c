
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct ephy_info {int member_0; int member_2; int member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ) ;
 int FUNC_2 (struct rtl8169_private*,int ,int) ;
 int FUNC_3 (struct rtl8169_private*,int ,int) ;
 int FUNC_4 (struct rtl8169_private*,struct ephy_info const*) ;
 int FUNC_5 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_6(struct rtl8169_private *VAR_6)
{
 static const struct ephy_info VAR_7[] = {
  { 0x07, 0, 0x4000 },
  { 0x19, 0, 0x0200 },
  { 0x19, 0, 0x0020 },
  { 0x1e, 0, 0x2000 },
  { 0x03, 0, 0x0001 },
  { 0x19, 0, 0x0100 },
  { 0x19, 0, 0x0004 },
  { 0x0a, 0, 0x0020 }
 };


 FUNC_2(VAR_6, VAR_3, FUNC_0(VAR_6, VAR_3) | 0x002800);


 FUNC_2(VAR_6, VAR_3, FUNC_0(VAR_6, VAR_3) & ~0x010000);

 FUNC_3(VAR_6, VAR_4, FUNC_1(VAR_6, VAR_4) | VAR_1 | VAR_2);
 FUNC_3(VAR_6, VAR_0, FUNC_1(VAR_6, VAR_0) | VAR_5);

 FUNC_4(VAR_6, VAR_7);

 FUNC_5(VAR_6);
}
