
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int mac_version; } ;
 int FUNC_0 (struct rtl8169_private*) ;
 int FUNC_1 (struct rtl8169_private*) ;

__attribute__((used)) static bool FUNC_2(struct rtl8169_private *VAR_0)
{
 switch (VAR_0->mac_version) {
 case 133:
 case 132:
 case 131:
  return FUNC_0(VAR_0);
 case 130:
 case 129:
 case 128:
  return FUNC_1(VAR_0);
 default:
  return 0;
 }
}
