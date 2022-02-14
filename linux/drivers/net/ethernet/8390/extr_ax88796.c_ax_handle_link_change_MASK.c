
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ link; scalar_t__ speed; int duplex; } ;
struct net_device {struct phy_device* phydev; } ;
struct ax_device {scalar_t__ speed; int duplex; scalar_t__ link; } ;


 int FUNC_0 (struct phy_device*) ;
 struct ax_device* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct ax_device *VAR_1 = FUNC_1(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;
 int VAR_3 = 0;

 if (VAR_2->link && ((VAR_1->speed != VAR_2->speed) ||
        (VAR_1->duplex != VAR_2->duplex))) {

  VAR_1->speed = VAR_2->speed;
  VAR_1->duplex = VAR_2->duplex;
  VAR_3 = 1;
 }

 if (VAR_2->link != VAR_1->link) {
  if (!VAR_2->link) {
   VAR_1->speed = 0;
   VAR_1->duplex = -1;
  }
  VAR_1->link = VAR_2->link;

  VAR_3 = 1;
 }

 if (VAR_3)
  FUNC_0(VAR_2);
}
