
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int phy_rev; } ;
struct brcms_phy {scalar_t__ phy_tempsense_offset; TYPE_2__ pubpi; TYPE_1__* sh; } ;
typedef int s32 ;
typedef scalar_t__ s16 ;
typedef int auxADC_Vl ;
struct TYPE_3__ {scalar_t__ chip; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
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
 int FUNC_2 (struct brcms_phy*,int,int,int) ;
 int FUNC_3 (struct brcms_phy*,int) ;
 int FUNC_4 (struct brcms_phy*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct brcms_phy*,int ,int*,int) ;
 int FUNC_7 (struct brcms_phy*,int,int,int ,int ,int ) ;
 int FUNC_8 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_9 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_10 (struct brcms_phy*,int,int) ;
 int FUNC_11 (struct brcms_phy*,int ,int) ;
 int FUNC_12 (struct brcms_phy*,int ,int) ;

s16 FUNC_13(struct brcms_phy *VAR_14)
{
 u16 VAR_15, VAR_16;
 u16 VAR_17, VAR_18;
 u16 VAR_19;
 u16 VAR_20;
 u16 VAR_21;
 u16 VAR_22;
 u16 VAR_23;
 u16 VAR_24;
 u16 VAR_25;
 u16 VAR_26;
 s32 VAR_27[4];
 s32 VAR_28[4];
 u16 VAR_29;
 s16 VAR_30 = 0;

 if (FUNC_0(VAR_14->pubpi.phy_rev, 7)) {
  u16 VAR_31, VAR_32, VAR_33, VAR_34;
  u16 VAR_35, VAR_36;
  u16 VAR_37, VAR_38;
  s32 VAR_39;
  u16 VAR_40, VAR_41;
  u16 VAR_42, VAR_43;
  u16 VAR_44;
  u16 VAR_45;

  VAR_29 =
   FUNC_4(VAR_14, VAR_13);

  VAR_21 = FUNC_3(VAR_14, 0xa6);
  VAR_22 = FUNC_3(VAR_14, 0xa7);
  VAR_23 = FUNC_3(VAR_14, 0x8f);
  VAR_24 = FUNC_3(VAR_14, 0xa5);
  VAR_44 = FUNC_3(VAR_14, 0x1ae);
  VAR_40 = FUNC_3(VAR_14, 0x346);
  VAR_41 = FUNC_3(VAR_14, 0x347);
  VAR_42 = FUNC_3(VAR_14, 0x344);
  VAR_43 = FUNC_3(VAR_14, 0x345);

  FUNC_8(VAR_14, VAR_3, 1, 0x0A, 16,
     &VAR_33);
  FUNC_8(VAR_14, VAR_3, 1, 0x0E, 16,
     &VAR_34);
  FUNC_8(VAR_14, VAR_3, 1, 0x02, 16,
     &VAR_35);
  FUNC_8(VAR_14, VAR_3, 1, 0x03, 16,
     &VAR_36);

  FUNC_10(VAR_14, 0x1ae, 0x0);

  VAR_37 = 0x0;
  VAR_38 = 0x20;
  FUNC_9(VAR_14, VAR_3, 1, 0x02, 16,
      &VAR_37);
  FUNC_9(VAR_14, VAR_3, 1, 0x03, 16,
      &VAR_38);

  VAR_45 = VAR_29 & 0x1c;

  FUNC_11(VAR_14, VAR_13,
    VAR_45 | 0x01);

  FUNC_7(VAR_14, (0x1 << 1),
        1, 0, 0,
        VAR_1);
  FUNC_2(VAR_14, 0xa6, (0x1 << 7), 0);
  FUNC_2(VAR_14, 0xa7, (0x1 << 7), 0);
  FUNC_2(VAR_14, 0x8f, (0x1 << 7), (0x1 << 7));
  FUNC_2(VAR_14, 0xa5, (0x1 << 7), (0x1 << 7));

  FUNC_2(VAR_14, 0xa6, (0x1 << 2), (0x1 << 2));
  FUNC_2(VAR_14, 0xa7, (0x1 << 2), (0x1 << 2));
  FUNC_2(VAR_14, 0x8f, (0x1 << 2), (0x1 << 2));
  FUNC_2(VAR_14, 0xa5, (0x1 << 2), (0x1 << 2));
  FUNC_5(5);
  FUNC_2(VAR_14, 0xa6, (0x1 << 2), 0);
  FUNC_2(VAR_14, 0xa7, (0x1 << 2), 0);
  FUNC_2(VAR_14, 0xa6, (0x1 << 3), 0);
  FUNC_2(VAR_14, 0xa7, (0x1 << 3), 0);
  FUNC_2(VAR_14, 0x8f, (0x1 << 3), (0x1 << 3));
  FUNC_2(VAR_14, 0xa5, (0x1 << 3), (0x1 << 3));
  FUNC_2(VAR_14, 0xa6, (0x1 << 6), 0);
  FUNC_2(VAR_14, 0xa7, (0x1 << 6), 0);
  FUNC_2(VAR_14, 0x8f, (0x1 << 6), (0x1 << 6));
  FUNC_2(VAR_14, 0xa5, (0x1 << 6), (0x1 << 6));

  VAR_31 = 0xA3;
  VAR_32 = 0x0;
  FUNC_9(VAR_14, VAR_3, 1, 0x0A, 16,
      &VAR_31);
  FUNC_9(VAR_14, VAR_3, 1, 0x0E, 16,
      &VAR_32);

  FUNC_5(3);

  FUNC_6(VAR_14, VAR_2, VAR_27, 1);
  FUNC_11(VAR_14, VAR_13,
    VAR_45 | 0x03);

  FUNC_5(5);
  FUNC_6(VAR_14, VAR_2, VAR_28, 1);

  VAR_32 = 0x7;
  if (VAR_27[1] + VAR_28[1] < -30) {
   VAR_31 = 0x45;
   VAR_39 = 263;
  } else if (VAR_27[1] + VAR_28[1] < -9) {
   VAR_31 = 0x200;
   VAR_39 = 467;
  } else if (VAR_27[1] + VAR_28[1] < 11) {
   VAR_31 = 0x266;
   VAR_39 = 634;
  } else {
   VAR_31 = 0x2D5;
   VAR_39 = 816;
  }

  FUNC_9(VAR_14, VAR_3, 1, 0x0A, 16,
      &VAR_31);
  FUNC_9(VAR_14, VAR_3, 1, 0x0E, 16,
      &VAR_32);

  FUNC_5(3);

  FUNC_6(VAR_14, VAR_2, VAR_28, 1);
  FUNC_11(VAR_14, VAR_13,
    VAR_45 | 0x01);

  FUNC_5(5);
  FUNC_6(VAR_14, VAR_2, VAR_27, 1);

  FUNC_11(VAR_14, VAR_13,
    VAR_29);

  FUNC_10(VAR_14, 0xa6, VAR_21);
  FUNC_10(VAR_14, 0xa7, VAR_22);
  FUNC_10(VAR_14, 0x8f, VAR_23);
  FUNC_10(VAR_14, 0xa5, VAR_24);
  FUNC_10(VAR_14, 0x1ae, VAR_44);
  FUNC_10(VAR_14, 0x346, VAR_40);
  FUNC_10(VAR_14, 0x347, VAR_41);
  FUNC_10(VAR_14, 0x344, VAR_42);
  FUNC_10(VAR_14, 0x345, VAR_42);

  FUNC_9(VAR_14, VAR_3, 1, 0x0A, 16,
      &VAR_33);
  FUNC_9(VAR_14, VAR_3, 1, 0x0E, 16,
      &VAR_34);
  FUNC_9(VAR_14, VAR_3, 1, 0x02, 16,
      &VAR_35);
  FUNC_9(VAR_14, VAR_3, 1, 0x03, 16,
      &VAR_36);

  if (VAR_14->sh->chip == VAR_0) {
   VAR_27[0] = (193 * (VAR_27[1] + VAR_28[1])
      + 88 * (VAR_39) - 27111 +
      128) / 256;
  } else {
   VAR_27[0] = (179 * (VAR_27[1] + VAR_28[1])
      + 82 * (VAR_39) - 28861 +
      128) / 256;
  }

  VAR_30 = (s16) VAR_14->phy_tempsense_offset;

 } else if (FUNC_0(VAR_14->pubpi.phy_rev, 3)) {
  VAR_29 =
   FUNC_4(VAR_14, VAR_12);

  VAR_21 = FUNC_3(VAR_14, 0xa6);
  VAR_22 = FUNC_3(VAR_14, 0xa7);
  VAR_23 = FUNC_3(VAR_14, 0x8f);
  VAR_24 = FUNC_3(VAR_14, 0xa5);
  VAR_26 = FUNC_3(VAR_14, 0xca);

  FUNC_11(VAR_14, VAR_12, 0x01);

  FUNC_6(VAR_14, VAR_2, VAR_27, 1);
  if (FUNC_1(VAR_14->pubpi.phy_rev, 7))
   FUNC_11(VAR_14, VAR_12, 0x05);

  FUNC_6(VAR_14, VAR_2, VAR_28, 1);
  if (FUNC_0(VAR_14->pubpi.phy_rev, 7))
   FUNC_11(VAR_14, VAR_13, 0x01);
  else
   FUNC_11(VAR_14, VAR_12, 0x01);

  VAR_27[0] =
   (126 * (VAR_27[1] + VAR_28[1]) + 3987) / 64;

  FUNC_11(VAR_14, VAR_12,
    VAR_29);

  FUNC_10(VAR_14, 0xca, VAR_26);
  FUNC_10(VAR_14, 0xa6, VAR_21);
  FUNC_10(VAR_14, 0xa7, VAR_22);
  FUNC_10(VAR_14, 0x8f, VAR_23);
  FUNC_10(VAR_14, 0xa5, VAR_24);

  VAR_30 = (s16) VAR_14->phy_tempsense_offset;
 } else {

  VAR_19 =
   FUNC_4(VAR_14, VAR_10);
  VAR_20 =
   FUNC_4(VAR_14, VAR_11);
  VAR_15 =
   FUNC_4(VAR_14, VAR_5);
  VAR_16 =
   FUNC_4(VAR_14, VAR_6);
  VAR_17 =
   FUNC_4(VAR_14, VAR_7);
  VAR_18 =
   FUNC_4(VAR_14, VAR_8);
  VAR_25 = FUNC_4(VAR_14, VAR_9);

  VAR_21 = FUNC_3(VAR_14, 0xa6);
  VAR_22 = FUNC_3(VAR_14, 0xa7);
  VAR_23 = FUNC_3(VAR_14, 0xa5);
  VAR_26 = FUNC_3(VAR_14, 0xca);

  FUNC_11(VAR_14, VAR_5, 0x01);
  FUNC_11(VAR_14, VAR_7, 0x01);
  FUNC_11(VAR_14, VAR_6, 0x08);
  FUNC_11(VAR_14, VAR_8, 0x08);
  FUNC_11(VAR_14, VAR_10, 0x04);
  FUNC_11(VAR_14, VAR_11, 0x04);
  FUNC_11(VAR_14, VAR_9, 0x00);

  FUNC_6(VAR_14, VAR_2, VAR_27, 1);
  FUNC_12(VAR_14, VAR_4, 0x80);

  FUNC_6(VAR_14, VAR_2, VAR_27, 1);
  FUNC_12(VAR_14, VAR_4, 0x80);

  FUNC_6(VAR_14, VAR_2, VAR_28, 1);
  FUNC_12(VAR_14, VAR_4, 0x80);

  VAR_27[0] = (VAR_27[0] + VAR_28[0]);
  VAR_27[1] = (VAR_27[1] + VAR_28[1]);
  VAR_27[2] = (VAR_27[2] + VAR_28[2]);
  VAR_27[3] = (VAR_27[3] + VAR_28[3]);

  VAR_27[0] =
   (VAR_27[0] + VAR_27[1] + VAR_27[2] +
    VAR_27[3]);

  VAR_27[0] =
   (VAR_27[0] +
    (8 * 32)) * (950 - 350) / 63 + (350 * 8);

  VAR_27[0] = (VAR_27[0] - (8 * 420)) / 38;

  FUNC_11(VAR_14, VAR_10,
    VAR_19);
  FUNC_11(VAR_14, VAR_11,
    VAR_20);
  FUNC_11(VAR_14, VAR_5,
    VAR_15);
  FUNC_11(VAR_14, VAR_7,
    VAR_17);
  FUNC_11(VAR_14, VAR_6,
    VAR_16);
  FUNC_11(VAR_14, VAR_8,
    VAR_18);
  FUNC_11(VAR_14, VAR_9, VAR_25);

  FUNC_10(VAR_14, 0xca, VAR_26);
  FUNC_10(VAR_14, 0xa6, VAR_21);
  FUNC_10(VAR_14, 0xa7, VAR_22);
  FUNC_10(VAR_14, 0xa5, VAR_23);
 }

 return (s16) VAR_27[0] + VAR_30;
}
