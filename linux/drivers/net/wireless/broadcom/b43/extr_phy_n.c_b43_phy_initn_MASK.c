
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
struct ssb_sprom {int boardflags_lo; int boardflags2_hi; int boardflags2_lo; } ;
struct nphy_txgains {int dummy; } ;
struct b43_phy {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {int wl; TYPE_10__* dev; struct b43_phy phy; } ;
struct TYPE_15__ {int center_freq; } ;
struct TYPE_14__ {int center_freq; } ;
struct TYPE_13__ {int center_freq; } ;
struct TYPE_12__ {int center_freq; } ;
struct b43_phy_n {int use_int_tx_iq_lo_cal; int crsminpwr_adjusted; int noisevars_adjusted; int* papd_epsilon_offset; int txpwrctrl; int phyrxchain; scalar_t__ mphase_cal_phase_id; int measure_hold; int antsel_type; int perical; TYPE_5__* txpwrindex; int * cal_orig_pwr_idx; scalar_t__ mute; TYPE_4__ iqcal_chanspec_5G; TYPE_3__ iqcal_chanspec_2G; TYPE_2__ rssical_chanspec_5G; TYPE_1__ rssical_chanspec_2G; int preamble_override; scalar_t__ deaf_count; } ;
struct TYPE_20__ {TYPE_8__* bus; } ;
struct TYPE_19__ {int chipco; } ;
struct TYPE_18__ {TYPE_6__* bus; } ;
struct TYPE_17__ {int drv_cc; } ;
struct TYPE_16__ {int index_internal; } ;
struct TYPE_11__ {int bus_type; scalar_t__ board_vendor; scalar_t__ board_type; TYPE_9__* sdev; TYPE_7__* bdev; struct ssb_sprom* bus_sprom; } ;


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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*) ;
 scalar_t__ FUNC_3 (struct b43_wldev*,struct nphy_txgains,int,int ) ;
 int FUNC_4 (struct b43_wldev*,struct nphy_txgains,int,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int ) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*,int ) ;
 struct nphy_txgains FUNC_8 (struct b43_wldev*) ;
 int FUNC_9 (struct b43_wldev*) ;
 scalar_t__ FUNC_10 (struct b43_wldev*) ;
 int FUNC_11 (struct b43_wldev*,int) ;
 int FUNC_12 (struct b43_wldev*,int*) ;
 int FUNC_13 (struct b43_wldev*) ;
 int FUNC_14 (struct b43_wldev*) ;
 int FUNC_15 (struct b43_wldev*) ;
 int FUNC_16 (struct b43_wldev*) ;
 int FUNC_17 (struct b43_wldev*,int) ;
 int FUNC_18 (struct b43_wldev*) ;
 int FUNC_19 (struct b43_wldev*,int) ;
 int FUNC_20 (struct b43_wldev*) ;
 int FUNC_21 (struct b43_wldev*) ;
 int FUNC_22 (struct b43_wldev*) ;
 int FUNC_23 (struct b43_wldev*) ;
 int FUNC_24 (struct b43_wldev*) ;
 int FUNC_25 (struct b43_wldev*,int) ;
 int FUNC_26 (struct b43_wldev*) ;
 int FUNC_27 (struct b43_wldev*) ;
 int FUNC_28 (struct b43_wldev*,int ) ;
 int FUNC_29 (struct b43_wldev*) ;
 int FUNC_30 (struct b43_wldev*) ;
 int FUNC_31 (struct b43_wldev*,int) ;
 int FUNC_32 (struct b43_wldev*,int ,int) ;
 int FUNC_33 (struct b43_wldev*,int ,int,int) ;
 int FUNC_34 (struct b43_wldev*,int ) ;
 int FUNC_35 (struct b43_wldev*,int ,int) ;
 int FUNC_36 (struct b43_wldev*,int ,int) ;
 int FUNC_37 (int *,int ,int) ;
 int FUNC_38 (int *,int ,int) ;

