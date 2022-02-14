
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b43_phy_g* g; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_rfatt {int dummy; } ;
struct b43_phy_g {int bbatt; int rfatt; } ;
struct b43_lo_calib {int ctl; } ;
typedef int rf ;


 struct b43_lo_calib* FUNC_0 (struct b43_wldev*,int *,struct b43_rfatt*) ;
 int FUNC_1 (struct b43_rfatt*) ;
 int FUNC_2 (struct b43_wldev*,int *) ;
 int FUNC_3 (struct b43_rfatt*,int *,int) ;

void FUNC_4(struct b43_wldev *VAR_0)
{
 struct b43_phy_g *VAR_1 = VAR_0->phy.g;
 struct b43_lo_calib *VAR_2;
 struct b43_rfatt VAR_3;

 FUNC_3(&VAR_3, &VAR_1->rfatt, sizeof(VAR_3));
 FUNC_1(&VAR_3);

 VAR_2 = FUNC_0(VAR_0, &VAR_1->bbatt, &VAR_3);
 if (!VAR_2)
  return;
 FUNC_2(VAR_0, &VAR_2->ctl);
}
