
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct ephy_info {int member_0; int member_1; int member_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl8169_private*,int ,int) ;
 int FUNC_1 (struct rtl8169_private*) ;
 int FUNC_2 (struct rtl8169_private*,struct ephy_info const*) ;
 int FUNC_3 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_4(struct rtl8169_private *VAR_3)
{
 static const struct ephy_info VAR_4[] = {
  { 0x02, 0x0800, 0x1000 },
  { 0x03, 0, 0x0002 },
  { 0x06, 0x0080, 0x0000 }
 };

 FUNC_3(VAR_3);

 FUNC_0(VAR_3, VAR_0, 0x06 | VAR_1 | VAR_2);

 FUNC_2(VAR_3, VAR_4);

 FUNC_1(VAR_3);
}
