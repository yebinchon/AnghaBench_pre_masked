
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl8169_private {scalar_t__ mac_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtl8169_private *VAR_4, unsigned VAR_5)
{
 u32 VAR_6;

 if (VAR_4->mac_version == VAR_2)
  VAR_6 = 0x000fff00;
 else if (VAR_4->mac_version == VAR_3)
  VAR_6 = 0x00ffff00;
 else
  return;

 if (FUNC_0(VAR_4, VAR_0) & VAR_1)
  VAR_6 |= 0xff;

 FUNC_1(VAR_4, 0x7c, VAR_6);
}
