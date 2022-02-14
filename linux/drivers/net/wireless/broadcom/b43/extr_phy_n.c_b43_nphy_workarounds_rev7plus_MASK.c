
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssb_sprom {int boardflags2_hi; scalar_t__ revision; } ;
struct b43_phy {int rev; int radio_rev; TYPE_3__* chandef; } ;
struct b43_wldev {int wl; struct b43_phy phy; TYPE_1__* dev; } ;
typedef int s16 ;
struct TYPE_6__ {TYPE_2__* chan; } ;
struct TYPE_5__ {int center_freq; } ;
struct TYPE_4__ {struct ssb_sprom* bus_sprom; } ;


 int FUNC_0 (int*) ;
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
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_26 ;
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
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*) ;
 scalar_t__ FUNC_7 (struct b43_wldev*) ;
 int FUNC_8 (struct b43_wldev*,int) ;
 int FUNC_9 (struct b43_wldev*,int,int,int,int,int ) ;
 int FUNC_10 (struct b43_wldev*,int,int*,int*,int ) ;
 int FUNC_11 (struct b43_wldev*,int ) ;
 int FUNC_12 (struct b43_wldev*,int ,int,int*) ;
 int FUNC_13 (struct b43_wldev*,int ,int) ;
 int FUNC_14 (struct b43_wldev*,int ,int,int const*) ;
 int FUNC_15 (struct b43_wldev*,int ,int) ;
 int FUNC_16 (struct b43_wldev*,int ,int,int) ;
 int FUNC_17 (struct b43_wldev*,int ,int) ;
 int FUNC_18 (struct b43_wldev*,int,int) ;
 int FUNC_19 (struct b43_wldev*,int ) ;
 int FUNC_20 (struct b43_wldev*,int,int) ;
 int FUNC_21 (struct b43_wldev*,int,int) ;
 int FUNC_22 (int,int ,int) ;

