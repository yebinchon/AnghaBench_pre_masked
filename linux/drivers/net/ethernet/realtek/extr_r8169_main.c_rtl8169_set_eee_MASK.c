
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8169_private {int phydev; } ;
struct net_device {TYPE_1__* phydev; } ;
struct ethtool_eee {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ autoneg; scalar_t__ duplex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rtl8169_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_eee*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct rtl8169_private*) ;
 struct device* FUNC_6 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, struct ethtool_eee *VAR_5)
{
 struct rtl8169_private *VAR_6 = FUNC_0(VAR_4);
 struct device *VAR_7 = FUNC_6(VAR_6);
 int VAR_8;

 if (!FUNC_5(VAR_6))
  return -VAR_2;

 FUNC_3(VAR_7);

 if (!FUNC_2(VAR_7)) {
  VAR_8 = -VAR_2;
  goto out;
 }

 if (VAR_4->phydev->autoneg == VAR_0 ||
     VAR_4->phydev->duplex != VAR_1) {
  VAR_8 = -VAR_3;
  goto out;
 }

 VAR_8 = FUNC_1(VAR_6->phydev, VAR_5);
out:
 FUNC_4(VAR_7);
 return VAR_8;
}
