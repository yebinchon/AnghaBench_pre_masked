
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {scalar_t__ state; int lp_advertising; int advertising; } ;
struct net_device {struct phy_device* phydev; } ;
struct lan743x_adapter {int dummy; } ;
struct TYPE_2__ {int speed; int duplex; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
typedef int ksettings ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lan743x_adapter*,int ,int,int) ;
 int FUNC_1 (struct lan743x_adapter*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ethtool_link_ksettings*,int ,int) ;
 struct lan743x_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,struct ethtool_link_ksettings*) ;
 int FUNC_6 (struct phy_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_1)
{
 struct lan743x_adapter *VAR_2 = FUNC_4(VAR_1);
 struct phy_device *VAR_3 = VAR_1->phydev;

 FUNC_6(VAR_3);
 if (VAR_3->state == VAR_0) {
  struct ethtool_link_ksettings VAR_4;
  int VAR_5 = 0;
  int VAR_6 = 0;

  FUNC_3(&VAR_4, 0, sizeof(VAR_4));
  FUNC_5(VAR_1, &VAR_4);
  VAR_6 =
   FUNC_2(VAR_3->advertising);
  VAR_5 =
   FUNC_2(VAR_3->lp_advertising);

  FUNC_0(VAR_2,
            VAR_4.base.duplex,
            VAR_6,
            VAR_5);
  FUNC_1(VAR_2, VAR_4.base.speed);
 }
}
