
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct b43legacy_phy {int rev; int radio_rev; int initval; int txctl2; int radio_ver; int txctl1; int* nrssi; scalar_t__ gmode; } ;
struct b43legacy_wldev {TYPE_3__* dev; struct b43legacy_phy phy; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {int boardflags_lo; } ;
struct TYPE_5__ {int chip_id; int chip_package; TYPE_1__ sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*,int) ;
 int FUNC_5 (struct b43legacy_wldev*) ;
 int FUNC_6 (struct b43legacy_wldev*) ;
 int FUNC_7 (struct b43legacy_wldev*) ;
 int FUNC_8 (struct b43legacy_wldev*) ;
 int FUNC_9 (struct b43legacy_wldev*,int ) ;
 int FUNC_10 (struct b43legacy_wldev*) ;
 int FUNC_11 (struct b43legacy_wldev*,int) ;
 int FUNC_12 (struct b43legacy_wldev*,int,int) ;
 int FUNC_13 (struct b43legacy_wldev*) ;
 int FUNC_14 (struct b43legacy_wldev*,int) ;
 int FUNC_15 (struct b43legacy_wldev*,int,int) ;

__attribute__((used)) static void FUNC_16(struct b43legacy_wldev *VAR_2)
{
 struct b43legacy_phy *VAR_3 = &VAR_2->phy;
 u16 VAR_4;

 if (VAR_3->rev == 1)
  FUNC_7(VAR_2);
 else
  FUNC_8(VAR_2);
 if (VAR_3->rev >= 2 && VAR_3->gmode)
  FUNC_6(VAR_2);

 if (VAR_3->rev >= 2) {
  FUNC_12(VAR_2, 0x0814, 0x0000);
  FUNC_12(VAR_2, 0x0815, 0x0000);
 }
 if (VAR_3->rev == 2) {
  FUNC_12(VAR_2, 0x0811, 0x0000);
  FUNC_12(VAR_2, 0x0015, 0x00C0);
 }
 if (VAR_3->rev > 5) {
  FUNC_12(VAR_2, 0x0811, 0x0400);
  FUNC_12(VAR_2, 0x0015, 0x00C0);
 }
 if (VAR_3->gmode) {
  VAR_4 = FUNC_11(VAR_2, 0x0400) & 0xFF;
  if (VAR_4 == 3) {
   FUNC_12(VAR_2, 0x04C2, 0x1816);
   FUNC_12(VAR_2, 0x04C3, 0x8606);
  }
  if (VAR_4 == 4 || VAR_4 == 5) {
   FUNC_12(VAR_2, 0x04C2, 0x1816);
   FUNC_12(VAR_2, 0x04C3, 0x8006);
   FUNC_12(VAR_2, 0x04CC,
         (FUNC_11(VAR_2,
          0x04CC) & 0x00FF) |
          0x1F00);
  }
  if (VAR_3->rev >= 2)
   FUNC_12(VAR_2, 0x047E, 0x0078);
 }
 if (VAR_3->radio_rev == 8) {
  FUNC_12(VAR_2, 0x0801, FUNC_11(VAR_2, 0x0801)
        | 0x0080);
  FUNC_12(VAR_2, 0x043E, FUNC_11(VAR_2, 0x043E)
        | 0x0004);
 }
 if (VAR_3->rev >= 2 && VAR_3->gmode)
  FUNC_1(VAR_2);
 if (VAR_3->radio_rev != 8) {
  if (VAR_3->initval == 0xFFFF)
   VAR_3->initval = FUNC_13(VAR_2);
  else
   FUNC_15(VAR_2, 0x0078, VAR_3->initval);
 }
 if (VAR_3->txctl2 == 0xFFFF)
  FUNC_10(VAR_2);
 else {
  if (VAR_3->radio_ver == 0x2050 && VAR_3->radio_rev == 8)
   FUNC_15(VAR_2, 0x0052,
      (VAR_3->txctl1 << 4) |
      VAR_3->txctl2);
  else
   FUNC_15(VAR_2, 0x0052,
      (FUNC_14(VAR_2,
       0x0052) & 0xFFF0) |
       VAR_3->txctl1);
  if (VAR_3->rev >= 6)
   FUNC_12(VAR_2, 0x0036,
         (FUNC_11(VAR_2, 0x0036)
          & 0x0FFF) | (VAR_3->txctl2 << 12));
  if (VAR_2->dev->bus->sprom.boardflags_lo &
      VAR_0)
   FUNC_12(VAR_2, 0x002E, 0x8075);
  else
   FUNC_12(VAR_2, 0x002E, 0x807F);
  if (VAR_3->rev < 2)
   FUNC_12(VAR_2, 0x002F, 0x0101);
  else
   FUNC_12(VAR_2, 0x002F, 0x0202);
 }
 if (VAR_3->gmode) {
  FUNC_9(VAR_2, 0);
  FUNC_12(VAR_2, 0x080F, 0x8078);
 }

 if (!(VAR_2->dev->bus->sprom.boardflags_lo & VAR_1)) {






  FUNC_4(VAR_2, 0xFFFF);
  FUNC_3(VAR_2);
 } else if (VAR_3->gmode || VAR_3->rev >= 2) {
  if (VAR_3->nrssi[0] == -1000) {
   FUNC_0(VAR_3->nrssi[1] != -1000);
   FUNC_2(VAR_2);
  } else {
   FUNC_0(VAR_3->nrssi[1] == -1000);
   FUNC_3(VAR_2);
  }
 }
 if (VAR_3->radio_rev == 8)
  FUNC_12(VAR_2, 0x0805, 0x3230);
 FUNC_5(VAR_2);
 if (VAR_2->dev->bus->chip_id == 0x4306
     && VAR_2->dev->bus->chip_package == 2) {
  FUNC_12(VAR_2, 0x0429,
        FUNC_11(VAR_2, 0x0429) & 0xBFFF);
  FUNC_12(VAR_2, 0x04C3,
        FUNC_11(VAR_2, 0x04C3) & 0x7FFF);
 }
}
