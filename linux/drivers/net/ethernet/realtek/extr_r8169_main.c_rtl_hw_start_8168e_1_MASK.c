
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct ephy_info {int member_0; int member_1; int member_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ) ;
 int FUNC_2 (struct rtl8169_private*,int ,int) ;
 int FUNC_3 (struct rtl8169_private*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct rtl8169_private*) ;
 int FUNC_5 (struct rtl8169_private*,struct ephy_info const*) ;
 int FUNC_6 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_7(struct rtl8169_private *VAR_4)
{
 static const struct ephy_info VAR_5[] = {
  { 0x00, 0x0200, 0x0100 },
  { 0x00, 0x0000, 0x0004 },
  { 0x06, 0x0002, 0x0001 },
  { 0x06, 0x0000, 0x0030 },
  { 0x07, 0x0000, 0x2000 },
  { 0x00, 0x0000, 0x0020 },
  { 0x03, 0x5800, 0x2000 },
  { 0x03, 0x0000, 0x0001 },
  { 0x01, 0x0800, 0x1000 },
  { 0x07, 0x0000, 0x4000 },
  { 0x1e, 0x0000, 0x2000 },
  { 0x19, 0xffff, 0xfe6c },
  { 0x0a, 0x0000, 0x0040 }
 };

 FUNC_6(VAR_4);

 FUNC_5(VAR_4, VAR_5);

 FUNC_4(VAR_4);


 FUNC_2(VAR_4, VAR_1, FUNC_0(VAR_4, VAR_1) | VAR_3);
 FUNC_2(VAR_4, VAR_1, FUNC_0(VAR_4, VAR_1) & ~VAR_3);

 FUNC_3(VAR_4, VAR_0, FUNC_1(VAR_4, VAR_0) & ~VAR_2);
}
