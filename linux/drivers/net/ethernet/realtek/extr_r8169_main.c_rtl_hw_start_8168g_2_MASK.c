
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
 int FUNC_3 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_4(struct rtl8169_private *VAR_4)
{
 static const struct ephy_info VAR_5[] = {
  { 0x00, 0x0008, 0x0000 },
  { 0x0c, 0x3ff0, 0x0820 },
  { 0x19, 0xffff, 0x7c00 },
  { 0x1e, 0xffff, 0x20eb },
  { 0x0d, 0xffff, 0x1666 },
  { 0x00, 0xffff, 0x10a3 },
  { 0x06, 0xffff, 0xf050 },
  { 0x04, 0x0000, 0x0010 },
  { 0x1d, 0x4000, 0x0000 },
 };

 FUNC_3(VAR_4);


 FUNC_1(VAR_4, VAR_2, FUNC_0(VAR_4, VAR_2) & ~VAR_1);
 FUNC_1(VAR_4, VAR_3, FUNC_0(VAR_4, VAR_3) & ~VAR_0);
 FUNC_2(VAR_4, VAR_5);
}
