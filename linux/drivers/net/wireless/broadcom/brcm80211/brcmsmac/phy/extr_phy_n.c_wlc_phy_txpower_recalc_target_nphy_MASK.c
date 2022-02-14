
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct brcms_phy {TYPE_1__* sh; int d11core; int nphy_txpwrctrl; } ;
struct TYPE_2__ {int physhim; int corerev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct brcms_phy*) ;
 int FUNC_6 (struct brcms_phy*,int ) ;
 int FUNC_7 (struct brcms_phy*) ;

void FUNC_8(struct brcms_phy *VAR_2)
{
 u8 VAR_3;
 FUNC_5(VAR_2);
 FUNC_7(VAR_2);

 VAR_3 = VAR_2->nphy_txpwrctrl;

 if (FUNC_1(VAR_2->sh->corerev, 11) || FUNC_1(VAR_2->sh->corerev, 12)) {
  FUNC_4(VAR_2->sh->physhim, VAR_0, VAR_0);
  (void)FUNC_2(VAR_2->d11core, FUNC_0(VAR_1));
  FUNC_3(1);
 }

 FUNC_6(VAR_2, VAR_3);

 if (FUNC_1(VAR_2->sh->corerev, 11) || FUNC_1(VAR_2->sh->corerev, 12))
  FUNC_4(VAR_2->sh->physhim, VAR_0, 0);
}
