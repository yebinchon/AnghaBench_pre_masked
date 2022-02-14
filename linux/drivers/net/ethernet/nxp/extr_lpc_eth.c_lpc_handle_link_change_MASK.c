
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ link; scalar_t__ speed; int duplex; } ;
struct netdata_local {scalar_t__ speed; int duplex; scalar_t__ link; int lock; } ;
struct net_device {struct phy_device* phydev; } ;


 int FUNC_0 (struct netdata_local*) ;
 struct netdata_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct netdata_local *VAR_1 = FUNC_1(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;
 unsigned long VAR_3;

 bool VAR_4 = 0;

 FUNC_2(&VAR_1->lock, VAR_3);

 if (VAR_2->link) {
  if ((VAR_1->speed != VAR_2->speed) ||
      (VAR_1->duplex != VAR_2->duplex)) {
   VAR_1->speed = VAR_2->speed;
   VAR_1->duplex = VAR_2->duplex;
   VAR_4 = 1;
  }
 }

 if (VAR_2->link != VAR_1->link) {
  if (!VAR_2->link) {
   VAR_1->speed = 0;
   VAR_1->duplex = -1;
  }
  VAR_1->link = VAR_2->link;

  VAR_4 = 1;
 }

 FUNC_3(&VAR_1->lock, VAR_3);

 if (VAR_4)
  FUNC_0(VAR_1);
}
