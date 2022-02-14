
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nphy_sfo_cfg {int PHY_BW1a; int PHY_BW2; int PHY_BW3; int PHY_BW4; int PHY_BW5; int PHY_BW6; } ;
struct TYPE_8__ {int phy_rev; } ;
struct brcms_phy {int radio_chanspec; scalar_t__ nphy_txpwrctrl; scalar_t__ phy_spuravoid; int phy_isspuravoid; TYPE_3__ pubpi; TYPE_2__* sh; TYPE_4__* d11core; scalar_t__ nphy_aband_spurwar_en; } ;
struct TYPE_9__ {TYPE_1__* bus; } ;
struct TYPE_7__ {scalar_t__ chip; scalar_t__ chippkg; int physhim; } ;
struct TYPE_6__ {int drv_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (struct brcms_phy*,int,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*,int ,int) ;
 int FUNC_11 (struct brcms_phy*,int,int,int) ;
 int FUNC_12 (struct brcms_phy*,int,int) ;
 int VAR_16 ;
 int FUNC_13 (struct brcms_phy*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct brcms_phy*) ;
 int FUNC_17 (struct brcms_phy*,int ,int ) ;
 int FUNC_18 (struct brcms_phy*) ;
 int FUNC_19 (struct brcms_phy*) ;
 int FUNC_20 (struct brcms_phy*) ;
 int FUNC_21 (struct brcms_phy*) ;
 int FUNC_22 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_23(struct brcms_phy *VAR_19, u16 VAR_20,
       const struct nphy_sfo_cfg *VAR_21)
{
 u16 VAR_22;

 VAR_22 = FUNC_13(VAR_19, 0x09) & VAR_10;
 if (FUNC_3(VAR_20) && !VAR_22) {

  VAR_22 = FUNC_9(VAR_19->d11core, FUNC_4(VAR_16));
  FUNC_10(VAR_19->d11core, FUNC_4(VAR_16),
        (VAR_22 | VAR_9));

  FUNC_12(VAR_19, (VAR_12 + VAR_7),
      (VAR_0 | VAR_1));

  FUNC_10(VAR_19->d11core, FUNC_4(VAR_16), VAR_22);

  FUNC_12(VAR_19, 0x09, VAR_10);
 } else if (!FUNC_3(VAR_20) && VAR_22) {

  FUNC_7(VAR_19, 0x09, ~VAR_10);

  VAR_22 = FUNC_9(VAR_19->d11core, FUNC_4(VAR_16));
  FUNC_10(VAR_19->d11core, FUNC_4(VAR_16),
        (VAR_22 | VAR_9));

  FUNC_7(VAR_19, (VAR_12 + VAR_7),
       (u16) (~(VAR_0 | VAR_1)));

  FUNC_10(VAR_19->d11core, FUNC_4(VAR_16), VAR_22);
 }

 FUNC_22(VAR_19, 0x1ce, VAR_21->PHY_BW1a);
 FUNC_22(VAR_19, 0x1cf, VAR_21->PHY_BW2);
 FUNC_22(VAR_19, 0x1d0, VAR_21->PHY_BW3);

 FUNC_22(VAR_19, 0x1d1, VAR_21->PHY_BW4);
 FUNC_22(VAR_19, 0x1d2, VAR_21->PHY_BW5);
 FUNC_22(VAR_19, 0x1d3, VAR_21->PHY_BW6);

 if (FUNC_0(VAR_19->radio_chanspec) == 14) {
  FUNC_17(VAR_19, VAR_11, 0);

  FUNC_12(VAR_19, VAR_12 + VAR_8, 0x800);
 } else {
  FUNC_17(VAR_19, VAR_11,
     VAR_11);

  if (FUNC_1(VAR_20))
   FUNC_7(VAR_19, VAR_12 + VAR_8, ~0x840);
 }

 if (VAR_19->nphy_txpwrctrl == VAR_13)
  FUNC_21(VAR_19);

 if (FUNC_6(VAR_19->pubpi.phy_rev, 3))
  FUNC_16(VAR_19);

 FUNC_20(VAR_19);

 if (FUNC_5(VAR_19->pubpi.phy_rev, 3)
     && (VAR_19->phy_spuravoid != VAR_14)) {
  u8 VAR_23 = 0;

  VAR_22 = FUNC_0(VAR_20);
  if (!FUNC_2(VAR_19->radio_chanspec)) {
   if (FUNC_5(VAR_19->pubpi.phy_rev, 7)) {
    if ((VAR_22 == 13) || (VAR_22 == 14) || (VAR_22 == 153))
     VAR_23 = 1;
   } else if (((VAR_22 >= 5) && (VAR_22 <= 8)) || (VAR_22 == 13)
       || (VAR_22 == 14)) {
    VAR_23 = 1;
   }
  } else if (FUNC_5(VAR_19->pubpi.phy_rev, 7)) {
   if (VAR_22 == 54)
    VAR_23 = 1;
  } else if (VAR_19->nphy_aband_spurwar_en &&
      ((VAR_22 == 38) || (VAR_22 == 102) || (VAR_22 == 118))) {
   if ((VAR_19->sh->chip == VAR_4)
       && (VAR_19->sh->chippkg == VAR_6)) {
    VAR_23 = 0;
   } else {
    VAR_23 = 1;
   }
  }

  if (VAR_19->phy_spuravoid == VAR_15)
   VAR_23 = 1;

  if ((VAR_19->sh->chip == VAR_4) ||
      (VAR_19->sh->chip == VAR_3)) {
   FUNC_8(&VAR_19->d11core->bus->drv_cc,
           VAR_23);
  } else {
   FUNC_14(VAR_19->sh->physhim, 0);
   FUNC_8(&VAR_19->d11core->bus->drv_cc,
           VAR_23);
   FUNC_14(VAR_19->sh->physhim, 1);
  }

  if ((VAR_19->sh->chip == VAR_2) ||
      (VAR_19->sh->chip == VAR_3)) {
   if (VAR_23 == 1) {
    FUNC_10(VAR_19->d11core,
          FUNC_4(VAR_18),
          0x5341);
    FUNC_10(VAR_19->d11core,
          FUNC_4(VAR_17), 0x8);
   } else {
    FUNC_10(VAR_19->d11core,
          FUNC_4(VAR_18),
          0x8889);
    FUNC_10(VAR_19->d11core,
          FUNC_4(VAR_17), 0x8);
   }
  }

  if (!((VAR_19->sh->chip == VAR_4) ||
        (VAR_19->sh->chip == VAR_5)))
   FUNC_15(VAR_19->sh->physhim);

  FUNC_11(VAR_19, 0x01, (0x1 << 15),
       ((VAR_23 > 0) ? (0x1 << 15) : 0));

  FUNC_18(VAR_19);

  VAR_19->phy_isspuravoid = (VAR_23 > 0);
 }

 if (FUNC_6(VAR_19->pubpi.phy_rev, 7))
  FUNC_22(VAR_19, 0x17e, 0x3830);

 FUNC_19(VAR_19);
}
