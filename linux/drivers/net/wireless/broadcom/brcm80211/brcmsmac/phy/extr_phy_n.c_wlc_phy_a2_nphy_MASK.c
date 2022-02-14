
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct nphy_txgains {int* txlpf; int* txgm; int* pga; int* ipa; int* pad; } ;
struct TYPE_4__ {int* pad; int* pga; } ;
struct nphy_ipa_txcalgains {int index; scalar_t__ useindex; TYPE_1__ gains; } ;
struct TYPE_6__ {int radiorev; int phy_rev; } ;
struct brcms_phy {scalar_t__ bw; TYPE_3__ pubpi; int radio_chanspec; TYPE_2__* sh; } ;
typedef enum phy_cal_mode { ____Placeholder_phy_cal_mode } phy_cal_mode ;
struct TYPE_5__ {scalar_t__ chip; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 size_t VAR_8 ;
 int FUNC_5 (int ,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (struct brcms_phy*,int,int,int) ;
 int FUNC_7 (struct brcms_phy*,int) ;
 int FUNC_8 (struct brcms_phy*,size_t,int,int ,int) ;
 struct nphy_txgains FUNC_9 (struct brcms_phy*) ;
 int FUNC_10 (struct brcms_phy*,size_t,size_t) ;
 int FUNC_11 (struct brcms_phy*,int ,int,int,int) ;
 int FUNC_12 (struct brcms_phy*,int,int,int,int ) ;
 int FUNC_13 (struct brcms_phy*,int,int,int,int ,int ) ;
 int FUNC_14 (struct brcms_phy*,int ,int,int,int,int *) ;
 int FUNC_15 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_16(struct brcms_phy *VAR_10, struct nphy_ipa_txcalgains *VAR_11,
  enum phy_cal_mode VAR_12, u8 VAR_13)
{
 u16 VAR_14, VAR_15, VAR_16;
 u16 VAR_17, VAR_18;
 bool VAR_19;
 u8 VAR_20, VAR_21[2];
 u32 VAR_22 = 0;
 struct nphy_txgains VAR_23;

 if (FUNC_4(VAR_10->pubpi.phy_rev, 3))
  return;

 VAR_20 = (VAR_13 == VAR_8) ? 1 : 0;

 VAR_19 = ((VAR_12 == VAR_2)
    || (VAR_12 == VAR_3)) ? 1 : 0;

 if (FUNC_2(VAR_10->pubpi.phy_rev, 7)) {

  VAR_23 = FUNC_9(VAR_10);

  if (FUNC_0(VAR_10->radio_chanspec))
   VAR_18 = ((VAR_23[VAR_13] << 15) |
      (VAR_23[VAR_13] << 12) |
      (VAR_23[VAR_13] << 8) |
      (VAR_11->gains.pad[VAR_13] << 3) |
      (VAR_23[VAR_13]));
  else
   VAR_18 = ((VAR_23[VAR_13] << 15) |
      (VAR_23[VAR_13] << 12) |
      (VAR_11->gains.pga[VAR_13] << 8) |
      (VAR_23[VAR_13] << 3) | (VAR_23[VAR_13]));

  FUNC_11(
   VAR_10,
   VAR_5,
   VAR_18, (1 << VAR_13), 0);

  if (FUNC_0(VAR_10->radio_chanspec)) {
   if ((VAR_10->pubpi.radiorev <= 4)
       || (VAR_10->pubpi.radiorev == 6))
    VAR_21[VAR_13] = (VAR_10->bw == VAR_9) ?
       60 : 79;
   else
    VAR_21[VAR_13] = (VAR_10->bw == VAR_9) ?
       45 : 64;
  } else {
   VAR_21[VAR_13] = (VAR_10->bw == VAR_9) ? 75 : 107;
  }

  VAR_21[VAR_20] = 0;
  FUNC_10(VAR_10, VAR_21[0], VAR_21[1]);

  VAR_15 = 63;

  if (FUNC_0(VAR_10->radio_chanspec)) {
   if ((VAR_10->pubpi.radiorev == 4)
       || (VAR_10->pubpi.radiorev == 6)) {
    VAR_14 = 30;
    VAR_16 = 30;
   } else {
    VAR_14 = 25;
    VAR_16 = 25;
   }
  } else {
   if ((VAR_10->pubpi.radiorev == 5)
       || (VAR_10->pubpi.radiorev == 7)
       || (VAR_10->pubpi.radiorev == 8)) {
    VAR_14 = 25;
    VAR_16 = 25;
   } else {
    VAR_14 = 35;
    VAR_16 = 35;
   }
  }

  if (VAR_12 == VAR_2) {
   if ((VAR_10->pubpi.radiorev == 5)
       && (FUNC_0(VAR_10->radio_chanspec)))
    VAR_14 = 55;
   else if (((VAR_10->pubpi.radiorev == 7) &&
      (FUNC_0(VAR_10->radio_chanspec))) ||
     ((VAR_10->pubpi.radiorev == 8) &&
      (FUNC_0(VAR_10->radio_chanspec))))
    VAR_14 = 60;
   else
    VAR_14 = 63;

  } else if ((VAR_12 != VAR_1) && (VAR_12 != VAR_3)) {

   VAR_14 = 35;
   VAR_16 = 35;
  }

  FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x297 :
       0x29b, (0x1 << 0), (1) << 0);

  FUNC_6(VAR_10, (VAR_20 == VAR_8) ? 0x297 :
       0x29b, (0x1 << 0), (0) << 0);

  FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x2a3 :
       0x2a4, (0x1 << 13), (1) << 13);

  FUNC_6(VAR_10, (VAR_20 == VAR_8) ? 0x2a3 :
       0x2a4, (0x1 << 13), (0) << 13);

  FUNC_15(VAR_10, 0x2a1, 0x80);
  FUNC_15(VAR_10, 0x2a2, 0x100);

  FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x2a3 :
       0x2a4, (0x7 << 4), (11) << 4);

  FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x2a3 :
       0x2a4, (0x7 << 8), (11) << 8);

  FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x2a3 :
       0x2a4, (0x7 << 0), (0x3) << 0);

  FUNC_15(VAR_10, 0x2e5, 0x20);

  FUNC_6(VAR_10, 0x2a0, (0x3f << 0), (VAR_16) << 0);

  FUNC_6(VAR_10, 0x29f, (0x3f << 0), (VAR_14) << 0);

  FUNC_6(VAR_10, 0x29f, (0x3f << 8), (VAR_15) << 8);

  FUNC_13(VAR_10, (0x1 << 3),
        1, ((VAR_13 == 0) ? 1 : 2), 0,
        VAR_4);
  FUNC_13(VAR_10, (0x1 << 3),
        0, ((VAR_13 == 0) ? 2 : 1), 0,
        VAR_4);

  FUNC_15(VAR_10, 0x2be, 1);
  FUNC_5(FUNC_7(VAR_10, 0x2be), 10 * 1000 * 1000);

  FUNC_13(VAR_10, (0x1 << 3),
        0, 0x3, 0,
        VAR_4);

  FUNC_14(VAR_10,
      (VAR_13 ==
       VAR_8) ? VAR_6
      : VAR_7, 1, VAR_16,
      32, &VAR_22);

  if (VAR_12 != VAR_2) {
   if (FUNC_1(VAR_10->radio_chanspec))
    FUNC_8(VAR_10, VAR_13, 5, 0, 35);
  }

  FUNC_11(
   VAR_10,
   VAR_5,
   VAR_18, (1 << VAR_13), 1);

 } else {

  if (VAR_11) {
   if (VAR_11->useindex) {
    VAR_17 = 15 - ((VAR_11->index) >> 3);
    if (FUNC_0(VAR_10->radio_chanspec)) {
     if (FUNC_2(VAR_10->pubpi.phy_rev, 6) &&
         VAR_10->sh->chip == VAR_0) {
      VAR_18 = 0x10f7 | (VAR_17 << 8);
     } else if (FUNC_2(VAR_10->pubpi.phy_rev, 6)) {
      VAR_18 = 0x00f7 | (VAR_17 << 8);
     } else if (FUNC_3(VAR_10->pubpi.phy_rev, 5)) {
      VAR_18 = 0x10f7 | (VAR_17 << 8);
     } else {
      VAR_18 = 0x50f7 | (VAR_17 << 8);
     }
    } else {
     VAR_18 = 0x70f7 | (VAR_17 << 8);
    }
    FUNC_12(VAR_10,
            (0x1 << 13),
            VAR_18,
            (1 << VAR_13), 0);
   } else {
    FUNC_12(VAR_10,
            (0x1 << 13),
            0x5bf7,
            (1 << VAR_13), 0);
   }
  }

  if (FUNC_0(VAR_10->radio_chanspec))
   VAR_21[VAR_13] = (VAR_10->bw == VAR_9) ? 45 : 64;
  else
   VAR_21[VAR_13] = (VAR_10->bw == VAR_9) ? 75 : 107;

  VAR_21[VAR_20] = 0;
  FUNC_10(VAR_10, VAR_21[0], VAR_21[1]);

  VAR_15 = 63;

  if (VAR_12 == VAR_1) {
   VAR_14 = 25;
   VAR_16 = 25;
  } else if (VAR_12 == VAR_3) {
   VAR_14 = 25;
   VAR_16 = 25;
  } else if (VAR_12 == VAR_2) {
   VAR_14 = 63;
   VAR_16 = 25;
  } else {

   VAR_14 = 25;
   VAR_16 = 25;
  }

  FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x297 :
       0x29b, (0x1 << 0), (1) << 0);

  FUNC_6(VAR_10, (VAR_20 == VAR_8) ? 0x297 :
       0x29b, (0x1 << 0), (0) << 0);

  if (FUNC_2(VAR_10->pubpi.phy_rev, 6)) {
   FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x2a3 :
        0x2a4, (0x1 << 13), (1) << 13);

   FUNC_6(VAR_10, (VAR_20 == VAR_8) ? 0x2a3 :
        0x2a4, (0x1 << 13), (0) << 13);

   FUNC_15(VAR_10, 0x2a1, 0x20);
   FUNC_15(VAR_10, 0x2a2, 0x60);

   FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x2a3 :
        0x2a4, (0xf << 4), (9) << 4);

   FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x2a3 :
        0x2a4, (0xf << 8), (9) << 8);

   FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x2a3 :
        0x2a4, (0xf << 0), (0x2) << 0);

   FUNC_15(VAR_10, 0x2e5, 0x20);
  } else {
   FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x2a3 :
        0x2a4, (0x1 << 11), (1) << 11);

   FUNC_6(VAR_10, (VAR_20 == VAR_8) ? 0x2a3 :
        0x2a4, (0x1 << 11), (0) << 11);

   FUNC_15(VAR_10, 0x2a1, 0x80);
   FUNC_15(VAR_10, 0x2a2, 0x600);

   FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x2a3 :
        0x2a4, (0x7 << 4), (0) << 4);

   FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x2a3 :
        0x2a4, (0x7 << 8), (0) << 8);

   FUNC_6(VAR_10, (VAR_13 == VAR_8) ? 0x2a3 :
        0x2a4, (0x7 << 0), (0x3) << 0);

   FUNC_6(VAR_10, 0x2a0, (0x3f << 8), (0x20) << 8);

  }

  FUNC_6(VAR_10, 0x2a0, (0x3f << 0), (VAR_16) << 0);

  FUNC_6(VAR_10, 0x29f, (0x3f << 0), (VAR_14) << 0);

  FUNC_6(VAR_10, 0x29f, (0x3f << 8), (VAR_15) << 8);

  FUNC_12(VAR_10, (0x1 << 3), 1, 0x3, 0);

  FUNC_15(VAR_10, 0x2be, 1);
  FUNC_5(FUNC_7(VAR_10, 0x2be), 10 * 1000 * 1000);

  FUNC_12(VAR_10, (0x1 << 3), 0, 0x3, 0);

  FUNC_14(VAR_10,
      (VAR_13 ==
       VAR_8) ? VAR_6
      : VAR_7, 1, VAR_16,
      32, &VAR_22);

  if (VAR_12 != VAR_2)
   FUNC_8(VAR_10, VAR_13, 5, 0, 40);
 }
}
