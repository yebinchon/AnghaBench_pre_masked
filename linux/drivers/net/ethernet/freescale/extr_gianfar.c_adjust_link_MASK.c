
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ link; scalar_t__ duplex; scalar_t__ speed; } ;
struct net_device {struct phy_device* phydev; } ;
struct gfar_private {scalar_t__ oldlink; scalar_t__ oldduplex; scalar_t__ oldspeed; } ;


 int FUNC_0 (struct gfar_private*) ;
 struct gfar_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct gfar_private *VAR_1 = FUNC_1(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;

 if (FUNC_2(VAR_2->link != VAR_1->oldlink ||
       (VAR_2->link && (VAR_2->duplex != VAR_1->oldduplex ||
           VAR_2->speed != VAR_1->oldspeed))))
  FUNC_0(VAR_1);
}
