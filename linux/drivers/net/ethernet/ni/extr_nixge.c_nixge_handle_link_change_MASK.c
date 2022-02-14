
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ link; scalar_t__ speed; scalar_t__ duplex; } ;
struct nixge_priv {scalar_t__ link; scalar_t__ speed; scalar_t__ duplex; } ;
struct net_device {struct phy_device* phydev; } ;


 struct nixge_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct nixge_priv *VAR_1 = FUNC_0(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;

 if (VAR_2->link != VAR_1->link || VAR_2->speed != VAR_1->speed ||
     VAR_2->duplex != VAR_1->duplex) {
  VAR_1->link = VAR_2->link;
  VAR_1->speed = VAR_2->speed;
  VAR_1->duplex = VAR_2->duplex;
  FUNC_1(VAR_2);
 }
}
