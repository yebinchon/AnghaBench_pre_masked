
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int phydev; } ;
struct net_device {int dummy; } ;
struct ethtool_eee {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct rtl8169_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_eee*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct rtl8169_private*) ;
 struct device* FUNC_6 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1, struct ethtool_eee *VAR_2)
{
 struct rtl8169_private *VAR_3 = FUNC_0(VAR_1);
 struct device *VAR_4 = FUNC_6(VAR_3);
 int VAR_5;

 if (!FUNC_5(VAR_3))
  return -VAR_0;

 FUNC_3(VAR_4);

 if (!FUNC_2(VAR_4)) {
  VAR_5 = -VAR_0;
 } else {
  VAR_5 = FUNC_1(VAR_3->phydev, VAR_2);
 }

 FUNC_4(VAR_4);

 return VAR_5;
}
