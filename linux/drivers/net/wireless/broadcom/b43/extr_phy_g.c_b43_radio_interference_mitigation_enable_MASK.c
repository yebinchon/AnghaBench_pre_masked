
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b43_phy {int rev; struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_g {int aci_enable; int * interfstack; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int) ;
 int FUNC_5 (struct b43_wldev*,int,int,int) ;
 int FUNC_6 (struct b43_wldev*,int,int) ;
 int FUNC_7 (struct b43_wldev*,int,int,int) ;
 int FUNC_8 (struct b43_wldev*,int) ;
 int FUNC_9 (struct b43_wldev*,int,int) ;
 int FUNC_10 (struct b43_wldev*,int,int) ;
 int FUNC_11 (struct b43_wldev*,int) ;
 int FUNC_12 (struct b43_wldev*,int,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;

__attribute__((used)) static void
FUNC_17(struct b43_wldev *VAR_3, int VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_3->phy;
 struct b43_phy_g *VAR_6 = VAR_5->g;
 u16 VAR_7, VAR_8;
 size_t VAR_9 = 0;
 u32 *VAR_10 = VAR_6->interfstack;

 switch (VAR_4) {
 case 128:
  if (VAR_5->rev != 1) {
   FUNC_9(VAR_3, 0x042B, 0x0800);
   FUNC_6(VAR_3, VAR_1, ~0x4000);
   break;
  }
  FUNC_16(0x0078);
  VAR_7 = (FUNC_11(VAR_3, 0x0078) & 0x001E);
  FUNC_0(VAR_7 > 15);
  VAR_8 = FUNC_13(VAR_7);
  if (VAR_8 < 10 && VAR_8 >= 8)
   VAR_8 = 7;
  else if (VAR_8 >= 10)
   VAR_8 -= 3;
  VAR_8 = (FUNC_13(VAR_8) << 1) | 0x0020;
  FUNC_12(VAR_3, 0x0078, VAR_8);

  FUNC_2(VAR_3);

  FUNC_15(0x0406);
  FUNC_10(VAR_3, 0x0406, 0x7E28);

  FUNC_9(VAR_3, 0x042B, 0x0800);
  FUNC_9(VAR_3, VAR_2, 0x1000);

  FUNC_15(0x04A0);
  FUNC_7(VAR_3, 0x04A0, 0xC0C0, 0x0008);
  FUNC_15(0x04A1);
  FUNC_7(VAR_3, 0x04A1, 0xC0C0, 0x0605);
  FUNC_15(0x04A2);
  FUNC_7(VAR_3, 0x04A2, 0xC0C0, 0x0204);
  FUNC_15(0x04A8);
  FUNC_7(VAR_3, 0x04A8, 0xC0C0, 0x0803);
  FUNC_15(0x04AB);
  FUNC_7(VAR_3, 0x04AB, 0xC0C0, 0x0605);

  FUNC_15(0x04A7);
  FUNC_10(VAR_3, 0x04A7, 0x0002);
  FUNC_15(0x04A3);
  FUNC_10(VAR_3, 0x04A3, 0x287A);
  FUNC_15(0x04A9);
  FUNC_10(VAR_3, 0x04A9, 0x2027);
  FUNC_15(0x0493);
  FUNC_10(VAR_3, 0x0493, 0x32F5);
  FUNC_15(0x04AA);
  FUNC_10(VAR_3, 0x04AA, 0x2027);
  FUNC_15(0x04AC);
  FUNC_10(VAR_3, 0x04AC, 0x32F5);
  break;
 case 129:
  if (FUNC_8(VAR_3, 0x0033) & 0x0800)
   break;

  VAR_6->aci_enable = 1;

  FUNC_15(VAR_2);
  FUNC_15(VAR_1);
  if (VAR_5->rev < 2) {
   FUNC_15(0x0406);
  } else {
   FUNC_15(0x04C0);
   FUNC_15(0x04C1);
  }
  FUNC_15(0x0033);
  FUNC_15(0x04A7);
  FUNC_15(0x04A3);
  FUNC_15(0x04A9);
  FUNC_15(0x04AA);
  FUNC_15(0x04AC);
  FUNC_15(0x0493);
  FUNC_15(0x04A1);
  FUNC_15(0x04A0);
  FUNC_15(0x04A2);
  FUNC_15(0x048A);
  FUNC_15(0x04A8);
  FUNC_15(0x04AB);
  if (VAR_5->rev == 2) {
   FUNC_15(0x04AD);
   FUNC_15(0x04AE);
  } else if (VAR_5->rev >= 3) {
   FUNC_15(0x04AD);
   FUNC_15(0x0415);
   FUNC_15(0x0416);
   FUNC_15(0x0417);
   FUNC_14(0x1A00, 0x2);
   FUNC_14(0x1A00, 0x3);
  }
  FUNC_15(0x042B);
  FUNC_15(0x048C);

  FUNC_6(VAR_3, VAR_2, ~0x1000);
  FUNC_7(VAR_3, VAR_1, 0xFFFC, 0x0002);

  FUNC_10(VAR_3, 0x0033, 0x0800);
  FUNC_10(VAR_3, 0x04A3, 0x2027);
  FUNC_10(VAR_3, 0x04A9, 0x1CA8);
  FUNC_10(VAR_3, 0x0493, 0x287A);
  FUNC_10(VAR_3, 0x04AA, 0x1CA8);
  FUNC_10(VAR_3, 0x04AC, 0x287A);

  FUNC_7(VAR_3, 0x04A0, 0xFFC0, 0x001A);
  FUNC_10(VAR_3, 0x04A7, 0x000D);

  if (VAR_5->rev < 2) {
   FUNC_10(VAR_3, 0x0406, 0xFF0D);
  } else if (VAR_5->rev == 2) {
   FUNC_10(VAR_3, 0x04C0, 0xFFFF);
   FUNC_10(VAR_3, 0x04C1, 0x00A9);
  } else {
   FUNC_10(VAR_3, 0x04C0, 0x00C1);
   FUNC_10(VAR_3, 0x04C1, 0x0059);
  }

  FUNC_7(VAR_3, 0x04A1, 0xC0FF, 0x1800);
  FUNC_7(VAR_3, 0x04A1, 0xFFC0, 0x0015);
  FUNC_7(VAR_3, 0x04A8, 0xCFFF, 0x1000);
  FUNC_7(VAR_3, 0x04A8, 0xF0FF, 0x0A00);
  FUNC_7(VAR_3, 0x04AB, 0xCFFF, 0x1000);
  FUNC_7(VAR_3, 0x04AB, 0xF0FF, 0x0800);
  FUNC_7(VAR_3, 0x04AB, 0xFFCF, 0x0010);
  FUNC_7(VAR_3, 0x04AB, 0xFFF0, 0x0005);
  FUNC_7(VAR_3, 0x04A8, 0xFFCF, 0x0010);
  FUNC_7(VAR_3, 0x04A8, 0xFFF0, 0x0006);
  FUNC_7(VAR_3, 0x04A2, 0xF0FF, 0x0800);
  FUNC_7(VAR_3, 0x04A0, 0xF0FF, 0x0500);
  FUNC_7(VAR_3, 0x04A2, 0xFFF0, 0x000B);

  if (VAR_5->rev >= 3) {
   FUNC_6(VAR_3, 0x048A, 0x7FFF);
   FUNC_7(VAR_3, 0x0415, 0x8000, 0x36D8);
   FUNC_7(VAR_3, 0x0416, 0x8000, 0x36D8);
   FUNC_7(VAR_3, 0x0417, 0xFE00, 0x016D);
  } else {
   FUNC_9(VAR_3, 0x048A, 0x1000);
   FUNC_7(VAR_3, 0x048A, 0x9FFF, 0x2000);
   FUNC_4(VAR_3, FUNC_3(VAR_3) | VAR_0);
  }
  if (VAR_5->rev >= 2) {
   FUNC_9(VAR_3, 0x042B, 0x0800);
  }
  FUNC_7(VAR_3, 0x048C, 0xF0FF, 0x0200);
  if (VAR_5->rev == 2) {
   FUNC_7(VAR_3, 0x04AE, 0xFF00, 0x007F);
   FUNC_7(VAR_3, 0x04AD, 0x00FF, 0x1300);
  } else if (VAR_5->rev >= 6) {
   FUNC_5(VAR_3, 0x1A00, 0x3, 0x007F);
   FUNC_5(VAR_3, 0x1A00, 0x2, 0x007F);
   FUNC_6(VAR_3, 0x04AD, 0x00FF);
  }
  FUNC_1(VAR_3);
  break;
 default:
  FUNC_0(1);
 }
}
