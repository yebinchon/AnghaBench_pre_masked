
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_12__ {scalar_t__ tssipos; } ;
struct TYPE_13__ {TYPE_5__ ghz2; } ;
struct ssb_sprom {int revision; TYPE_6__ fem; TYPE_3__* core_pwr_info; } ;
struct b43_phy {int rev; TYPE_2__* chandef; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; TYPE_7__* dev; int wl; } ;
struct b43_phy_n {int* adj_pwr_tbl; scalar_t__ hang_avoid; int tx_pwr_max_ppr; TYPE_4__* pwr_ctl_info; } ;
typedef int s8 ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_14__ {int core_rev; struct ssb_sprom* bus_sprom; } ;
struct TYPE_11__ {int idle_tssi_2g; int idle_tssi_5g; } ;
struct TYPE_10__ {int maxpwr_2g; int* pa_2g; int maxpwr_5gl; int* pa_5gl; int maxpwr_5g; int* pa_5g; int maxpwr_5gh; int* pa_5gh; } ;
struct TYPE_9__ {TYPE_1__* chan; } ;
struct TYPE_8__ {int center_freq; } ;


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
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int) ;
 scalar_t__ FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,int) ;
 int FUNC_6 (struct b43_wldev*) ;
 int FUNC_7 (struct b43_wldev*,int ,int,int*) ;
 int FUNC_8 (struct b43_wldev*,int ,int) ;
 int FUNC_9 (struct b43_wldev*,int ,int ,int) ;
 int FUNC_10 (struct b43_wldev*,int ,int) ;
 int FUNC_11 (struct b43_wldev*,int ,int) ;
 int FUNC_12 (struct b43_wldev*,int *) ;
 int FUNC_13 (struct b43_wldev*,int,int) ;
 int FUNC_14 (struct b43_wldev*,int ) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct b43_wldev *VAR_23)
{
 struct b43_phy *VAR_24 = &VAR_23->phy;
 struct b43_phy_n *VAR_25 = VAR_23->phy.n;
 struct ssb_sprom *VAR_26 = VAR_23->dev->bus_sprom;

 s16 VAR_27[2], VAR_28[2], VAR_29[2];
 u8 VAR_30[2];
 u8 VAR_31;
 s8 VAR_32[2];
 s32 VAR_33, VAR_34, VAR_35;
 u32 VAR_36[64];

 u16 VAR_37 = VAR_24->chandef->chan->center_freq;
 u16 VAR_38;
 u16 VAR_39;
 u8 VAR_40, VAR_41;

 if (VAR_23->dev->core_rev == 11 || VAR_23->dev->core_rev == 12) {
  FUNC_3(VAR_23, VAR_3, ~0, 0x200000);
  FUNC_14(VAR_23, VAR_3);
  FUNC_16(1);
 }

 if (VAR_25->hang_avoid)
  FUNC_5(VAR_23, 1);

 FUNC_10(VAR_23, VAR_4, VAR_5);
 if (VAR_23->phy.rev >= 3)
  FUNC_8(VAR_23, VAR_6,
        ~VAR_8 & 0xFFFF);
 else
  FUNC_10(VAR_23, VAR_6,
       VAR_8);

 if (VAR_23->dev->core_rev == 11 || VAR_23->dev->core_rev == 12)
  FUNC_3(VAR_23, VAR_3, ~0x200000, 0);

 if (VAR_26->revision < 4) {
  VAR_30[0] = VAR_25->pwr_ctl_info[0].idle_tssi_2g;
  VAR_30[1] = VAR_25->pwr_ctl_info[1].idle_tssi_2g;
  VAR_32[0] = VAR_32[1] = 52;
  VAR_27[0] = VAR_27[1] = -424;
  VAR_28[0] = VAR_28[1] = 5612;
  VAR_29[0] = VAR_29[1] = -1393;
 } else {
  if (FUNC_2(VAR_23->wl) == VAR_21) {
   for (VAR_41 = 0; VAR_41 < 2; VAR_41++) {
    VAR_30[VAR_41] = VAR_25->pwr_ctl_info[VAR_41].idle_tssi_2g;
    VAR_32[VAR_41] = VAR_26->core_pwr_info[VAR_41].maxpwr_2g;
    VAR_27[VAR_41] = VAR_26->core_pwr_info[VAR_41].pa_2g[0];
    VAR_28[VAR_41] = VAR_26->core_pwr_info[VAR_41].pa_2g[1];
    VAR_29[VAR_41] = VAR_26->core_pwr_info[VAR_41].pa_2g[2];
   }
  } else if (VAR_37 >= 4900 && VAR_37 < 5100) {
   for (VAR_41 = 0; VAR_41 < 2; VAR_41++) {
    VAR_30[VAR_41] = VAR_25->pwr_ctl_info[VAR_41].idle_tssi_5g;
    VAR_32[VAR_41] = VAR_26->core_pwr_info[VAR_41].maxpwr_5gl;
    VAR_27[VAR_41] = VAR_26->core_pwr_info[VAR_41].pa_5gl[0];
    VAR_28[VAR_41] = VAR_26->core_pwr_info[VAR_41].pa_5gl[1];
    VAR_29[VAR_41] = VAR_26->core_pwr_info[VAR_41].pa_5gl[2];
   }
  } else if (VAR_37 >= 5100 && VAR_37 < 5500) {
   for (VAR_41 = 0; VAR_41 < 2; VAR_41++) {
    VAR_30[VAR_41] = VAR_25->pwr_ctl_info[VAR_41].idle_tssi_5g;
    VAR_32[VAR_41] = VAR_26->core_pwr_info[VAR_41].maxpwr_5g;
    VAR_27[VAR_41] = VAR_26->core_pwr_info[VAR_41].pa_5g[0];
    VAR_28[VAR_41] = VAR_26->core_pwr_info[VAR_41].pa_5g[1];
    VAR_29[VAR_41] = VAR_26->core_pwr_info[VAR_41].pa_5g[2];
   }
  } else if (VAR_37 >= 5500) {
   for (VAR_41 = 0; VAR_41 < 2; VAR_41++) {
    VAR_30[VAR_41] = VAR_25->pwr_ctl_info[VAR_41].idle_tssi_5g;
    VAR_32[VAR_41] = VAR_26->core_pwr_info[VAR_41].maxpwr_5gh;
    VAR_27[VAR_41] = VAR_26->core_pwr_info[VAR_41].pa_5gh[0];
    VAR_28[VAR_41] = VAR_26->core_pwr_info[VAR_41].pa_5gh[1];
    VAR_29[VAR_41] = VAR_26->core_pwr_info[VAR_41].pa_5gh[2];
   }
  } else {
   VAR_30[0] = VAR_25->pwr_ctl_info[0].idle_tssi_5g;
   VAR_30[1] = VAR_25->pwr_ctl_info[1].idle_tssi_5g;
   VAR_32[0] = VAR_32[1] = 52;
   VAR_27[0] = VAR_27[1] = -424;
   VAR_28[0] = VAR_28[1] = 5612;
   VAR_29[0] = VAR_29[1] = -1393;
  }
 }

 VAR_31 = FUNC_12(VAR_23, &VAR_25->tx_pwr_max_ppr);
 if (VAR_31) {
  VAR_32[0] = VAR_31;
  VAR_32[1] = VAR_31;
 }

 if (VAR_23->phy.rev >= 3) {
  if (VAR_26->fem.ghz2.tssipos)
   FUNC_10(VAR_23, VAR_11, 0x4000);
  if (VAR_23->phy.rev >= 7) {
   for (VAR_41 = 0; VAR_41 < 2; VAR_41++) {
    VAR_39 = VAR_41 ? 0x190 : 0x170;
    if (FUNC_4(VAR_23))
     FUNC_13(VAR_23, VAR_39 + 0x9, (FUNC_2(VAR_23->wl) == VAR_21) ? 0xE : 0xC);
   }
  } else {
   if (FUNC_4(VAR_23)) {
    VAR_38 = (FUNC_2(VAR_23->wl) == VAR_22) ? 0xC : 0xE;
    FUNC_13(VAR_23,
     VAR_0 | VAR_2, VAR_38);
    FUNC_13(VAR_23,
     VAR_1 | VAR_2, VAR_38);
   } else {
    FUNC_13(VAR_23,
     VAR_0 | VAR_2, 0x11);
    FUNC_13(VAR_23,
     VAR_1 | VAR_2, 0x11);
   }
  }
 }

 if (VAR_23->dev->core_rev == 11 || VAR_23->dev->core_rev == 12) {
  FUNC_3(VAR_23, VAR_3, ~0, 0x200000);
  FUNC_14(VAR_23, VAR_3);
  FUNC_16(1);
 }

 if (VAR_24->rev >= 19) {

 } else if (VAR_24->rev >= 7) {
  FUNC_9(VAR_23, VAR_6,
    ~VAR_7, 0x19);
  FUNC_9(VAR_23, VAR_9,
    ~VAR_10, 0x19);
 } else {
  FUNC_9(VAR_23, VAR_6,
    ~VAR_7, 0x40);
  if (VAR_23->phy.rev > 1)
   FUNC_9(VAR_23, VAR_9,
    ~VAR_10, 0x40);
 }

 if (VAR_23->dev->core_rev == 11 || VAR_23->dev->core_rev == 12)
  FUNC_3(VAR_23, VAR_3, ~0x200000, 0);

 FUNC_11(VAR_23, VAR_15,
        0xF0 << VAR_17 |
        3 << VAR_16);
 FUNC_11(VAR_23, VAR_11,
        VAR_30[0] << VAR_12 |
        VAR_30[1] << VAR_13 |
        VAR_14);
 FUNC_11(VAR_23, VAR_18,
        VAR_32[0] << VAR_19 |
        VAR_32[1] << VAR_20);

 for (VAR_41 = 0; VAR_41 < 2; VAR_41++) {
  for (VAR_40 = 0; VAR_40 < 64; VAR_40++) {
   VAR_33 = 8 * (16 * VAR_28[VAR_41] + VAR_29[VAR_41] * VAR_40);
   VAR_34 = 32768 + VAR_27[VAR_41] * VAR_40;
   VAR_35 = FUNC_15((4 * VAR_33 + VAR_34 / 2) / VAR_34, -8);
   if (VAR_23->phy.rev < 3 && (VAR_40 <= (31 - VAR_30[VAR_41] + 1)))
    VAR_35 = FUNC_15(VAR_35, VAR_32[VAR_41] + 1);
   VAR_36[VAR_40] = VAR_35;
  }
  FUNC_7(VAR_23, FUNC_1(26 + VAR_41, 0), 64, VAR_36);
 }

 FUNC_6(VAR_23);
 FUNC_7(VAR_23, FUNC_0(26, 64), 84, VAR_25->adj_pwr_tbl);
 FUNC_7(VAR_23, FUNC_0(27, 64), 84, VAR_25->adj_pwr_tbl);

 if (VAR_25->hang_avoid)
  FUNC_5(VAR_23, 0);
}
