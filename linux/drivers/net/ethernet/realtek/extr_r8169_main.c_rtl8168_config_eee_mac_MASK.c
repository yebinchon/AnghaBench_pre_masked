
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ mac_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (struct rtl8169_private*,int ,int) ;
 int FUNC_2 (struct rtl8169_private*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rtl8169_private *VAR_3)
{

 if (VAR_3->mac_version != VAR_2)
  FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_3, VAR_0) & ~0x07);

 FUNC_2(VAR_3, 0x1b0, VAR_1, 0x0003);
}
