
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phy_locked; } ;
struct b43_wldev {int wl; TYPE_2__* dev; TYPE_1__ phy; } ;
struct TYPE_4__ {int core_rev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct b43_wldev*,int ) ;

void FUNC_3(struct b43_wldev *VAR_1)
{




 FUNC_0(VAR_1->dev->core_rev < 3);

 if (!FUNC_1(VAR_1->wl, VAR_0))
  FUNC_2(VAR_1, 0);
}
