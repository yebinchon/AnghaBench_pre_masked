
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_phy {int radio_on; TYPE_1__* ops; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct TYPE_2__ {int (* software_rfkill ) (struct b43_wldev*,int) ;} ;


 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int) ;

void FUNC_3(struct b43_wldev *VAR_0, bool VAR_1)
{
 struct b43_phy *VAR_2 = &VAR_0->phy;

 FUNC_1(VAR_0);
 VAR_2->ops->software_rfkill(VAR_0, VAR_1);
 VAR_2->radio_on = !VAR_1;
 FUNC_0(VAR_0);
}
