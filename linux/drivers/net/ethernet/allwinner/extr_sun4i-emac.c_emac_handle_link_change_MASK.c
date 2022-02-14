
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ link; scalar_t__ speed; int duplex; } ;
struct net_device {struct phy_device* phydev; } ;
struct emac_board_info {scalar_t__ speed; int duplex; scalar_t__ link; int lock; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct emac_board_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct emac_board_info *VAR_1 = FUNC_2(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;
 unsigned long VAR_3;
 int VAR_4 = 0;

 if (VAR_2->link) {
  if (VAR_1->speed != VAR_2->speed) {
   FUNC_4(&VAR_1->lock, VAR_3);
   VAR_1->speed = VAR_2->speed;
   FUNC_1(VAR_0);
   FUNC_5(&VAR_1->lock, VAR_3);
   VAR_4 = 1;
  }

  if (VAR_1->duplex != VAR_2->duplex) {
   FUNC_4(&VAR_1->lock, VAR_3);
   VAR_1->duplex = VAR_2->duplex;
   FUNC_0(VAR_0);
   FUNC_5(&VAR_1->lock, VAR_3);
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

 if (VAR_4)
  FUNC_3(VAR_2);
}
