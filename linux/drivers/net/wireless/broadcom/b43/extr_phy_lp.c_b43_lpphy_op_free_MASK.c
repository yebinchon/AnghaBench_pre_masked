
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_lp {int dummy; } ;


 int FUNC_0 (struct b43_phy_lp*) ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_0)
{
 struct b43_phy_lp *VAR_1 = VAR_0->phy.lp;

 FUNC_0(VAR_1);
 VAR_0->phy.lp = ((void*)0);
}
