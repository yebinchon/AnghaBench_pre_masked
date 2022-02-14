
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int phy_rev; } ;
struct brcms_phy {int phy_5g_pwrgain; TYPE_1__* sh; void* nphy_txpwrctrl; TYPE_2__ pubpi; } ;
struct TYPE_3__ {int boardflags2; int sromrev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_1(struct brcms_phy *VAR_4)
{

 if (FUNC_0(VAR_4->pubpi.phy_rev, 3)) {
  VAR_4->nphy_txpwrctrl = VAR_3;
  VAR_4->phy_5g_pwrgain = 1;
  return;
 }

 VAR_4->nphy_txpwrctrl = VAR_2;
 VAR_4->phy_5g_pwrgain = 0;

 if ((VAR_4->sh->boardflags2 & VAR_1) &&
     FUNC_0(VAR_4->pubpi.phy_rev, 2) && (VAR_4->sh->sromrev >= 4))
  VAR_4->nphy_txpwrctrl = VAR_3;
 else if ((VAR_4->sh->sromrev >= 4)
   && (VAR_4->sh->boardflags2 & VAR_0))
  VAR_4->phy_5g_pwrgain = 1;
}
