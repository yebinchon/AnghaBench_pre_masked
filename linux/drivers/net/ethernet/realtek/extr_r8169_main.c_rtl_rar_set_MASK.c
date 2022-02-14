
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl8169_private {scalar_t__ mac_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int) ;
 int FUNC_2 (struct rtl8169_private*) ;
 int FUNC_3 (struct rtl8169_private*) ;
 int FUNC_4 (struct rtl8169_private*,int*) ;
 int FUNC_5 (struct rtl8169_private*) ;
 int FUNC_6 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_7(struct rtl8169_private *VAR_3, u8 *VAR_4)
{
 FUNC_3(VAR_3);

 FUNC_5(VAR_3);

 FUNC_1(VAR_3, VAR_1, VAR_4[4] | VAR_4[5] << 8);
 FUNC_0(VAR_3, VAR_1);

 FUNC_1(VAR_3, VAR_0, VAR_4[0] | VAR_4[1] << 8 | VAR_4[2] << 16 | VAR_4[3] << 24);
 FUNC_0(VAR_3, VAR_0);

 if (VAR_3->mac_version == VAR_2)
  FUNC_4(VAR_3, VAR_4);

 FUNC_2(VAR_3);

 FUNC_6(VAR_3);
}
