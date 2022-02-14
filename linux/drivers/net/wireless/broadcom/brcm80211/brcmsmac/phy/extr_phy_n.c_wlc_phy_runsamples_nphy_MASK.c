
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int nphy_sample_play_lpf_bw_ctl_ovr; int nphy_bb_mult_save; scalar_t__ phyhang_avoid; TYPE_1__ pubpi; int radio_chanspec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct brcms_phy*,int,int) ;
 int FUNC_4 (struct brcms_phy*,int,int) ;
 int FUNC_5 (struct brcms_phy*,int) ;
 int FUNC_6 (struct brcms_phy*,int ) ;
 int FUNC_7 (struct brcms_phy*,int,int ,int ,int ,int ) ;
 int FUNC_8 (struct brcms_phy*,int) ;
 int FUNC_9 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_10 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_11 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_12(struct brcms_phy *VAR_5, u16 VAR_6, u16 VAR_7,
   u16 VAR_8, u8 VAR_9, u8 VAR_10,
   bool VAR_11)
{
 u16 VAR_12;
 u8 VAR_13, VAR_14;
 u16 VAR_15;
 u16 VAR_16, VAR_17, VAR_18,
     VAR_19;

 if (VAR_5->phyhang_avoid)
  FUNC_8(VAR_5, 1);

 VAR_13 = 20;
 if (FUNC_0(VAR_5->radio_chanspec))
  VAR_13 = 40;

 if (FUNC_1(VAR_5->pubpi.phy_rev, 7)) {

  VAR_16 = FUNC_5(VAR_5, 0x342) & (0x1 << 7);
  VAR_17 = FUNC_5(VAR_5, 0x343) & (0x1 << 7);
  if (VAR_16 | VAR_17) {
   VAR_18 = FUNC_5(VAR_5, 0x340) &
           (0x7 << 8);
   VAR_19 = FUNC_5(VAR_5, 0x341) &
           (0x7 << 8);
  } else {
   FUNC_7(
    VAR_5,
    (0x1 << 7),
    FUNC_6
     (VAR_5,
     0), 0, 0,
    VAR_2);

   VAR_5->nphy_sample_play_lpf_bw_ctl_ovr = 1;

   VAR_18 = FUNC_5(VAR_5, 0x340) &
           (0x7 << 8);
   VAR_19 = FUNC_5(VAR_5, 0x341) &
           (0x7 << 8);
  }
 }

 if ((VAR_5->nphy_bb_mult_save & VAR_1) == 0) {

  FUNC_9(VAR_5, VAR_4, 1, 87, 16,
     &VAR_12);
  VAR_5->nphy_bb_mult_save =
   VAR_1 | (VAR_12 & VAR_0);
 }

 if (VAR_11) {
  VAR_12 = (VAR_13 == 20) ? 100 : 71;
  VAR_12 = (VAR_12 << 8) + VAR_12;
  FUNC_10(VAR_5, VAR_4, 1, 87, 16,
      &VAR_12);
 }

 if (VAR_5->phyhang_avoid)
  FUNC_8(VAR_5, 0);

 FUNC_11(VAR_5, 0xc6, VAR_6 - 1);

 if (VAR_7 != 0xffff)
  FUNC_11(VAR_5, 0xc4, VAR_7 - 1);
 else
  FUNC_11(VAR_5, 0xc4, VAR_7);

 FUNC_11(VAR_5, 0xc5, VAR_8);

 VAR_15 = FUNC_5(VAR_5, 0xa1);
 FUNC_4(VAR_5, 0xa1, VAR_3);
 if (VAR_9) {

  FUNC_3(VAR_5, 0xc2, 0x7FFF);

  FUNC_4(VAR_5, 0xc2, 0x8000);
 } else {

  VAR_14 = (VAR_10 == 1) ? 0x5 : 0x1;
  FUNC_11(VAR_5, 0xc3, VAR_14);
 }

 FUNC_2(((FUNC_5(VAR_5, 0xa4) & 0x1) == 1), 1000);

 FUNC_11(VAR_5, 0xa1, VAR_15);
}
