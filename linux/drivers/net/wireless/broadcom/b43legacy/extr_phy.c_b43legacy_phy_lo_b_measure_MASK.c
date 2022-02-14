
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {int radio_ver; int* minlowsig; int* minlowsigpos; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int,int) ;
 int FUNC_5 (struct b43legacy_wldev*,int) ;
 int FUNC_6 (struct b43legacy_wldev*,int,int) ;

void FUNC_7(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_phy *VAR_1 = &VAR_0->phy;
 u16 VAR_2[12] = { 0 };
 u16 VAR_3;
 u16 VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_2[0] = FUNC_1(VAR_0, 0x0015);
 VAR_2[1] = FUNC_3(VAR_0, 0x0052) & 0xFFF0;

 if (VAR_1->radio_ver == 0x2053) {
  VAR_2[2] = FUNC_1(VAR_0, 0x000A);
  VAR_2[3] = FUNC_1(VAR_0, 0x002A);
  VAR_2[4] = FUNC_1(VAR_0, 0x0035);
  VAR_2[5] = FUNC_1(VAR_0, 0x0003);
  VAR_2[6] = FUNC_1(VAR_0, 0x0001);
  VAR_2[7] = FUNC_1(VAR_0, 0x0030);

  VAR_2[8] = FUNC_3(VAR_0, 0x0043);
  VAR_2[9] = FUNC_3(VAR_0, 0x007A);
  VAR_2[10] = FUNC_5(VAR_0, 0x03EC);
  VAR_2[11] = FUNC_3(VAR_0, 0x0052) & 0x00F0;

  FUNC_2(VAR_0, 0x0030, 0x00FF);
  FUNC_6(VAR_0, 0x03EC, 0x3F3F);
  FUNC_2(VAR_0, 0x0035, VAR_2[4] & 0xFF7F);
  FUNC_4(VAR_0, 0x007A, VAR_2[9] & 0xFFF0);
 }
 FUNC_2(VAR_0, 0x0015, 0xB000);
 FUNC_2(VAR_0, 0x002B, 0x0004);

 if (VAR_1->radio_ver == 0x2053) {
  FUNC_2(VAR_0, 0x002B, 0x0203);
  FUNC_2(VAR_0, 0x002A, 0x08A3);
 }

 VAR_1->minlowsig[0] = 0xFFFF;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  FUNC_4(VAR_0, 0x0052, VAR_2[1] | VAR_5);
  FUNC_0(VAR_0);
 }
 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  FUNC_4(VAR_0, 0x0052, VAR_2[1] | VAR_5);
  VAR_3 = FUNC_0(VAR_0) / 10;
  if (VAR_3 < VAR_1->minlowsig[0]) {
   VAR_1->minlowsig[0] = VAR_3;
   VAR_1->minlowsigpos[0] = VAR_5;
  }
 }
 FUNC_4(VAR_0, 0x0052, VAR_2[1]
    | VAR_1->minlowsigpos[0]);

 VAR_1->minlowsig[1] = 0xFFFF;

 for (VAR_5 = -4; VAR_5 < 5; VAR_5 += 2) {
  for (VAR_6 = -4; VAR_6 < 5; VAR_6 += 2) {
   if (VAR_6 < 0)
    VAR_4 = (0x0100 * VAR_5) + VAR_6 + 0x0100;
   else
    VAR_4 = (0x0100 * VAR_5) + VAR_6;
   FUNC_2(VAR_0, 0x002F, VAR_4);
   VAR_3 = FUNC_0(VAR_0) / 10;
   if (VAR_3 < VAR_1->minlowsig[1]) {
    VAR_1->minlowsig[1] = VAR_3;
    VAR_1->minlowsigpos[1] = VAR_4;
   }
  }
 }
 VAR_1->minlowsigpos[1] += 0x0101;

 FUNC_2(VAR_0, 0x002F, VAR_1->minlowsigpos[1]);
 if (VAR_1->radio_ver == 0x2053) {
  FUNC_2(VAR_0, 0x000A, VAR_2[2]);
  FUNC_2(VAR_0, 0x002A, VAR_2[3]);
  FUNC_2(VAR_0, 0x0035, VAR_2[4]);
  FUNC_2(VAR_0, 0x0003, VAR_2[5]);
  FUNC_2(VAR_0, 0x0001, VAR_2[6]);
  FUNC_2(VAR_0, 0x0030, VAR_2[7]);

  FUNC_4(VAR_0, 0x0043, VAR_2[8]);
  FUNC_4(VAR_0, 0x007A, VAR_2[9]);

  FUNC_4(VAR_0, 0x0052,
     (FUNC_3(VAR_0, 0x0052)
     & 0x000F) | VAR_2[11]);

  FUNC_6(VAR_0, 0x03EC, VAR_2[10]);
 }
 FUNC_2(VAR_0, 0x0015, VAR_2[0]);
}