__attribute__((used)) static int FUNC_39(struct b43_wldev *VAR_46)
{
 struct ssb_sprom *VAR_47 = VAR_46->dev->bus_sprom;
 struct b43_phy *VAR_48 = &VAR_46->phy;
 struct b43_phy_n *VAR_49 = VAR_48->n;
 u8 VAR_50;
 struct nphy_txgains VAR_51;
 u16 VAR_52;
 bool VAR_53;

 u16 VAR_54[2];
 bool VAR_55 = 0;

 if ((VAR_46->phy.rev >= 3) &&
    (VAR_47->boardflags_lo & VAR_2) &&
    (FUNC_0(VAR_46->wl) == VAR_43)) {
  switch (VAR_46->dev->bus_type) {
  }
 }
 VAR_49->use_int_tx_iq_lo_cal = FUNC_10(VAR_46) ||
  VAR_48->rev >= 7 ||
  (VAR_48->rev >= 5 &&
   VAR_47->boardflags2_hi & VAR_0);
 VAR_49->deaf_count = 0;
 FUNC_20(VAR_46);
 VAR_49->crsminpwr_adjusted = 0;
 VAR_49->noisevars_adjusted = 0;


 if (VAR_46->phy.rev >= 3) {
  FUNC_36(VAR_46, VAR_33, 0);
  FUNC_36(VAR_46, VAR_28, 0);
  if (VAR_48->rev >= 7) {
   FUNC_36(VAR_46, VAR_20, 0);
   FUNC_36(VAR_46, VAR_21, 0);
   FUNC_36(VAR_46, VAR_22, 0);
   FUNC_36(VAR_46, VAR_23, 0);
  }
  if (VAR_48->rev >= 19) {

  }

  FUNC_36(VAR_46, VAR_32, 0);
  FUNC_36(VAR_46, VAR_34, 0);
 } else {
  FUNC_36(VAR_46, VAR_28, 0);
 }
 FUNC_36(VAR_46, VAR_24, 0);
 FUNC_36(VAR_46, VAR_25, 0);
 if (VAR_46->phy.rev < 6) {
  FUNC_36(VAR_46, VAR_26, 0);
  FUNC_36(VAR_46, VAR_27, 0);
 }
 FUNC_32(VAR_46, VAR_29,
       ~(VAR_30 |
         VAR_31));
 if (VAR_46->phy.rev >= 3)
  FUNC_36(VAR_46, VAR_4, 0);
 FUNC_36(VAR_46, VAR_3, 0);

 if (VAR_46->phy.rev <= 2) {
  VAR_52 = (VAR_46->phy.rev == 2) ? 0x3B : 0x40;
  FUNC_33(VAR_46, VAR_9,
    ~VAR_10,
    VAR_52 << VAR_11);
 }
 FUNC_36(VAR_46, VAR_5, 0x20);
 FUNC_36(VAR_46, VAR_6, 0x20);

 if (VAR_47->boardflags2_lo & VAR_1 ||
     (VAR_46->dev->board_vendor == VAR_44 &&
      VAR_46->dev->board_type == VAR_41))
  FUNC_36(VAR_46, VAR_37, 0xA0);
 else
  FUNC_36(VAR_46, VAR_37, 0xB8);
 FUNC_36(VAR_46, VAR_16, 0xC8);
 FUNC_36(VAR_46, VAR_19, 0x50);
 FUNC_36(VAR_46, VAR_38, 0x30);

 if (VAR_48->rev < 8)
  FUNC_28(VAR_46, VAR_49->preamble_override);

 FUNC_29(VAR_46);

 if (VAR_48->rev < 2) {
  FUNC_36(VAR_46, VAR_13, 0xAA8);
  FUNC_36(VAR_46, VAR_12, 0x9A4);
 }

 if (FUNC_10(VAR_46)) {
  FUNC_35(VAR_46, VAR_17, 0x1);
  FUNC_33(VAR_46, VAR_14, 0x007F,
    VAR_49->papd_epsilon_offset[0] << 7);
  FUNC_35(VAR_46, VAR_18, 0x1);
  FUNC_33(VAR_46, VAR_15, 0x007F,
    VAR_49->papd_epsilon_offset[1] << 7);
  FUNC_9(VAR_46);
 } else if (VAR_48->rev >= 5) {
  FUNC_6(VAR_46);
 }

 FUNC_30(VAR_46);


 FUNC_31(VAR_46, 1);
 VAR_52 = FUNC_34(VAR_46, VAR_7);
 FUNC_36(VAR_46, VAR_7, VAR_52 | VAR_8);
 FUNC_36(VAR_46, VAR_7, VAR_52 & ~VAR_8);
 FUNC_31(VAR_46, 0);

 FUNC_1(VAR_46, 1);

 if (VAR_48->rev < 7) {
  FUNC_11(VAR_46, 0);
  FUNC_7(VAR_46, VAR_40);
  FUNC_7(VAR_46, VAR_39);
  FUNC_11(VAR_46, 1);
 }

 FUNC_5(VAR_46, 0, 0);
 FUNC_12(VAR_46, VAR_54);
 if (FUNC_0(VAR_46->wl) == VAR_43)
  FUNC_2(VAR_46);

 VAR_50 = VAR_49->txpwrctrl;
 FUNC_25(VAR_46, 0);
 FUNC_26(VAR_46);
 FUNC_23(VAR_46);
 FUNC_24(VAR_46);
 FUNC_21(VAR_46);

 if (VAR_49->phyrxchain != 3)
  FUNC_17(VAR_46, VAR_49->phyrxchain);
 if (VAR_49->mphase_cal_phase_id > 0)
  ;

 VAR_53 = 0;
 if (VAR_48->rev >= 3) {
  if (FUNC_0(VAR_46->wl) == VAR_43)
   VAR_53 = !VAR_49->rssical_chanspec_2G.center_freq;
  else
   VAR_53 = !VAR_49->rssical_chanspec_5G.center_freq;

  if (VAR_53)
   FUNC_15(VAR_46);
  else
   FUNC_14(VAR_46);
 } else {
  FUNC_15(VAR_46);
 }

 if (!((VAR_49->measure_hold & 0x6) != 0)) {
  if (FUNC_0(VAR_46->wl) == VAR_43)
   VAR_55 = !VAR_49->iqcal_chanspec_2G.center_freq;
  else
   VAR_55 = !VAR_49->iqcal_chanspec_5G.center_freq;

  if (VAR_49->mute)
   VAR_55 = 0;

  if (VAR_55) {
   VAR_51 = FUNC_8(VAR_46);

   if (VAR_49->antsel_type == 2)
    FUNC_19(VAR_46, 1);
   if (VAR_49->perical != 2) {
    FUNC_15(VAR_46);
    if (VAR_48->rev >= 3) {
     VAR_49->cal_orig_pwr_idx[0] =
         VAR_49->txpwrindex[0].index_internal;
     VAR_49->cal_orig_pwr_idx[1] =
         VAR_49->txpwrindex[1].index_internal;

     VAR_51 = FUNC_8(VAR_46);
    }
    if (!FUNC_4(VAR_46, VAR_51, 1, 0))
     if (FUNC_3(VAR_46, VAR_51, 2, 0) == 0)
      FUNC_16(VAR_46);
   } else if (VAR_49->mphase_cal_phase_id == 0)
    ;
  } else {
   FUNC_13(VAR_46);
  }
 }

 FUNC_27(VAR_46);
 FUNC_25(VAR_46, VAR_50);
 FUNC_36(VAR_46, VAR_36, 0x0015);
 FUNC_36(VAR_46, VAR_35, 0x0320);
 if (VAR_48->rev >= 3 && VAR_48->rev <= 6)
  FUNC_36(VAR_46, VAR_19, 0x0032);
 FUNC_22(VAR_46);
 if (VAR_48->rev >= 3)
  FUNC_18(VAR_46);

 return 0;
}
