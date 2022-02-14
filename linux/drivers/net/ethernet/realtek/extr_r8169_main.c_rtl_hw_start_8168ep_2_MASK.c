
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
 int FUNC_2 (struct rtl8169_private*,struct ephy_info const*) ;
 int FUNC_3 (struct rtl8169_private*,int) ;
 int FUNC_4 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_5(struct rtl8169_private *VAR_4)
{
 static const struct ephy_info VAR_5[] = {
  { 0x00, 0xffff, 0x10a3 },
  { 0x19, 0xffff, 0xfc00 },
  { 0x1e, 0xffff, 0x20ea }
 };


 FUNC_3(VAR_4, 0);
 FUNC_2(VAR_4, VAR_5);

 FUNC_4(VAR_4);

 FUNC_1(VAR_4, VAR_0, FUNC_0(VAR_4, VAR_0) & ~VAR_3);
 FUNC_1(VAR_4, VAR_1, FUNC_0(VAR_4, VAR_1) & ~VAR_2);

 FUNC_3(VAR_4, 1);
}
