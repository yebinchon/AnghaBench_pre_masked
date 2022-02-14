
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {scalar_t__ phy_speed; } ;
struct phy_device {scalar_t__ speed; scalar_t__ link; } ;
struct net_device {struct phy_device* phydev; } ;


 scalar_t__ VAR_0 ;
 struct xge_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct xge_pdata*) ;
 int FUNC_3 (struct xge_pdata*) ;
 int FUNC_4 (struct xge_pdata*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1)
{
 struct xge_pdata *VAR_2 = FUNC_0(VAR_1);
 struct phy_device *VAR_3 = VAR_1->phydev;

 if (VAR_3->link) {
  if (VAR_2->phy_speed != VAR_3->speed) {
   VAR_2->phy_speed = VAR_3->speed;
   FUNC_4(VAR_2);
   FUNC_3(VAR_2);
   FUNC_1(VAR_3);
  }
 } else {
  if (VAR_2->phy_speed != VAR_0) {
   VAR_2->phy_speed = VAR_0;
   FUNC_2(VAR_2);
   FUNC_1(VAR_3);
  }
 }
}
