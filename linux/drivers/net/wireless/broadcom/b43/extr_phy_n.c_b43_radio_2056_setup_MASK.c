
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ssb_sprom {int boardflags2_lo; int boardflags2_hi; } ;
struct b43_phy {int rev; TYPE_4__* chandef; TYPE_2__* n; } ;
struct b43_wldev {struct b43_phy phy; TYPE_1__* dev; int wl; } ;
struct b43_nphy_channeltab_entry_rev3 {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_8__ {TYPE_3__* chan; } ;
struct TYPE_7__ {int center_freq; } ;
struct TYPE_6__ {scalar_t__ ipa5g_on; scalar_t__ ipa2g_on; } ;
struct TYPE_5__ {scalar_t__ chip_id; scalar_t__ chip_pkg; struct ssb_sprom* bus_sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,struct b43_nphy_channeltab_entry_rev3 const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_38,
    const struct b43_nphy_channeltab_entry_rev3 *VAR_39)
{
 struct b43_phy *VAR_40 = &VAR_38->phy;
 struct ssb_sprom *VAR_41 = VAR_38->dev->bus_sprom;
 enum nl80211_band VAR_42 = FUNC_3(VAR_38->wl);
 u16 VAR_43;
 u8 VAR_44;
 u16 VAR_45, VAR_46;
 u16 VAR_47, VAR_48, VAR_49, VAR_50;
 u16 VAR_51, VAR_52, VAR_53, VAR_54;
 bool VAR_55;

 FUNC_0(VAR_38->phy.rev < 3);

 VAR_55 =
  ((VAR_38->dev->chip_id == VAR_30 ||
    VAR_38->dev->chip_id == VAR_31 ||
    VAR_38->dev->chip_id == VAR_32) &&
   VAR_38->dev->chip_pkg == VAR_35);

 FUNC_2(VAR_38, VAR_39);
 FUNC_1(VAR_38, VAR_42 == VAR_37);

 if (VAR_41->boardflags2_lo & VAR_29 &&
     FUNC_3(VAR_38->wl) == VAR_36) {
  FUNC_5(VAR_38, VAR_1, 0x1F);
  FUNC_5(VAR_38, VAR_2, 0x1F);
  if (VAR_38->dev->chip_id == VAR_33 ||
      VAR_38->dev->chip_id == VAR_34) {
   FUNC_5(VAR_38, VAR_3, 0x14);
   FUNC_5(VAR_38, VAR_0, 0);
  } else {
   FUNC_5(VAR_38, VAR_3, 0x0B);
   FUNC_5(VAR_38, VAR_0, 0x14);
  }
 }
 if (VAR_41->boardflags2_hi & VAR_27 &&
     FUNC_3(VAR_38->wl) == VAR_36) {
  FUNC_5(VAR_38, VAR_1, 0x1f);
  FUNC_5(VAR_38, VAR_2, 0x1f);
  FUNC_5(VAR_38, VAR_3, 0x0b);
  FUNC_5(VAR_38, VAR_0, 0x20);
 }
 if (VAR_41->boardflags2_lo & VAR_28 &&
     FUNC_3(VAR_38->wl) == VAR_37) {
  FUNC_5(VAR_38, VAR_1, 0x1F);
  FUNC_5(VAR_38, VAR_2, 0x1F);
  FUNC_5(VAR_38, VAR_3, 0x05);
  FUNC_5(VAR_38, VAR_0, 0x0C);
 }

 if (VAR_38->phy.n->ipa2g_on && VAR_42 == VAR_36) {
  for (VAR_44 = 0; VAR_44 < 2; VAR_44++) {
   VAR_43 = VAR_44 ? VAR_6 : VAR_5;
   if (VAR_38->phy.rev >= 5) {
    FUNC_5(VAR_38,
     VAR_43 | VAR_21, 0xcc);

    if (VAR_38->dev->chip_id == VAR_33 ||
        VAR_38->dev->chip_id == VAR_34) {
     VAR_45 = 0x40;
     VAR_46 = 0x45;
     VAR_47 = 0x5;
     VAR_49 = 0x33;
     VAR_50 = 0x55;
    } else {
     VAR_45 = 0x25;
     VAR_46 = 0x20;
     if (VAR_55) {
      VAR_45 = 0x2a;
      VAR_46 = 0x38;
     }
     VAR_47 = 0x4;
     VAR_49 = 0x03;
     VAR_50 = 0x65;
    }
    VAR_48 = 0x77;

    FUNC_5(VAR_38,
     VAR_43 | VAR_15,
     VAR_45);
    FUNC_5(VAR_38,
     VAR_43 | VAR_14,
     VAR_45);
    FUNC_5(VAR_38,
     VAR_43 | VAR_13,
     VAR_46);
    FUNC_5(VAR_38,
     VAR_43 | VAR_12,
     VAR_47);
    FUNC_5(VAR_38,
     VAR_43 | VAR_25,
     VAR_49);
    FUNC_5(VAR_38,
     VAR_43 | VAR_20,
     VAR_48);
    FUNC_5(VAR_38,
     VAR_43 | VAR_17,
     VAR_50);
   } else {
    VAR_45 = FUNC_4(VAR_38) ? 0x40 : 0x20;
    FUNC_5(VAR_38,
     VAR_43 | VAR_15,
     VAR_45);
    FUNC_5(VAR_38,
     VAR_43 | VAR_14,
     VAR_45);
    FUNC_5(VAR_38,
     VAR_43 | VAR_13,
     0x30);
   }
   FUNC_5(VAR_38, VAR_43 | VAR_22, 0xee);
  }
 } else if (VAR_38->phy.n->ipa5g_on && VAR_42 == VAR_37) {
  u16 VAR_56 = VAR_40->chandef->chan->center_freq;
  if (VAR_56 < 5100) {
   VAR_51 = 0xA;
   VAR_52 = 0x77;
   VAR_53 = 0xF;
   VAR_54 = 0xF;
  } else if (VAR_56 < 5340) {
   VAR_51 = 0x8;
   VAR_52 = 0x77;
   VAR_53 = 0xFB;
   VAR_54 = 0xF;
  } else if (VAR_56 < 5650) {
   VAR_51 = 0x0;
   VAR_52 = 0x77;
   VAR_53 = 0xB;
   VAR_54 = 0xF;
  } else {
   VAR_51 = 0x0;
   VAR_52 = 0x77;
   if (VAR_56 != 5825)
    VAR_53 = -(VAR_56 - 18) / 36 + 168;
   else
    VAR_53 = 6;
   VAR_54 = 0xF;
  }

  VAR_46 = VAR_55 ? 0x35 : 0x30;

  for (VAR_44 = 0; VAR_44 < 2; VAR_44++) {
   VAR_43 = VAR_44 ? VAR_6 : VAR_5;

   FUNC_5(VAR_38,
    VAR_43 | VAR_7, VAR_51);
   FUNC_5(VAR_38,
    VAR_43 | VAR_18, VAR_52);
   FUNC_5(VAR_38,
    VAR_43 | VAR_24, VAR_53);
   FUNC_5(VAR_38,
    VAR_43 | VAR_16, VAR_54);
   FUNC_5(VAR_38,
    VAR_43 | VAR_26, 0x30);
   FUNC_5(VAR_38,
    VAR_43 | VAR_23, 0xee);
   FUNC_5(VAR_38,
    VAR_43 | VAR_19, 0x03);
   FUNC_5(VAR_38,
    VAR_43 | VAR_9, 0x30);
   FUNC_5(VAR_38,
    VAR_43 | VAR_10, 0x30);
   FUNC_5(VAR_38,
    VAR_43 | VAR_8, VAR_46);
  }
 }

 FUNC_6(50);

 FUNC_5(VAR_38, VAR_4, 0x00);
 FUNC_5(VAR_38, VAR_11, 0x38);
 FUNC_5(VAR_38, VAR_11, 0x18);
 FUNC_5(VAR_38, VAR_11, 0x38);
 FUNC_5(VAR_38, VAR_11, 0x39);
 FUNC_6(300);
}
