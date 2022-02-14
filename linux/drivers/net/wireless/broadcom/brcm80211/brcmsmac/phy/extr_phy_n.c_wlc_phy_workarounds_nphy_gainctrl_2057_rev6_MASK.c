
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int phy_corenum; } ;
struct brcms_phy {int radio_chanspec; TYPE_1__ pubpi; } ;
typedef int s8 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct brcms_phy*,int,int,int) ;
 int FUNC_5 (struct brcms_phy*,int) ;
 int FUNC_6 (struct brcms_phy*,int ,int,int,int,int const*) ;
 int FUNC_7 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_8(struct brcms_phy *VAR_6)
{
 u16 VAR_7;
 static const s8 VAR_8[] = { 9, 14, 19, 24 };
 const s8 *VAR_9 = ((void*)0);
 const s8 *VAR_10 = ((void*)0);
 const s8 *VAR_11 = ((void*)0);
 static const s8 VAR_12[] = { -9, -6, -3, 0, 3, 3, 3, 3, 3, 3 };
 const s8 *VAR_13;
 static const s8 VAR_14[] = { 0, 1, 2, 3, 4, 4, 4, 4, 4, 4 };
 const s8 *VAR_15;
 static const u16 VAR_16[] = { 0x624f, 0x624f };
 const u16 *VAR_17;
 u16 VAR_18;
 u16 VAR_19;
 u16 VAR_20 = 0;
 u16 VAR_21;
 u16 VAR_22;
 u16 VAR_23;
 u8 VAR_24 = 0;
 u8 VAR_25;
 u16 VAR_26 = 0;
 u8 VAR_27;
 u16 VAR_28;
 s8 VAR_29 = 0, VAR_30 = 0;
 u8 VAR_31 = 0;

 FUNC_4(VAR_6, 0x1c, (0x1 << 13), (1 << 13));
 FUNC_4(VAR_6, 0x32, (0x1 << 13), (1 << 13));

 VAR_7 = FUNC_5(VAR_6, 0x09) & VAR_0;
 if (VAR_7 == 0) {

  VAR_9 = VAR_8;

  FUNC_6(VAR_6, VAR_1, 4, 8, 8,
      VAR_9);
  FUNC_6(VAR_6, VAR_2, 4, 8, 8,
      VAR_9);

  FUNC_4(VAR_6, 0x283, (0xff << 0), (0x40 << 0));

  if (FUNC_3(VAR_6->radio_chanspec)) {
   FUNC_4(VAR_6, 0x280, (0xff << 0), (0x3e << 0));
   FUNC_4(VAR_6, 0x283, (0xff << 0), (0x3e << 0));
  }

  FUNC_4(VAR_6, 0x289, (0xff << 0), (0x46 << 0));

  if (FUNC_2(VAR_6->radio_chanspec)) {
   FUNC_4(VAR_6, 0x300, (0x3f << 0), (13 << 0));
   FUNC_4(VAR_6, 0x301, (0x3f << 0), (13 << 0));
  }
 } else {

  VAR_18 = 0x9e;
  VAR_19 = 0x9e;
  VAR_21 = 0x24;
  VAR_22 = 0x8a;
  VAR_23 = 8;
  VAR_17 = VAR_16;

  VAR_13 = VAR_12;
  VAR_15 = VAR_14;

  VAR_28 = FUNC_0(FUNC_1(VAR_6->radio_chanspec));
  if (FUNC_2(VAR_6->radio_chanspec)) {

   VAR_27 = 25;
   VAR_20 = 0x82;

   if ((VAR_28 <= 5080) || (VAR_28 == 5825)) {

    static const s8 VAR_32[] = { 11, 16, 20, 24 };
    static const s8 VAR_33[] = { 11, 17, 22, 25};
    static const s8 VAR_34[] = { -1, 6, 10, 14 };

    VAR_25 = 0x3e;
    VAR_9 = VAR_32;
    VAR_10 = VAR_33;
    VAR_11 = VAR_34;
   } else if ((VAR_28 >= 5500) && (VAR_28 <= 5700)) {

    static const s8 VAR_35[] = { 11, 17, 21, 25 };
    static const s8 VAR_36[] = { 12, 18, 22, 26};
    static const s8 VAR_37[] = { 1, 8, 12, 16 };

    VAR_25 = 0x45;
    VAR_21 = 0x14;
    VAR_26 = 0xff;
    VAR_31 = 1;
    VAR_9 = VAR_35;
    VAR_10 = VAR_36;
    VAR_11 = VAR_37;
   } else {

    static const s8 VAR_38[] = { 12, 18, 22, 26 };
    static const s8 VAR_39[] = { 12, 18, 22, 26};
    static const s8 VAR_40[] = { -1, 6, 10, 14 };

    VAR_25 = 0x41;
    VAR_9 = VAR_38;
    VAR_10 = VAR_39;
    VAR_11 = VAR_40;
   }

   if (VAR_28 <= 4920) {
    VAR_29 = 5;
    VAR_30 = 5;
   } else if ((VAR_28 > 4920) && (VAR_28 <= 5320)) {
    VAR_29 = 3;
    VAR_30 = 5;
   } else if ((VAR_28 > 5320) && (VAR_28 <= 5700)) {
    VAR_29 = 3;
    VAR_30 = 2;
   } else {
    VAR_29 = 4;
    VAR_30 = 0;
   }
  } else {

   VAR_25 = 0x3a;
   VAR_24 = 0x3a;
   VAR_27 = 20;

   if ((VAR_28 >= 4920) && (VAR_28 <= 5320)) {
    VAR_29 = 4;
    VAR_30 = 5;
   } else if ((VAR_28 > 5320) && (VAR_28 <= 5550)) {
    VAR_29 = 4;
    VAR_30 = 2;
   } else {
    VAR_29 = 5;
    VAR_30 = 3;
   }
  }

  FUNC_7(VAR_6, 0x20, VAR_18);
  FUNC_7(VAR_6, 0x2a7, VAR_18);

  FUNC_6(VAR_6, VAR_5,
      VAR_6->pubpi.phy_corenum, 0x106, 16,
      VAR_17);

  FUNC_7(VAR_6, 0x22, VAR_19);
  FUNC_7(VAR_6, 0x2a9, VAR_19);

  FUNC_7(VAR_6, 0x36, VAR_21);
  FUNC_7(VAR_6, 0x2ac, VAR_21);

  FUNC_7(VAR_6, 0x37, VAR_22);
  FUNC_7(VAR_6, 0x2ad, VAR_22);
  FUNC_7(VAR_6, 0x38, VAR_23);
  FUNC_7(VAR_6, 0x2ae, VAR_23);

  FUNC_6(VAR_6, VAR_1, 10, 0x20, 8,
      VAR_13);
  FUNC_6(VAR_6, VAR_2, 10, 0x20, 8,
      VAR_13);

  FUNC_6(VAR_6, VAR_3, 10, 0x20, 8,
      VAR_15);
  FUNC_6(VAR_6, VAR_4, 10, 0x20, 8,
      VAR_15);

  FUNC_4(VAR_6, 0x283, (0xff << 0), (VAR_25 << 0));

  if (VAR_31 == 1) {
   FUNC_7(VAR_6, 0x2b, VAR_26);
   FUNC_7(VAR_6, 0x41, VAR_26);
  }

  FUNC_4(VAR_6, 0x300, (0x3f << 0), (VAR_27 << 0));
  FUNC_4(VAR_6, 0x301, (0x3f << 0), (VAR_27 << 0));

  FUNC_4(VAR_6, 0x2e4,
       (0x3f << 0), (VAR_29 << 0));

  FUNC_4(VAR_6, 0x2e4,
       (0x3f << 6), (VAR_30 << 6));

  if (FUNC_2(VAR_6->radio_chanspec)) {

   FUNC_6(VAR_6, VAR_1, 4, 8, 8,
       VAR_9);
   FUNC_6(VAR_6, VAR_2, 4, 8, 8,
       VAR_10);

   FUNC_6(VAR_6, VAR_1, 4, 0x10,
       8, VAR_11);
   FUNC_6(VAR_6, VAR_2, 4, 0x10,
       8, VAR_11);

   FUNC_7(VAR_6, 0x24, VAR_20);
   FUNC_7(VAR_6, 0x2ab, VAR_20);
  } else {
   FUNC_4(VAR_6, 0x280, (0xff << 0), (VAR_24 << 0));
  }
 }
}
