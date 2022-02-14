
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ speed; int duplex; scalar_t__ link; } ;
struct net_device {struct phy_device* phydev; } ;
struct emac_priv {scalar_t__ speed; int link; int lock; int duplex; } ;


 int FUNC_0 (struct emac_priv*) ;
 struct emac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct emac_priv *VAR_1 = FUNC_1(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;
 unsigned long VAR_3;
 int VAR_4 = 0;

 FUNC_3(&VAR_1->lock, VAR_3);

 if (VAR_2->link) {

  if (VAR_2->duplex != VAR_1->duplex) {
   VAR_4 = 1;
   VAR_1->duplex = VAR_2->duplex;
  }
  if (VAR_2->speed != VAR_1->speed) {
   VAR_4 = 1;
   VAR_1->speed = VAR_2->speed;
  }
  if (!VAR_1->link) {
   VAR_4 = 1;
   VAR_1->link = 1;
  }

 } else if (VAR_1->link) {
  VAR_4 = 1;
  VAR_1->link = 0;
  VAR_1->speed = 0;
  VAR_1->duplex = ~0;
 }
 if (VAR_4) {
  FUNC_0(VAR_1);
  FUNC_2(VAR_0->phydev);
 }

 FUNC_4(&VAR_1->lock, VAR_3);
}
