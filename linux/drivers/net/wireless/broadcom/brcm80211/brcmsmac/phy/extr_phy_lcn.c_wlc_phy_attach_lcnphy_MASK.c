
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct brcms_phy_lcnphy {int lcnphy_tempsense_option; scalar_t__ lcnphy_papd_rxGnCtrl_init; } ;
struct TYPE_12__ {int phy_rev; } ;
struct TYPE_11__ {int detach; int radioloftget; int txloccget; int txiqccset; int txiqccget; int txpwrrecalc; int chanset; int calinit; int init; } ;
struct TYPE_7__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {int hwpwrctrl; int hwpwrctrl_capable; int temppwrctrl_capable; TYPE_6__ pubpi; TYPE_5__ pi_fptr; TYPE_4__* d11core; int xtalfreq; TYPE_2__* sh; TYPE_1__ u; } ;
struct TYPE_10__ {TYPE_3__* bus; } ;
struct TYPE_9__ {int drv_cc; } ;
struct TYPE_8__ {int boardflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 struct brcms_phy_lcnphy* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct brcms_phy*) ;

bool FUNC_4(struct brcms_phy *VAR_11)
{
 struct brcms_phy_lcnphy *VAR_12;

 VAR_11->u.pi_lcnphy = FUNC_2(sizeof(struct brcms_phy_lcnphy), VAR_1);
 if (VAR_11->u.pi_lcnphy == ((void*)0))
  return 0;

 VAR_12 = VAR_11->u.pi_lcnphy;

 if (0 == (VAR_11->sh->boardflags & VAR_0)) {
  VAR_11->hwpwrctrl = 1;
  VAR_11->hwpwrctrl_capable = 1;
 }

 VAR_11->xtalfreq = FUNC_1(&VAR_11->d11core->bus->drv_cc);
 VAR_12->lcnphy_papd_rxGnCtrl_init = 0;

 VAR_11->pi_fptr.init = VAR_9;
 VAR_11->pi_fptr.calinit = VAR_6;
 VAR_11->pi_fptr.chanset = VAR_7;
 VAR_11->pi_fptr.txpwrrecalc = VAR_10;
 VAR_11->pi_fptr.txiqccget = VAR_3;
 VAR_11->pi_fptr.txiqccset = VAR_5;
 VAR_11->pi_fptr.txloccget = VAR_4;
 VAR_11->pi_fptr.radioloftget = VAR_2;
 VAR_11->pi_fptr.detach = VAR_8;

 if (!FUNC_3(VAR_11))
  return 0;

 if (FUNC_0(VAR_11->pubpi.phy_rev, 1)) {
  if (VAR_12->lcnphy_tempsense_option == 3) {
   VAR_11->hwpwrctrl = 1;
   VAR_11->hwpwrctrl_capable = 1;
   VAR_11->temppwrctrl_capable = 0;
  } else {
   VAR_11->hwpwrctrl = 0;
   VAR_11->hwpwrctrl_capable = 0;
   VAR_11->temppwrctrl_capable = 1;
  }
 }

 return 1;
}
