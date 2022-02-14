
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ speed; scalar_t__ duplex; scalar_t__ link; } ;
struct net_device {struct phy_device* phydev; } ;
struct bgmac {scalar_t__ mac_speed; scalar_t__ mac_duplex; } ;


 int FUNC_0 (struct bgmac*) ;
 struct bgmac* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*) ;

void FUNC_3(struct net_device *VAR_0)
{
 struct bgmac *VAR_1 = FUNC_1(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;
 bool VAR_3 = 0;

 if (VAR_2->link) {
  if (VAR_2->speed != VAR_1->mac_speed) {
   VAR_1->mac_speed = VAR_2->speed;
   VAR_3 = 1;
  }

  if (VAR_2->duplex != VAR_1->mac_duplex) {
   VAR_1->mac_duplex = VAR_2->duplex;
   VAR_3 = 1;
  }
 }

 if (VAR_3) {
  FUNC_0(VAR_1);
  FUNC_2(VAR_2);
 }
}