__attribute__((used)) static void FUNC_23(struct b43_wldev *VAR_37)
{
 struct ssb_sprom *VAR_38 = VAR_37->dev->bus_sprom;
 struct b43_phy *VAR_39 = &VAR_37->phy;


 u8 VAR_40[7] = { 4, 3, 5, 2, 1, 8, 31, };
 u8 VAR_41[7] = { 8, 4, 4, 4, 4, 6, 1, };

 u8 VAR_42[9] = { 0x0, 0x1, 0x2, 0x8, 0x5, 0x6, 0xF, 0x3,
     0x1F };
 u8 VAR_43[9] = { 8, 6, 6, 4, 4, 16, 43, 1, 1 };

 static const u16 VAR_44[] = { 0, 0x10f, 0x10f };
 u8 VAR_45[] = { 0x11, 0x11 };
 u8 VAR_46[] = { 0x77, 0x11, 0x11 };

 u16 VAR_47[2], VAR_48[2], VAR_49[2];
 u16 VAR_50;
 s16 VAR_51[2], VAR_52[2], VAR_53[2];
 u16 VAR_54;
 s16 VAR_55[2], VAR_56[2], VAR_57[2];
 bool VAR_58 = 0;

 u16 VAR_59, VAR_60, VAR_61;

 u32 VAR_62[2];

 u32 VAR_63;
 u8 VAR_64;

 FUNC_18(VAR_37, VAR_19, 0x0125);
 FUNC_18(VAR_37, VAR_20, 0x01b3);
 FUNC_18(VAR_37, VAR_21, 0x0105);
 FUNC_18(VAR_37, VAR_22, 0x016e);
 FUNC_18(VAR_37, VAR_23, 0x00cd);
 FUNC_18(VAR_37, VAR_24, 0x0020);

 if (VAR_39->rev == 7) {
  FUNC_17(VAR_37, VAR_8, 0x10);
  FUNC_16(VAR_37, VAR_11, 0xFF80, 0x0020);
  FUNC_16(VAR_37, VAR_11, 0x80FF, 0x2700);
  FUNC_16(VAR_37, VAR_12, 0xFF80, 0x002E);
  FUNC_16(VAR_37, VAR_12, 0x80FF, 0x3300);
  FUNC_16(VAR_37, VAR_13, 0xFF80, 0x0037);
  FUNC_16(VAR_37, VAR_13, 0x80FF, 0x3A00);
  FUNC_16(VAR_37, VAR_14, 0xFF80, 0x003C);
  FUNC_16(VAR_37, VAR_14, 0x80FF, 0x3E00);
  FUNC_16(VAR_37, VAR_15, 0xFF80, 0x003E);
  FUNC_16(VAR_37, VAR_15, 0x80FF, 0x3F00);
  FUNC_16(VAR_37, VAR_16, 0xFF80, 0x0040);
  FUNC_16(VAR_37, VAR_16, 0x80FF, 0x4000);
  FUNC_16(VAR_37, VAR_17, 0xFF80, 0x0040);
  FUNC_16(VAR_37, VAR_17, 0x80FF, 0x4000);
  FUNC_16(VAR_37, VAR_18, 0xFF80, 0x0040);
  FUNC_16(VAR_37, VAR_18, 0x80FF, 0x4000);
 }

 if (VAR_39->rev >= 16) {
  FUNC_18(VAR_37, VAR_9, 0x7ff);
  FUNC_18(VAR_37, VAR_10, 0x7ff);
 } else if (VAR_39->rev <= 8) {
  FUNC_18(VAR_37, VAR_9, 0x1B0);
  FUNC_18(VAR_37, VAR_10, 0x1B0);
 }

 if (VAR_39->rev >= 16)
  FUNC_16(VAR_37, VAR_25, ~0xFF, 0xa0);
 else if (VAR_39->rev >= 8)
  FUNC_16(VAR_37, VAR_25, ~0xFF, 0x72);

 FUNC_13(VAR_37, FUNC_1(8, 0x00), 2);
 FUNC_13(VAR_37, FUNC_1(8, 0x10), 2);
 VAR_63 = FUNC_11(VAR_37, FUNC_2(30, 0));
 VAR_63 &= 0xffffff;
 FUNC_13(VAR_37, FUNC_2(30, 0), VAR_63);
 FUNC_14(VAR_37, FUNC_1(7, 0x15d), 3, VAR_44);
 FUNC_14(VAR_37, FUNC_1(7, 0x16d), 3, VAR_44);

 FUNC_10(VAR_37, 1, VAR_40, VAR_41,
     FUNC_0(VAR_40));
 if (FUNC_7(VAR_37))
  FUNC_10(VAR_37, 0, VAR_42,
    VAR_43, FUNC_0(VAR_42));

 FUNC_16(VAR_37, VAR_6, 0x3FFF, 0x4000);
 FUNC_16(VAR_37, VAR_7, 0x3FFF, 0x4000);

 for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
  VAR_47[VAR_64] = FUNC_8(VAR_37, 0x154 + VAR_64 * 0x10);
  VAR_48[VAR_64] = FUNC_8(VAR_37, 0x159 + VAR_64 * 0x10);
  VAR_49[VAR_64] = FUNC_8(VAR_37, 0x152 + VAR_64 * 0x10);
 }

 VAR_50 = FUNC_19(VAR_37, VAR_34);
 VAR_54 = FUNC_19(VAR_37, VAR_35);

 if (FUNC_7(VAR_37)) {
  bool VAR_65 = FUNC_4(VAR_37->wl) == VAR_26;

  switch (VAR_39->radio_rev) {
  case 5:

   if (VAR_39->rev == 8 && FUNC_5(VAR_37)) {
    for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
     VAR_55[VAR_64] = VAR_54;
     VAR_51[VAR_64] = VAR_50;
     VAR_56[VAR_64] = VAR_54;
     VAR_52[VAR_64] = VAR_50;
     VAR_57[VAR_64] = 0xc;
     VAR_53[VAR_64] = 0xc;
    }

    VAR_58 = 1;
   }
   if (VAR_39->rev == 9) {

   }
   break;
  case 7:
  case 8:
   for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
    VAR_55[VAR_64] = VAR_54;
    VAR_51[VAR_64] = VAR_50;
    VAR_47[VAR_64] = 4;
    VAR_49[VAR_64] = 1;
    if (FUNC_4(VAR_37->wl) == VAR_26) {
     VAR_56[VAR_64] = 0xc;
     VAR_52[VAR_64] = 0xc;
     VAR_57[VAR_64] = 0xa;
     VAR_53[VAR_64] = 0xa;
    } else {
     VAR_56[VAR_64] = 0x14;
     VAR_52[VAR_64] = 0x14;
     VAR_57[VAR_64] = 0xf;
     VAR_53[VAR_64] = 0xf;
    }
   }

   VAR_58 = 1;
   break;
  case 9:
   for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
    VAR_51[VAR_64] = VAR_50;
    VAR_55[VAR_64] = VAR_54;
    VAR_49[VAR_64] = 1;

    if (VAR_65) {
     VAR_52[VAR_64] = VAR_50 + 13;
     VAR_56[VAR_64] = VAR_54 + 15;
    } else {
     VAR_52[VAR_64] = VAR_50 + 14;
     VAR_56[VAR_64] = VAR_54 + 15;
    }
    VAR_47[VAR_64] = 4;

    if (VAR_65) {
     VAR_53[VAR_64] = VAR_50 - 7;
     VAR_57[VAR_64] = VAR_54 - 5;
    } else {
     VAR_53[VAR_64] = VAR_50 + 2;
     VAR_57[VAR_64] = VAR_54 + 4;
    }
    VAR_48[VAR_64] = 4;
   }

   VAR_58 = 1;
   break;
  case 14:
   for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
    VAR_51[VAR_64] = VAR_50;
    VAR_55[VAR_64] = VAR_54;
    VAR_49[VAR_64] = 1;
   }

   VAR_52[0] = VAR_50 + 20;
   VAR_56[0] = VAR_54 + 20;
   VAR_47[0] = 3;

   VAR_52[1] = VAR_50 + 16;
   VAR_56[1] = VAR_54 + 16;
   VAR_47[1] = 3;

   VAR_53[0] = VAR_50 + 20;
   VAR_57[0] = VAR_54 + 20;
   VAR_48[0] = 4;

   VAR_53[1] = VAR_50 + 10;
   VAR_57[1] = VAR_54 + 10;
   VAR_48[1] = 4;

   VAR_58 = 1;
   break;
  }
 } else {
  if (VAR_39->radio_rev == 5) {
   for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
    VAR_47[VAR_64] = 1;
    VAR_48[VAR_64] = 3;
    VAR_55[VAR_64] = VAR_54;
    VAR_51[VAR_64] = VAR_50;
    VAR_56[VAR_64] = 0x11;
    VAR_57[VAR_64] = 0x11;
    VAR_52[VAR_64] = 0x13;
    VAR_53[VAR_64] = 0x13;
   }

   VAR_58 = 1;
  }
 }
 if (VAR_58) {
  u16 VAR_66[2], VAR_67[2], VAR_68[2];
  u8 VAR_69 = 1;

  for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
   VAR_51[VAR_64] = FUNC_22(VAR_51[VAR_64], 0, 0x1f);
   VAR_55[VAR_64] = FUNC_22(VAR_55[VAR_64], 0, 0x1f);
   VAR_52[VAR_64] = FUNC_22(VAR_52[VAR_64], 0, 0x1f);
   VAR_56[VAR_64] = FUNC_22(VAR_56[VAR_64], 0, 0x1f);
   VAR_53[VAR_64] = FUNC_22(VAR_53[VAR_64], 0, 0x1f);
   VAR_57[VAR_64] = FUNC_22(VAR_57[VAR_64], 0, 0x1f);

   VAR_66[VAR_64] = (VAR_69 << 13) |
       (VAR_51[VAR_64] << 8) |
       (VAR_55[VAR_64] << 3) |
       VAR_49[VAR_64];
   VAR_67[VAR_64] = (VAR_69 << 13) |
       (VAR_52[VAR_64] << 8) |
       (VAR_56[VAR_64] << 3) |
       VAR_47[VAR_64];
   VAR_68[VAR_64] = (VAR_69 << 13) |
       (VAR_53[VAR_64] << 8) |
       (VAR_57[VAR_64] << 3) |
       VAR_48[VAR_64];
  }

  for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
   FUNC_13(VAR_37, FUNC_1(7, 0x152 + VAR_64 * 16),
           VAR_66[VAR_64]);
   FUNC_13(VAR_37, FUNC_1(7, 0x153 + VAR_64 * 16),
           VAR_67[VAR_64]);
   FUNC_13(VAR_37, FUNC_1(7, 0x154 + VAR_64 * 16),
           VAR_67[VAR_64]);
   FUNC_13(VAR_37, FUNC_1(7, 0x155 + VAR_64 * 16),
           VAR_68[VAR_64]);
   FUNC_13(VAR_37, FUNC_1(7, 0x156 + VAR_64 * 16),
           VAR_68[VAR_64]);
   FUNC_13(VAR_37, FUNC_1(7, 0x157 + VAR_64 * 16),
           VAR_68[VAR_64]);
   FUNC_13(VAR_37, FUNC_1(7, 0x158 + VAR_64 * 16),
           VAR_68[VAR_64]);
   FUNC_13(VAR_37, FUNC_1(7, 0x159 + VAR_64 * 16),
           VAR_68[VAR_64]);
  }
 }

 FUNC_18(VAR_37, 0x32F, 0x3);

 if (VAR_39->radio_rev == 4 || VAR_39->radio_rev == 6)
  FUNC_9(VAR_37, 4, 1, 3, 0, 0);

 if (VAR_39->radio_rev == 3 || VAR_39->radio_rev == 4 || VAR_39->radio_rev == 6) {
  if (VAR_38->revision &&
      VAR_38->boardflags2_hi & VAR_0) {
   FUNC_21(VAR_37, 0x5, 0x05);
   FUNC_21(VAR_37, 0x6, 0x30);
   FUNC_21(VAR_37, 0x7, 0x00);
   FUNC_20(VAR_37, 0x4f, 0x1);
   FUNC_20(VAR_37, 0xd4, 0x1);
   VAR_59 = 0x1f;
   VAR_60 = 0x6f;
   VAR_61 = 0xaa;
  } else {
   VAR_59 = 0x2b;
   VAR_60 = 0x7f;
   VAR_61 = 0xee;
  }
  if (FUNC_4(VAR_37->wl) == VAR_26) {
   for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
    if (VAR_64 == 0) {
     FUNC_21(VAR_37, 0x5F, VAR_59);
     FUNC_21(VAR_37, 0x64, VAR_60);
     FUNC_21(VAR_37, 0x66, VAR_61);
    } else {
     FUNC_21(VAR_37, 0xE8, VAR_59);
     FUNC_21(VAR_37, 0xE9, VAR_60);
     FUNC_21(VAR_37, 0xEB, VAR_61);
    }
   }
  }
 }

 if (FUNC_7(VAR_37)) {
  if (FUNC_4(VAR_37->wl) == VAR_26) {
   if (VAR_39->radio_rev == 3 || VAR_39->radio_rev == 4 ||
       VAR_39->radio_rev == 6) {
    for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
     if (VAR_64 == 0)
      FUNC_21(VAR_37, 0x51,
        0x7f);
     else
      FUNC_21(VAR_37, 0xd6,
        0x7f);
    }
   }
   switch (VAR_39->radio_rev) {
   case 3:
    for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
     if (VAR_64 == 0) {
      FUNC_21(VAR_37, 0x64,
        0x13);
      FUNC_21(VAR_37, 0x5F,
        0x1F);
      FUNC_21(VAR_37, 0x66,
        0xEE);
      FUNC_21(VAR_37, 0x59,
        0x8A);
      FUNC_21(VAR_37, 0x80,
        0x3E);
     } else {
      FUNC_21(VAR_37, 0x69,
        0x13);
      FUNC_21(VAR_37, 0xE8,
        0x1F);
      FUNC_21(VAR_37, 0xEB,
        0xEE);
      FUNC_21(VAR_37, 0xDE,
        0x8A);
      FUNC_21(VAR_37, 0x105,
        0x3E);
     }
    }
    break;
   case 7:
   case 8:
    if (!FUNC_5(VAR_37)) {
     FUNC_21(VAR_37, 0x5F, 0x14);
     FUNC_21(VAR_37, 0xE8, 0x12);
    } else {
     FUNC_21(VAR_37, 0x5F, 0x16);
     FUNC_21(VAR_37, 0xE8, 0x16);
    }
    break;
   case 14:
    for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
     int VAR_70 = VAR_64 ? 0x85 : 0;

     FUNC_21(VAR_37, VAR_70 + VAR_29, 0x13);
     FUNC_21(VAR_37, VAR_70 + VAR_36, 0x21);
     FUNC_21(VAR_37, VAR_70 + VAR_28, 0xff);
     FUNC_21(VAR_37, VAR_70 + VAR_31, 0x88);
     FUNC_21(VAR_37, VAR_70 + VAR_32, 0x23);
     FUNC_21(VAR_37, VAR_70 + VAR_30, 0x16);
     FUNC_21(VAR_37, VAR_70 + VAR_33, 0x3e);
     FUNC_21(VAR_37, VAR_70 + VAR_27, 0x10);
    }
    break;
   }
  } else {
   u16 VAR_71 = VAR_39->chandef->chan->center_freq;
   if ((VAR_71 >= 5180 && VAR_71 <= 5230) ||
       (VAR_71 >= 5745 && VAR_71 <= 5805)) {
    FUNC_21(VAR_37, 0x7D, 0xFF);
    FUNC_21(VAR_37, 0xFE, 0xFF);
   }
  }
 } else {
  if (VAR_39->radio_rev != 5) {
   for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
    if (VAR_64 == 0) {
     FUNC_21(VAR_37, 0x5c, 0x61);
     FUNC_21(VAR_37, 0x51, 0x70);
    } else {
     FUNC_21(VAR_37, 0xe1, 0x61);
     FUNC_21(VAR_37, 0xd6, 0x70);
    }
   }
  }
 }

 if (VAR_39->radio_rev == 4) {
  FUNC_13(VAR_37, FUNC_1(8, 0x05), 0x20);
  FUNC_13(VAR_37, FUNC_1(8, 0x15), 0x20);
  for (VAR_64 = 0; VAR_64 < 2; VAR_64++) {
   if (VAR_64 == 0) {
    FUNC_21(VAR_37, 0x1a1, 0x00);
    FUNC_21(VAR_37, 0x1a2, 0x3f);
    FUNC_21(VAR_37, 0x1a6, 0x3f);
   } else {
    FUNC_21(VAR_37, 0x1a7, 0x00);
    FUNC_21(VAR_37, 0x1ab, 0x3f);
    FUNC_21(VAR_37, 0x1ac, 0x3f);
   }
  }
 } else {
  FUNC_17(VAR_37, VAR_1, 0x4);
  FUNC_17(VAR_37, VAR_4, 0x4);
  FUNC_17(VAR_37, VAR_2, 0x4);
  FUNC_17(VAR_37, VAR_3, 0x4);

  FUNC_15(VAR_37, VAR_1, ~0x1);
  FUNC_17(VAR_37, VAR_4, 0x1);
  FUNC_15(VAR_37, VAR_2, ~0x1);
  FUNC_17(VAR_37, VAR_3, 0x1);
  FUNC_13(VAR_37, FUNC_1(8, 0x05), 0);
  FUNC_13(VAR_37, FUNC_1(8, 0x15), 0);

  FUNC_15(VAR_37, VAR_1, ~0x4);
  FUNC_15(VAR_37, VAR_4, ~0x4);
  FUNC_15(VAR_37, VAR_2, ~0x4);
  FUNC_15(VAR_37, VAR_3, ~0x4);
 }

 FUNC_18(VAR_37, VAR_5, 0x2);

 FUNC_13(VAR_37, FUNC_2(16, 0x100), 20);
 FUNC_14(VAR_37, FUNC_3(7, 0x138), 2, VAR_45);
 FUNC_13(VAR_37, FUNC_1(7, 0x141), 0x77);
 FUNC_14(VAR_37, FUNC_3(7, 0x133), 3, VAR_46);
 FUNC_14(VAR_37, FUNC_3(7, 0x146), 2, VAR_45);
 FUNC_13(VAR_37, FUNC_1(7, 0x123), 0x77);
 FUNC_13(VAR_37, FUNC_1(7, 0x12A), 0x77);

 FUNC_12(VAR_37, FUNC_2(16, 0x02), 1, VAR_62);
 VAR_62[1] = FUNC_5(VAR_37) ? 0x14D : 0x18D;
 FUNC_14(VAR_37, FUNC_2(16, 0x02), 2, VAR_62);

 FUNC_12(VAR_37, FUNC_2(16, 0x7E), 1, VAR_62);
 VAR_62[1] = FUNC_5(VAR_37) ? 0x14D : 0x18D;
 FUNC_14(VAR_37, FUNC_2(16, 0x7E), 2, VAR_62);

 FUNC_6(VAR_37);
}
