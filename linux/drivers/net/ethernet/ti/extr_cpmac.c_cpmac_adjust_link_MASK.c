
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* phydev; } ;
struct cpmac_priv {scalar_t__ oldduplex; scalar_t__ oldspeed; int oldlink; int lock; } ;
struct TYPE_2__ {scalar_t__ duplex; scalar_t__ speed; scalar_t__ link; } ;


 scalar_t__ FUNC_0 () ;
 struct cpmac_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct cpmac_priv*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_0)
{
 struct cpmac_priv *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;

 FUNC_5(&VAR_1->lock);
 if (VAR_0->phydev->link) {
  FUNC_3(VAR_0);
  if (VAR_0->phydev->duplex != VAR_1->oldduplex) {
   VAR_2 = 1;
   VAR_1->oldduplex = VAR_0->phydev->duplex;
  }

  if (VAR_0->phydev->speed != VAR_1->oldspeed) {
   VAR_2 = 1;
   VAR_1->oldspeed = VAR_0->phydev->speed;
  }

  if (!VAR_1->oldlink) {
   VAR_2 = 1;
   VAR_1->oldlink = 1;
  }
 } else if (VAR_1->oldlink) {
  VAR_2 = 1;
  VAR_1->oldlink = 0;
  VAR_1->oldspeed = 0;
  VAR_1->oldduplex = -1;
 }

 if (VAR_2 && FUNC_2(VAR_1) && FUNC_0())
  FUNC_4(VAR_0->phydev);

 FUNC_6(&VAR_1->lock);
}
