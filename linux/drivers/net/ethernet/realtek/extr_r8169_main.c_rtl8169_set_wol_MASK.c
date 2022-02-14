
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int saved_wolopts; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl8169_private*,int) ;
 struct rtl8169_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct rtl8169_private*) ;
 int FUNC_6 (struct rtl8169_private*) ;
 struct device* FUNC_7 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 struct rtl8169_private *VAR_4 = FUNC_1(VAR_2);
 struct device *VAR_5 = FUNC_7(VAR_4);

 if (VAR_3->wolopts & ~VAR_1)
  return -VAR_0;

 FUNC_3(VAR_5);

 FUNC_5(VAR_4);

 VAR_4->saved_wolopts = VAR_3->wolopts;

 if (FUNC_2(VAR_5))
  FUNC_0(VAR_4, VAR_4->saved_wolopts);

 FUNC_6(VAR_4);

 FUNC_4(VAR_5);

 return 0;
}
