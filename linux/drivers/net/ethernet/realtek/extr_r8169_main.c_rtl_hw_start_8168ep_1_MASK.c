
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct ephy_info {int member_0; int member_1; int member_2; } ;


 int FUNC_0 (struct rtl8169_private*,struct ephy_info const*) ;
 int FUNC_1 (struct rtl8169_private*,int) ;
 int FUNC_2 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_3(struct rtl8169_private *VAR_0)
{
 static const struct ephy_info VAR_1[] = {
  { 0x00, 0xffff, 0x10ab },
  { 0x06, 0xffff, 0xf030 },
  { 0x08, 0xffff, 0x2006 },
  { 0x0d, 0xffff, 0x1666 },
  { 0x0c, 0x3ff0, 0x0000 }
 };


 FUNC_1(VAR_0, 0);
 FUNC_0(VAR_0, VAR_1);

 FUNC_2(VAR_0);

 FUNC_1(VAR_0, 1);
}
