
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int phy_locked; } ;
struct b43legacy_wldev {int wl; TYPE_3__* dev; TYPE_1__ phy; } ;
struct TYPE_5__ {int revision; } ;
struct TYPE_6__ {TYPE_2__ id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int) ;

void FUNC_4(struct b43legacy_wldev *VAR_1)
{





 if (VAR_1->dev->id.revision < 3) {
  FUNC_2(VAR_1);
 } else {
  if (!FUNC_1(VAR_1->wl, VAR_0))
   FUNC_3(VAR_1, -1, 1);
 }
}
