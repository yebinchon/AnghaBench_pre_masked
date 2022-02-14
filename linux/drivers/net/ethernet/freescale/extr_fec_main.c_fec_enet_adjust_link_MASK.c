
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ duplex; scalar_t__ speed; scalar_t__ link; } ;
struct net_device {struct phy_device* phydev; } ;
struct fec_enet_private {scalar_t__ full_duplex; scalar_t__ speed; scalar_t__ link; int napi; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fec_enet_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct phy_device*) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_0)
{
 struct fec_enet_private *VAR_1 = FUNC_4(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;
 int VAR_3 = 0;






 if (!FUNC_6(VAR_0) || !FUNC_5(VAR_0)) {
  VAR_1->link = 0;
 } else if (VAR_2->link) {
  if (!VAR_1->link) {
   VAR_1->link = VAR_2->link;
   VAR_3 = 1;
  }

  if (VAR_1->full_duplex != VAR_2->duplex) {
   VAR_1->full_duplex = VAR_2->duplex;
   VAR_3 = 1;
  }

  if (VAR_2->speed != VAR_1->speed) {
   VAR_1->speed = VAR_2->speed;
   VAR_3 = 1;
  }


  if (VAR_3) {
   FUNC_2(&VAR_1->napi);
   FUNC_7(VAR_0);
   FUNC_0(VAR_0);
   FUNC_9(VAR_0);
   FUNC_8(VAR_0);
   FUNC_3(&VAR_1->napi);
  }
 } else {
  if (VAR_1->link) {
   FUNC_2(&VAR_1->napi);
   FUNC_7(VAR_0);
   FUNC_1(VAR_0);
   FUNC_8(VAR_0);
   FUNC_3(&VAR_1->napi);
   VAR_1->link = VAR_2->link;
   VAR_3 = 1;
  }
 }

 if (VAR_3)
  FUNC_10(VAR_2);
}
