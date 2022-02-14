
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nphy_txgains {int dummy; } ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_15__ {size_t phy_corenum; int radiorev; int phy_rev; } ;
struct TYPE_12__ {int extpagain; } ;
struct TYPE_11__ {int extpagain; } ;
struct brcms_phy {int measure_hold; int use_int_tx_iqlo_cal_nphy; int internal_tx_iqlo_cal_tapoff_intpa_nphy; int nphy_crsminpwr_adjusted; int nphy_noisevars_adjusted; int* nphy_papd_epsilon_offset; int nphy_gmval; scalar_t__ nphy_rssical_chanspec_2G; scalar_t__ nphy_rssical_chanspec_5G; scalar_t__ nphy_iqcal_chanspec_2G; scalar_t__ nphy_iqcal_chanspec_5G; scalar_t__ antsel_type; scalar_t__ nphy_perical; scalar_t__ mphase_cal_phase_id; TYPE_6__ pubpi; TYPE_5__* sh; TYPE_4__* nphy_txpwrindex; int * nphy_cal_orig_pwr_idx; int do_initcal; int radio_chanspec; TYPE_3__ srom_fem2g; TYPE_2__ srom_fem5g; int nphy_txpwrctrl; int n_preamble_override; scalar_t__ nphy_deaf_count; TYPE_7__* d11core; scalar_t__ nphy_gband_spurwar2_en; } ;
typedef int s32 ;
typedef size_t s16 ;
struct TYPE_16__ {TYPE_1__* bus; } ;
struct TYPE_14__ {scalar_t__ chippkg; int boardflags; scalar_t__ chip; int boardflags2; int phyrxchain; int _rifs_phy; int physhim; } ;
struct TYPE_13__ {int index_internal; } ;
struct TYPE_10__ {int drv_cc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct brcms_phy*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_9 (struct brcms_phy*) ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_10 (struct brcms_phy*) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_11 (struct brcms_phy*) ;
 int FUNC_12 (struct brcms_phy*,int,int) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (int *,int,int ,int ) ;
 int FUNC_15 (TYPE_7__*,int ,int) ;
 int FUNC_16 (TYPE_7__*,int ) ;
 int FUNC_17 (TYPE_7__*,int ,int) ;
 int VAR_26 ;
 int FUNC_18 (struct brcms_phy*,size_t,size_t) ;
 int FUNC_19 (struct brcms_phy*,int,int,int) ;
 scalar_t__* VAR_27 ;
 scalar_t__* VAR_28 ;
 int* VAR_29 ;
 int* VAR_30 ;
 int* VAR_31 ;
 int* VAR_32 ;
 int* VAR_33 ;
 int* VAR_34 ;
 int* VAR_35 ;
 int* VAR_36 ;
 int* VAR_37 ;
 int FUNC_20 (struct brcms_phy*,int) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (struct brcms_phy_pub*,int) ;
 int FUNC_24 (struct brcms_phy*) ;
 int FUNC_25 (struct brcms_phy_pub*,int ) ;
 int FUNC_26 (struct brcms_phy*) ;
 scalar_t__ FUNC_27 (struct brcms_phy*,struct nphy_txgains,int,int) ;
 scalar_t__ FUNC_28 (struct brcms_phy*,struct nphy_txgains,int,int) ;
 int FUNC_29 (struct brcms_phy*,int ,int ) ;
 int FUNC_30 (struct brcms_phy*,int ,int*) ;
 int FUNC_31 (struct brcms_phy*) ;
 int FUNC_32 (struct brcms_phy*,int ) ;
 int* FUNC_33 (struct brcms_phy*) ;
 struct nphy_txgains FUNC_34 (struct brcms_phy*) ;
 int FUNC_35 (struct brcms_phy*) ;
 int FUNC_36 (struct brcms_phy*,int ) ;
 int FUNC_37 (struct brcms_phy*,int ) ;
 int FUNC_38 (struct brcms_phy*) ;
 int FUNC_39 (struct brcms_phy*) ;
 int FUNC_40 (struct brcms_phy*) ;
 int FUNC_41 (struct brcms_phy*) ;
 int FUNC_42 (struct brcms_phy_pub*,int) ;
 int FUNC_43 (struct brcms_phy*) ;
 int FUNC_44 (struct brcms_phy*) ;
 int FUNC_45 (struct brcms_phy*) ;
 int FUNC_46 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_47 (struct brcms_phy*) ;
 int FUNC_48 (struct brcms_phy*) ;
 int FUNC_49 (struct brcms_phy*) ;
 int FUNC_50 (struct brcms_phy*) ;
 int FUNC_51 (struct brcms_phy*,int ) ;
 int FUNC_52 (struct brcms_phy*) ;
 int FUNC_53 (struct brcms_phy*) ;
 int FUNC_54 (struct brcms_phy*,int ) ;
 int FUNC_55 (struct brcms_phy*) ;
 int FUNC_56 (struct brcms_phy*,int,int) ;

void FUNC_57(struct brcms_phy *VAR_38)
{
 u16 VAR_39;
 u16 VAR_40[2];
 struct nphy_txgains VAR_41;
 u8 VAR_42;
 bool VAR_43 = 0;
 uint VAR_44;
 u32 VAR_45;
 bool VAR_46 = 0;

 VAR_44 = 0;

 if (!(VAR_38->measure_hold & VAR_22))
  VAR_38->measure_hold |= VAR_21;

 if ((FUNC_4(VAR_38)) && (FUNC_5(VAR_38->pubpi.phy_rev, 5)) &&
     ((VAR_38->sh->chippkg == VAR_4) ||
      (VAR_38->sh->chippkg == VAR_5))) {
  if ((VAR_38->sh->boardflags & VAR_8) &&
      (FUNC_0(VAR_38->radio_chanspec)))
   FUNC_13(&VAR_38->d11core->bus->drv_cc,
          VAR_2, 0x40);
 }

 if ((!FUNC_9(VAR_38)) && (VAR_38->sh->chip == VAR_3))
  FUNC_14(&VAR_38->d11core->bus->drv_cc, 1,
         ~VAR_11, VAR_11);

 if ((VAR_38->nphy_gband_spurwar2_en) && FUNC_0(VAR_38->radio_chanspec) &&
     FUNC_1(VAR_38->radio_chanspec)) {

  VAR_45 = FUNC_16(VAR_38->d11core,
          FUNC_3(VAR_26));
  FUNC_15(VAR_38->d11core, FUNC_3(VAR_26),
       ~(VAR_9 | VAR_10));

  FUNC_17(VAR_38->d11core, FUNC_3(VAR_26),
        VAR_45);
 }

 VAR_38->use_int_tx_iqlo_cal_nphy =
  (FUNC_9(VAR_38) ||
   (FUNC_5(VAR_38->pubpi.phy_rev, 7) ||
    (FUNC_5(VAR_38->pubpi.phy_rev, 5)
     && VAR_38->sh->boardflags2 & VAR_6)));

 VAR_38->internal_tx_iqlo_cal_tapoff_intpa_nphy = 0;

 VAR_38->nphy_deaf_count = 0;

 FUNC_47(VAR_38);

 VAR_38->nphy_crsminpwr_adjusted = 0;
 VAR_38->nphy_noisevars_adjusted = 0;

 if (FUNC_5(VAR_38->pubpi.phy_rev, 3)) {
  FUNC_56(VAR_38, 0xe7, 0);
  FUNC_56(VAR_38, 0xec, 0);
  if (FUNC_5(VAR_38->pubpi.phy_rev, 7)) {
   FUNC_56(VAR_38, 0x342, 0);
   FUNC_56(VAR_38, 0x343, 0);
   FUNC_56(VAR_38, 0x346, 0);
   FUNC_56(VAR_38, 0x347, 0);
  }
  FUNC_56(VAR_38, 0xe5, 0);
  FUNC_56(VAR_38, 0xe6, 0);
 } else {
  FUNC_56(VAR_38, 0xec, 0);
 }

 FUNC_56(VAR_38, 0x91, 0);
 FUNC_56(VAR_38, 0x92, 0);
 if (FUNC_8(VAR_38->pubpi.phy_rev, 6)) {
  FUNC_56(VAR_38, 0x93, 0);
  FUNC_56(VAR_38, 0x94, 0);
 }

 FUNC_12(VAR_38, 0xa1, ~3);

 if (FUNC_5(VAR_38->pubpi.phy_rev, 3)) {
  FUNC_56(VAR_38, 0x8f, 0);
  FUNC_56(VAR_38, 0xa5, 0);
 } else {
  FUNC_56(VAR_38, 0xa5, 0);
 }

 if (FUNC_6(VAR_38->pubpi.phy_rev, 2))
  FUNC_19(VAR_38, 0xdc, 0x00ff, 0x3b);
 else if (FUNC_8(VAR_38->pubpi.phy_rev, 2))
  FUNC_19(VAR_38, 0xdc, 0x00ff, 0x40);

 FUNC_56(VAR_38, 0x203, 32);
 FUNC_56(VAR_38, 0x201, 32);

 if (VAR_38->sh->boardflags2 & VAR_7)
  FUNC_56(VAR_38, 0x20d, 160);
 else
  FUNC_56(VAR_38, 0x20d, 184);

 FUNC_56(VAR_38, 0x13a, 200);

 FUNC_56(VAR_38, 0x70, 80);

 FUNC_56(VAR_38, 0x1ff, 48);

 if (FUNC_8(VAR_38->pubpi.phy_rev, 8))
  FUNC_54(VAR_38, VAR_38->n_preamble_override);

 FUNC_45(VAR_38);

 if (FUNC_8(VAR_38->pubpi.phy_rev, 2)) {
  FUNC_56(VAR_38, 0x180, 0xaa8);
  FUNC_56(VAR_38, 0x181, 0x9a4);
 }

 if (FUNC_9(VAR_38)) {
  for (VAR_44 = 0; VAR_44 < VAR_38->pubpi.phy_corenum; VAR_44++) {

   FUNC_19(VAR_38, (VAR_44 == VAR_19) ? 0x297 :
        0x29b, (0x1 << 0), (1) << 0);

   FUNC_19(VAR_38, (VAR_44 == VAR_19) ? 0x298 :
        0x29c, (0x1ff << 7),
        (VAR_38->nphy_papd_epsilon_offset[VAR_44]) << 7);

  }

  FUNC_35(VAR_38);
 } else if (FUNC_5(VAR_38->pubpi.phy_rev, 5)) {
  FUNC_31(VAR_38);
 }

 FUNC_55(VAR_38);

 FUNC_22(VAR_38->sh->physhim, VAR_18);

 VAR_39 = FUNC_20(VAR_38, 0x01);
 FUNC_56(VAR_38, 0x01, VAR_39 | VAR_1);
 FUNC_56(VAR_38, 0x01, VAR_39 & (~VAR_1));
 FUNC_22(VAR_38->sh->physhim, VAR_17);

 FUNC_21(VAR_38->sh->physhim, VAR_18);

 FUNC_37(VAR_38, VAR_17);
 FUNC_32(VAR_38, VAR_14);
 FUNC_32(VAR_38, VAR_13);
 FUNC_37(VAR_38, VAR_18);

 FUNC_29(VAR_38, 0, 0);
 FUNC_30(VAR_38, 0, VAR_40);

 if (FUNC_0(VAR_38->radio_chanspec))
  FUNC_24(VAR_38);

 VAR_42 = VAR_38->nphy_txpwrctrl;
 FUNC_51(VAR_38, VAR_25);

 FUNC_49(VAR_38);

 FUNC_52(VAR_38);

 FUNC_53(VAR_38);

 if (FUNC_5(VAR_38->pubpi.phy_rev, 3)) {
  u32 *VAR_47 = ((void*)0);
  u16 VAR_48;
  s16 VAR_49 = 0;
  s16 VAR_50 = 0;
  s32 VAR_51;

  if (FUNC_9(VAR_38)) {
   VAR_47 = FUNC_33(VAR_38);
  } else {
   if (FUNC_2(VAR_38->radio_chanspec)) {
    if (FUNC_6(VAR_38->pubpi.phy_rev, 3))
     VAR_47 =
      VAR_30;
    else if (FUNC_6(VAR_38->pubpi.phy_rev, 4))
     VAR_47 =
      (VAR_38->srom_fem5g.extpagain ==
       3) ?
      VAR_29 :
      VAR_31;
    else
     VAR_47 =
      VAR_32;
   } else {
    if (FUNC_5(VAR_38->pubpi.phy_rev, 7)) {
     if (VAR_38->pubpi.radiorev == 5)
      VAR_47 =
         VAR_36;
     else if (VAR_38->pubpi.radiorev == 3)
      VAR_47 =
         VAR_35;
    } else {
     if (FUNC_5(VAR_38->pubpi.phy_rev, 5) &&
         (VAR_38->srom_fem2g.extpagain == 3))
      VAR_47 =
             VAR_34;
     else
      VAR_47 =
       VAR_37;
    }
   }
  }

  FUNC_46(VAR_38, VAR_15, 128,
      192, 32, VAR_47);
  FUNC_46(VAR_38, VAR_16, 128,
      192, 32, VAR_47);

  VAR_38->nphy_gmval = (u16) ((*VAR_47 >> 16) & 0x7000);

  if (FUNC_5(VAR_38->pubpi.phy_rev, 7)) {

   for (VAR_48 = 0; VAR_48 < 128; VAR_48++) {
    VAR_49 = (VAR_47[VAR_48] >> 24) & 0xf;
    VAR_50 = (VAR_47[VAR_48] >> 19) & 0x1f;
    VAR_51 = FUNC_18(VAR_38, VAR_49,
         VAR_50);
    FUNC_46(
     VAR_38,
     VAR_15,
     1, 576 + VAR_48, 32,
     &VAR_51);
    FUNC_46(
     VAR_38,
     VAR_16,
     1, 576 + VAR_48, 32,
     &VAR_51);
   }
  } else {

   for (VAR_48 = 0; VAR_48 < 128; VAR_48++) {
    VAR_49 = (VAR_47[VAR_48] >> 24) & 0xf;
    if (FUNC_0(VAR_38->radio_chanspec))
     VAR_51 = (s16)
       VAR_27
               [VAR_49];
    else
     VAR_51 = (s16)
       VAR_28
               [VAR_49];

    FUNC_46(
     VAR_38,
     VAR_15,
     1, 576 + VAR_48, 32,
     &VAR_51);
    FUNC_46(
     VAR_38,
     VAR_16,
     1, 576 + VAR_48, 32,
     &VAR_51);
   }

  }
 } else {

  FUNC_46(VAR_38, VAR_15, 128,
      192, 32, VAR_33);
  FUNC_46(VAR_38, VAR_16, 128,
      192, 32, VAR_33);
 }

 if (VAR_38->sh->phyrxchain != 0x3)
  FUNC_42((struct brcms_phy_pub *) VAR_38,
          VAR_38->sh->phyrxchain);

 if (FUNC_10(VAR_38))
  FUNC_26(VAR_38);

 if (FUNC_5(VAR_38->pubpi.phy_rev, 3)) {
  VAR_46 = (FUNC_0(VAR_38->radio_chanspec)) ?
         (VAR_38->nphy_rssical_chanspec_2G == 0) :
         (VAR_38->nphy_rssical_chanspec_5G == 0);

  if (VAR_46)
   FUNC_41(VAR_38);
  else
   FUNC_39(VAR_38);
 } else {
  FUNC_41(VAR_38);
 }

 if (!FUNC_11(VAR_38))
  VAR_43 = (FUNC_0(VAR_38->radio_chanspec)) ?
         (VAR_38->nphy_iqcal_chanspec_2G == 0) :
         (VAR_38->nphy_iqcal_chanspec_5G == 0);

 if (!VAR_38->do_initcal)
  VAR_43 = 0;

 if (VAR_43) {

  VAR_41 = FUNC_34(VAR_38);

  if (VAR_38->antsel_type == VAR_0)
   FUNC_23((struct brcms_phy_pub *) VAR_38,
         1);

  if (VAR_38->nphy_perical != VAR_23) {
   FUNC_41(VAR_38);

   if (FUNC_5(VAR_38->pubpi.phy_rev, 3)) {
    VAR_38->nphy_cal_orig_pwr_idx[0] =
     VAR_38->nphy_txpwrindex[VAR_19]
     .
     index_internal;
    VAR_38->nphy_cal_orig_pwr_idx[1] =
     VAR_38->nphy_txpwrindex[VAR_20]
     .
     index_internal;

    FUNC_38(VAR_38);
    VAR_41 =
     FUNC_34(VAR_38);
   }

   if (FUNC_28
        (VAR_38, VAR_41, 1,
        0) == 0) {
    if (FUNC_27
         (VAR_38, VAR_41, 2,
         0) == 0)
     FUNC_43(VAR_38);

   }
  } else if (VAR_38->mphase_cal_phase_id ==
      VAR_12) {
   FUNC_25((struct brcms_phy_pub *) VAR_38,
         VAR_24);
  }
 } else {
  FUNC_40(VAR_38);
 }

 FUNC_50(VAR_38);

 FUNC_51(VAR_38, VAR_42);

 FUNC_36(VAR_38, VAR_38->sh->_rifs_phy);

 if (FUNC_5(VAR_38->pubpi.phy_rev, 3) && FUNC_7(VAR_38->pubpi.phy_rev, 6))

  FUNC_56(VAR_38, 0x70, 50);

 FUNC_48(VAR_38);

 FUNC_44(VAR_38);

}
