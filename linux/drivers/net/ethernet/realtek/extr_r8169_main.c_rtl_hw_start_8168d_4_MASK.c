
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct ephy_info {int member_0; int member_1; int member_2; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*) ;
 int FUNC_1 (struct rtl8169_private*,struct ephy_info const*) ;
 int FUNC_2 (struct rtl8169_private*) ;
 int FUNC_3 (struct rtl8169_private*,int ) ;

__attribute__((used)) static void FUNC_4(struct rtl8169_private *VAR_1)
{
 static const struct ephy_info VAR_2[] = {
  { 0x0b, 0x0000, 0x0048 },
  { 0x19, 0x0020, 0x0050 },
  { 0x0c, 0x0100, 0x0020 },
  { 0x10, 0x0004, 0x0000 },
 };

 FUNC_2(VAR_1);

 FUNC_3(VAR_1, VAR_0);

 FUNC_1(VAR_1, VAR_2);

 FUNC_0(VAR_1);
}
