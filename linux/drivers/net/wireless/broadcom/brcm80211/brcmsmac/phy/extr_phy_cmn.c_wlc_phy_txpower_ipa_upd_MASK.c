
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int extpagain; } ;
struct TYPE_5__ {int extpagain; } ;
struct TYPE_4__ {int phy_rev; } ;
struct brcms_phy {int ipa2g_on; int ipa5g_on; TYPE_3__ srom_fem5g; TYPE_2__ srom_fem2g; TYPE_1__ pubpi; } ;


 scalar_t__ FUNC_0 (int ,int) ;

void FUNC_1(struct brcms_phy *VAR_0)
{

 if (FUNC_0(VAR_0->pubpi.phy_rev, 3)) {
  VAR_0->ipa2g_on = (VAR_0->srom_fem2g.extpagain == 2);
  VAR_0->ipa5g_on = (VAR_0->srom_fem5g.extpagain == 2);
 } else {
  VAR_0->ipa2g_on = 0;
  VAR_0->ipa5g_on = 0;
 }
}
