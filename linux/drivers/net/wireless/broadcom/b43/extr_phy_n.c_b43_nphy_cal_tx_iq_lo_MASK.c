
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct nphy_txgains {int dummy; } ;
struct nphy_iqcal_params {size_t cal_gain; int* ncorr; } ;
struct b43_phy {int rev; TYPE_3__* chandef; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; int wl; } ;
struct TYPE_5__ {int channel_type; int center_freq; } ;
struct b43_phy_n {int hang_avoid; int mphase_cal_phase_id; size_t* mphase_txcal_bestcoeffs; int txiqlocal_coeffsvalid; size_t* txiqlocal_bestc; size_t mphase_txcal_cmdidx; TYPE_2__ txiqlocal_chanspec; scalar_t__ mphase_txcal_numcmds; scalar_t__ ipa2g_on; } ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct TYPE_4__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int,struct nphy_txgains,struct nphy_iqcal_params*) ;
 int FUNC_4 (struct b43_wldev*,int,int,int ,int,int,int) ;
 int FUNC_5 (struct b43_wldev*,int) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*) ;
 int FUNC_9 (struct b43_wldev*) ;
 int FUNC_10 (struct b43_wldev*) ;
 int FUNC_11 (struct b43_wldev*,int,int,int,int,int) ;
 int FUNC_12 (struct b43_wldev*,size_t) ;
 size_t FUNC_13 (struct b43_wldev*,int ) ;
 int FUNC_14 (struct b43_wldev*,int ,int,size_t*) ;
 int FUNC_15 (struct b43_wldev*,int ,int ) ;
 int FUNC_16 (struct b43_wldev*,int ,int,size_t const*) ;
 size_t FUNC_17 (struct b43_wldev*,int ) ;
 int FUNC_18 (struct b43_wldev*,int ,size_t) ;
 int FUNC_19 (TYPE_3__*) ;
 size_t FUNC_20 (size_t,size_t) ;
 size_t* VAR_10 ;
 size_t* VAR_11 ;
 size_t* VAR_12 ;
 size_t* VAR_13 ;
 size_t* VAR_14 ;
 size_t* VAR_15 ;
 size_t* VAR_16 ;
 size_t* VAR_17 ;
 size_t* VAR_18 ;
 size_t* VAR_19 ;
 int FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(struct b43_wldev *VAR_20,
    struct nphy_txgains VAR_21,
    bool VAR_22, bool VAR_23)
{
 struct b43_phy *VAR_24 = &VAR_20->phy;
 struct b43_phy_n *VAR_25 = VAR_20->phy.n;
 int VAR_26;
 int VAR_27 = 0;
 int VAR_28;
 bool VAR_29 = 0;
 u8 VAR_30;
 u16 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37 = 0, VAR_38;
 const u16 *VAR_39;
 bool VAR_40;

 u16 VAR_41[11];
 u16 VAR_42 = 0;
 u16 VAR_43[2];
 u16 VAR_44[2];
 struct nphy_iqcal_params VAR_45[2];
 bool VAR_46[2] = { };

 FUNC_5(VAR_20, 1);

 if (VAR_20->phy.rev >= 4) {
  VAR_29 = VAR_25->hang_avoid;
  VAR_25->hang_avoid = 0;
 }

 FUNC_14(VAR_20, FUNC_0(7, 0x110), 2, VAR_43);

 for (VAR_26 = 0; VAR_26 < 2; VAR_26++) {
  FUNC_3(VAR_20, VAR_26, VAR_21, &VAR_45[VAR_26]);
  VAR_44[VAR_26] = VAR_45[VAR_26].cal_gain;
 }

 FUNC_16(VAR_20, FUNC_0(7, 0x110), 2, VAR_44);

 FUNC_9(VAR_20);
 FUNC_8(VAR_20);

 VAR_40 = VAR_20->phy.rev >= 6 ||
  (VAR_20->phy.rev == 5 && VAR_25->ipa2g_on &&
  FUNC_1(VAR_20->wl) == VAR_9);
 if (VAR_40) {
  if (FUNC_2(VAR_20)) {
   FUNC_16(VAR_20, FUNC_0(15, 0), 18,
     VAR_17);
   FUNC_16(VAR_20, FUNC_0(15, 32), 18,
     VAR_15);
  } else {
   FUNC_16(VAR_20, FUNC_0(15, 0), 18,
     VAR_16);
   FUNC_16(VAR_20, FUNC_0(15, 32), 18,
     VAR_14);
  }
 }

 if (VAR_24->rev >= 19) {

 } else if (VAR_24->rev >= 7) {
  FUNC_18(VAR_20, VAR_1, 0x8AD9);
 } else {
  FUNC_18(VAR_20, VAR_1, 0x8AA9);
 }

 if (!FUNC_2(VAR_20))
  VAR_28 = 2500;
 else
  VAR_28 = 5000;

 if (VAR_25->mphase_cal_phase_id > 2)
  FUNC_4(VAR_20, (FUNC_2(VAR_20) ? 40 : 20) * 8,
         0xFFFF, 0, 1, 0, 0);
 else
  VAR_27 = FUNC_11(VAR_20, VAR_28, 250, 1, 0, 0);

 if (VAR_27 == 0) {
  if (VAR_25->mphase_cal_phase_id > 2) {
   VAR_39 = VAR_25->mphase_txcal_bestcoeffs;
   VAR_30 = 11;
   if (VAR_20->phy.rev < 3)
    VAR_30 -= 2;
  } else {
   if (!VAR_22 && VAR_25->txiqlocal_coeffsvalid) {
    VAR_39 = VAR_25->txiqlocal_bestc;
    VAR_30 = 11;
    if (VAR_20->phy.rev < 3)
     VAR_30 -= 2;
   } else {
    VAR_22 = 1;
    if (VAR_20->phy.rev >= 3) {
     VAR_39 = VAR_19;
     VAR_30 = VAR_8;
    } else {
     VAR_39 = VAR_18;
     VAR_30 = VAR_7;
    }
   }
  }

  FUNC_16(VAR_20, FUNC_0(15, 64), VAR_30, VAR_39);

  if (VAR_22) {
   if (VAR_20->phy.rev >= 3)
    VAR_35 = VAR_4;
   else
    VAR_35 = VAR_3;
  } else {
   if (VAR_20->phy.rev >= 3)
    VAR_35 = VAR_6;
   else
    VAR_35 = VAR_5;
  }

  if (VAR_23) {
   VAR_34 = VAR_25->mphase_txcal_cmdidx;
   VAR_36 = FUNC_20(VAR_35,
    (u16)(VAR_34 + VAR_25->mphase_txcal_numcmds));
  } else {
   VAR_34 = 0;
   VAR_36 = VAR_35;
  }

  for (; VAR_34 < VAR_36; VAR_34++) {
   if (VAR_22) {
    if (VAR_20->phy.rev >= 3)
     VAR_38 = VAR_11[VAR_34];
    else
     VAR_38 = VAR_10[VAR_34];
   } else {
    if (VAR_20->phy.rev >= 3)
     VAR_38 = VAR_13[VAR_34];
    else
     VAR_38 = VAR_12[VAR_34];
   }

   VAR_32 = (VAR_38 & 0x3000) >> 12;
   VAR_33 = (VAR_38 & 0x0F00) >> 8;

   if (VAR_40 && VAR_46[VAR_32] == 0) {
    FUNC_12(VAR_20, VAR_32);
    VAR_46[VAR_32] = 1;
   }

   VAR_31 = (VAR_45[VAR_32].ncorr[VAR_33] << 8) | 0x66;
   FUNC_18(VAR_20, VAR_2, VAR_31);

   if (VAR_33 == 1 || VAR_33 == 3 || VAR_33 == 4) {
    VAR_41[0] = FUNC_13(VAR_20,
      FUNC_0(15, 69 + VAR_32));
    VAR_42 = VAR_41[0];
    VAR_41[0] = 0;
    FUNC_15(VAR_20, FUNC_0(15, 69 + VAR_32),
      0);
   }

   FUNC_18(VAR_20, VAR_0, VAR_38);
   for (VAR_26 = 0; VAR_26 < 2000; VAR_26++) {
    VAR_31 = FUNC_17(VAR_20, VAR_0);
    if (VAR_31 & 0xC000)
     break;
    FUNC_21(10);
   }

   FUNC_14(VAR_20, FUNC_0(15, 96), VAR_30,
      VAR_41);
   FUNC_16(VAR_20, FUNC_0(15, 64), VAR_30,
      VAR_41);

   if (VAR_33 == 1 || VAR_33 == 3 || VAR_33 == 4)
    VAR_41[0] = VAR_42;
  }

  if (VAR_23)
   VAR_25->mphase_txcal_cmdidx = (VAR_36 >= VAR_35) ? 0 : VAR_36;

  VAR_37 = (VAR_20->phy.rev < 3) ? 6 : 7;

  if (!VAR_23 || VAR_25->mphase_cal_phase_id == VAR_37) {
   FUNC_16(VAR_20, FUNC_0(15, 96), 4, VAR_41);
   FUNC_14(VAR_20, FUNC_0(15, 80), 4, VAR_41);
   if (VAR_20->phy.rev < 3) {
    VAR_41[0] = 0;
    VAR_41[1] = 0;
    VAR_41[2] = 0;
    VAR_41[3] = 0;
   }
   FUNC_16(VAR_20, FUNC_0(15, 88), 4,
      VAR_41);
   FUNC_14(VAR_20, FUNC_0(15, 101), 2,
      VAR_41);
   FUNC_16(VAR_20, FUNC_0(15, 85), 2,
      VAR_41);
   FUNC_16(VAR_20, FUNC_0(15, 93), 2,
      VAR_41);
   VAR_30 = 11;
   if (VAR_20->phy.rev < 3)
    VAR_30 -= 2;
   FUNC_14(VAR_20, FUNC_0(15, 96), VAR_30,
      VAR_25->txiqlocal_bestc);
   VAR_25->txiqlocal_coeffsvalid = 1;
   VAR_25->txiqlocal_chanspec.center_freq =
      VAR_24->chandef->chan->center_freq;
   VAR_25->txiqlocal_chanspec.channel_type =
     FUNC_19(VAR_24->chandef);
  } else {
   VAR_30 = 11;
   if (VAR_20->phy.rev < 3)
    VAR_30 -= 2;
   FUNC_14(VAR_20, FUNC_0(15, 96), VAR_30,
      VAR_25->mphase_txcal_bestcoeffs);
  }

  FUNC_6(VAR_20);
  FUNC_18(VAR_20, VAR_1, 0);
 }

 FUNC_7(VAR_20);
 FUNC_16(VAR_20, FUNC_0(7, 0x110), 2, VAR_43);

 if (VAR_20->phy.rev < 2 && (!VAR_23 || VAR_25->mphase_cal_phase_id == VAR_37))
  FUNC_10(VAR_20);

 if (VAR_20->phy.rev >= 4)
  VAR_25->hang_avoid = VAR_29;

 FUNC_5(VAR_20, 0);

 return VAR_27;
}
