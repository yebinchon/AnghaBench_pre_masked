
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int duplex; scalar_t__ speed; scalar_t__ link; } ;
struct net_device {struct phy_device* phydev; } ;
struct fs_enet_private {int oldduplex; scalar_t__ oldspeed; int oldlink; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* restart ) (struct net_device*) ;} ;


 struct fs_enet_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct fs_enet_private*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct fs_enet_private *VAR_1 = FUNC_0(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;
 int VAR_3 = 0;

 if (VAR_2->link) {

  if (VAR_2->duplex != VAR_1->oldduplex) {
   VAR_3 = 1;
   VAR_1->oldduplex = VAR_2->duplex;
  }

  if (VAR_2->speed != VAR_1->oldspeed) {
   VAR_3 = 1;
   VAR_1->oldspeed = VAR_2->speed;
  }

  if (!VAR_1->oldlink) {
   VAR_3 = 1;
   VAR_1->oldlink = 1;
  }

  if (VAR_3)
   VAR_1->ops->restart(VAR_0);
 } else if (VAR_1->oldlink) {
  VAR_3 = 1;
  VAR_1->oldlink = 0;
  VAR_1->oldspeed = 0;
  VAR_1->oldduplex = -1;
 }

 if (VAR_3 && FUNC_1(VAR_1))
  FUNC_2(VAR_2);
}
