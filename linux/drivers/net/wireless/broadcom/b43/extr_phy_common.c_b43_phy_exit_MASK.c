
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int do_full_init; struct b43_phy_operations* ops; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_operations {int (* exit ) (struct b43_wldev*) ;} ;


 int FUNC_0 (struct b43_wldev*,int) ;
 int FUNC_1 (struct b43_wldev*) ;

void FUNC_2(struct b43_wldev *VAR_0)
{
 const struct b43_phy_operations *VAR_1 = VAR_0->phy.ops;

 FUNC_0(VAR_0, 1);
 VAR_0->phy.do_full_init = 1;
 if (VAR_1->exit)
  VAR_1->exit(VAR_0);
}
