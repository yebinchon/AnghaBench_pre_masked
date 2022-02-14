
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nphy_papd_restore_state {void** intpa_master; void** fbmix; void** vga_master; void** afeoverride; void** afectrl; void** atten; void** pwrup; } ;
struct TYPE_2__ {int radiorev; int phy_rev; } ;
struct brcms_phy {int radio_chanspec; TYPE_1__ pubpi; } ;
typedef int s32 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_3 (struct brcms_phy*,int ,int ,int,int ) ;
 void* FUNC_4 (struct brcms_phy*,int ,int ,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (struct brcms_phy*,int ,int ,int,int ,int) ;
 int FUNC_6 (struct brcms_phy*,int ,int ,int,int ,int) ;
 int FUNC_7 (struct brcms_phy*,int,int,int) ;
 void* FUNC_8 (struct brcms_phy*,int) ;
 int FUNC_9 (struct brcms_phy*,int ) ;
 int FUNC_10 (struct brcms_phy*,int ,int,int,int ) ;
 int FUNC_11 (struct brcms_phy*,int,int,int,int ) ;
 int FUNC_12 (struct brcms_phy*,int,int,int,int ,int ) ;
 int FUNC_13 (struct brcms_phy*,int,int,int ,int ,int) ;

__attribute__((used)) static void
FUNC_14(struct brcms_phy *VAR_20,
       struct nphy_papd_restore_state *VAR_21, u8 VAR_22)
{
 s32 VAR_23;
 u8 VAR_24;
 u16 VAR_25 = 0;

 VAR_24 = VAR_22 ^ 0x1;
 if (FUNC_1(VAR_20->pubpi.phy_rev, 7)) {

  if (FUNC_2(VAR_20->pubpi.phy_rev, 7)
      || FUNC_1(VAR_20->pubpi.phy_rev, 8))
   FUNC_12(
    VAR_20, (0x1 << 7),
    FUNC_9
     (VAR_20,
     0), 0, 0,
    VAR_5);

  if (FUNC_0(VAR_20->radio_chanspec)) {
   if (VAR_20->pubpi.radiorev == 5)
    VAR_25 = (VAR_22 == 0) ? 0x20 : 0x00;
   else if ((VAR_20->pubpi.radiorev == 7)
     || (VAR_20->pubpi.radiorev == 8))
    VAR_25 = 0x00;
   else if ((VAR_20->pubpi.radiorev <= 4)
     || (VAR_20->pubpi.radiorev == 6))
    VAR_25 = 0x00;
  } else {
   if ((VAR_20->pubpi.radiorev == 4) ||
       (VAR_20->pubpi.radiorev == 6))
    VAR_25 = 0x50;
   else if ((VAR_20->pubpi.radiorev == 3)
     || (VAR_20->pubpi.radiorev == 7)
     || (VAR_20->pubpi.radiorev == 8))
    VAR_25 = 0x0;
  }

  FUNC_12(VAR_20, (0x1 << 11),
        VAR_25, (1 << VAR_22), 0,
        VAR_4);

  FUNC_10(
   VAR_20,
   VAR_7,
   1, (1 << VAR_22), 0);
  FUNC_10(
   VAR_20,
   VAR_7,
   0, (1 << VAR_24), 0);

  FUNC_12(VAR_20, (0x1 << 3),
        0, 0x3, 0,
        VAR_4);
  FUNC_12(VAR_20, (0x1 << 2), 1,
        (1 << VAR_22), 0,
        VAR_5);
  FUNC_12(VAR_20, (0x1 << 0), 0,
        (1 << VAR_22), 0,
        VAR_5);
  FUNC_12(VAR_20, (0x1 << 1), 1,
        (1 << VAR_22), 0,
        VAR_6);
  FUNC_12(VAR_20, (0x1 << 8), 0,
        (1 << VAR_22), 0,
        VAR_5);
  FUNC_12(VAR_20, (0x1 << 9), 1,
        (1 << VAR_22), 0,
        VAR_5);
  FUNC_12(VAR_20, (0x1 << 10), 0,
        (1 << VAR_22), 0,
        VAR_5);
  FUNC_12(VAR_20, (0x1 << 3), 1,
        (1 << VAR_22), 0,
        VAR_5);

  FUNC_12(VAR_20, (0x1 << 5),
        0, (1 << VAR_22), 0,
        VAR_5);
  FUNC_12(VAR_20, (0x1 << 4), 0,
        (1 << VAR_22), 0,
        VAR_5);

  VAR_21->afectrl[VAR_22] = FUNC_8(VAR_20, (VAR_22 == VAR_8) ?
          0xa6 : 0xa7);
  VAR_21->afeoverride[VAR_22] =
   FUNC_8(VAR_20, (VAR_22 == VAR_8) ? 0x8f : 0xa5);
  VAR_21->afectrl[VAR_24] =
   FUNC_8(VAR_20, (VAR_22 == VAR_8) ? 0xa7 : 0xa6);
  VAR_21->afeoverride[VAR_24] =
   FUNC_8(VAR_20, (VAR_22 == VAR_8) ? 0xa5 : 0x8f);

  FUNC_7(VAR_20, ((VAR_22 == VAR_8) ? 0xa6 : 0xa7),
       (0x1 << 2), 0);
  FUNC_7(VAR_20, ((VAR_22 == VAR_8) ? 0x8f :
     0xa5), (0x1 << 2), (0x1 << 2));

  FUNC_7(VAR_20, ((VAR_22 == VAR_8) ? 0xa7 : 0xa6),
       (0x1 << 2), (0x1 << 2));
  FUNC_7(VAR_20, ((VAR_22 == VAR_8) ? 0xa5 :
     0x8f), (0x1 << 2), (0x1 << 2));

  if (FUNC_0(VAR_20->radio_chanspec)) {
   VAR_21->pwrup[VAR_22] =
    FUNC_4(VAR_20, VAR_10, VAR_12, VAR_22,
      VAR_16);
   VAR_21->atten[VAR_22] =
    FUNC_4(VAR_20, VAR_10, VAR_12, VAR_22,
      VAR_15);
   VAR_21->pwrup[VAR_24] =
    FUNC_4(VAR_20, VAR_10, VAR_12, VAR_24,
      VAR_16);
   VAR_21->atten[VAR_24] =
    FUNC_4(VAR_20, VAR_10, VAR_12, VAR_24,
      VAR_15);

   FUNC_6(VAR_20, VAR_10, VAR_12, VAR_22,
      VAR_16, 0xc);

   if ((VAR_20->pubpi.radiorev == 3) ||
       (VAR_20->pubpi.radiorev == 4) ||
       (VAR_20->pubpi.radiorev == 6))
    FUNC_6(VAR_20, VAR_10, VAR_12, VAR_22,
       VAR_15, 0xf0);
   else if (VAR_20->pubpi.radiorev == 5)
    FUNC_6(VAR_20, VAR_10, VAR_12, VAR_22,
       VAR_15,
       (VAR_22 == 0) ? 0xf7 : 0xf2);
   else if ((VAR_20->pubpi.radiorev == 7)
     || (VAR_20->pubpi.radiorev == 8))
    FUNC_6(VAR_20, VAR_10, VAR_12, VAR_22,
       VAR_15, 0xf0);

   FUNC_6(VAR_20, VAR_10, VAR_12, VAR_24,
      VAR_16, 0x0);
   FUNC_6(VAR_20, VAR_10, VAR_12, VAR_24,
      VAR_15, 0xff);
  } else {
   VAR_21->pwrup[VAR_22] =
    FUNC_4(VAR_20, VAR_10, VAR_12, VAR_22,
      VAR_18);
   VAR_21->atten[VAR_22] =
    FUNC_4(VAR_20, VAR_10, VAR_12, VAR_22,
      VAR_17);
   VAR_21->pwrup[VAR_24] =
    FUNC_4(VAR_20, VAR_10, VAR_12, VAR_24,
      VAR_18);
   VAR_21->atten[VAR_24] =
    FUNC_4(VAR_20, VAR_10, VAR_12, VAR_24,
      VAR_17);

   FUNC_6(VAR_20, VAR_10, VAR_12, VAR_22,
      VAR_18, 0xc);

   if ((VAR_20->pubpi.radiorev == 7)
       || (VAR_20->pubpi.radiorev == 8))
    FUNC_6(VAR_20, VAR_10, VAR_12, VAR_22,
       VAR_17, 0xf4);

   else
    FUNC_6(VAR_20, VAR_10, VAR_12, VAR_22,
       VAR_17, 0xf0);

   FUNC_6(VAR_20, VAR_10, VAR_12, VAR_24,
      VAR_18, 0x0);
   FUNC_6(VAR_20, VAR_10, VAR_12, VAR_24,
      VAR_17, 0xff);
  }

  VAR_23 = 4000;

  FUNC_13(VAR_20, VAR_23, 181, 0, 0, 0);

  FUNC_7(VAR_20, (VAR_22 == VAR_8) ? 0x297 :
       0x29b, (0x1 << 0), (VAR_3) << 0);

  FUNC_7(VAR_20, (VAR_22 == VAR_8) ? 0x2a3 :
       0x2a4, (0x1 << 13), (1) << 13);

  FUNC_7(VAR_20, (VAR_24 == VAR_8) ? 0x297 :
       0x29b, (0x1 << 0), (VAR_2) << 0);

  FUNC_7(VAR_20, (VAR_24 == VAR_8) ? 0x2a3 :
       0x2a4, (0x1 << 13), (0) << 13);

 } else {

  FUNC_11(VAR_20, (0x1 << 12), 0, 0x3, 0);

  FUNC_11(VAR_20, (0x1 << 3), 1, 0, 0);

  FUNC_11(VAR_20, (0x1 << 0), 0, 0x3, 0);

  FUNC_11(VAR_20, (0x1 << 2), 1, 0x3, 0);
  FUNC_11(VAR_20, (0x1 << 1), 1, 0x3, 0);

  VAR_21->afectrl[VAR_22] = FUNC_8(VAR_20, (VAR_22 == VAR_8) ?
          0xa6 : 0xa7);
  VAR_21->afeoverride[VAR_22] =
   FUNC_8(VAR_20, (VAR_22 == VAR_8) ? 0x8f : 0xa5);

  FUNC_7(VAR_20, ((VAR_22 == VAR_8) ? 0xa6 : 0xa7),
       (0x1 << 0) | (0x1 << 1) | (0x1 << 2), 0);
  FUNC_7(VAR_20, ((VAR_22 == VAR_8) ? 0x8f :
     0xa5),
       (0x1 << 0) |
       (0x1 << 1) |
       (0x1 << 2), (0x1 << 0) | (0x1 << 1) | (0x1 << 2));

  VAR_21->vga_master[VAR_22] =
   FUNC_3(VAR_20, VAR_9, VAR_11, VAR_22, VAR_19);
  FUNC_5(VAR_20, VAR_9, VAR_11, VAR_22, VAR_19, 0x2b);
  if (FUNC_0(VAR_20->radio_chanspec)) {
   VAR_21->fbmix[VAR_22] =
    FUNC_3(VAR_20, VAR_9, VAR_11, VAR_22,
      VAR_14);
   VAR_21->intpa_master[VAR_22] =
    FUNC_3(VAR_20, VAR_9, VAR_12, VAR_22,
      VAR_1);

   FUNC_5(VAR_20, VAR_9, VAR_11, VAR_22, VAR_14,
      0x03);
   FUNC_5(VAR_20, VAR_9, VAR_12, VAR_22,
      VAR_1, 0x04);
  } else {
   VAR_21->fbmix[VAR_22] =
    FUNC_3(VAR_20, VAR_9, VAR_11, VAR_22,
      VAR_13);
   VAR_21->intpa_master[VAR_22] =
    FUNC_3(VAR_20, VAR_9, VAR_12, VAR_22,
      VAR_0);

   FUNC_5(VAR_20, VAR_9, VAR_11, VAR_22, VAR_13,
      0x03);
   FUNC_5(VAR_20, VAR_9, VAR_12, VAR_22,
      VAR_0, 0x04);

  }

  VAR_23 = 4000;

  FUNC_13(VAR_20, VAR_23, 181, 0, 0, 0);

  FUNC_7(VAR_20, (VAR_22 == VAR_8) ? 0x297 :
       0x29b, (0x1 << 0), (1) << 0);

  FUNC_7(VAR_20, (VAR_24 == VAR_8) ? 0x297 :
       0x29b, (0x1 << 0), (0) << 0);

  FUNC_11(VAR_20, (0x1 << 3), 0, 0x3, 0);
 }
}
