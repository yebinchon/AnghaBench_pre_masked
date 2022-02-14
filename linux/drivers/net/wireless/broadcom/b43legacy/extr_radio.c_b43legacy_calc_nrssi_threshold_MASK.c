
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43legacy_phy {int type; int radio_ver; int radio_rev; int* nrssi; int aci_enable; int aci_wlan_automatic; int interfmode; int gmode; } ;
struct b43legacy_wldev {TYPE_3__* dev; struct b43legacy_phy phy; } ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {int boardflags_lo; } ;
struct TYPE_5__ {TYPE_1__ sprom; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;


 int VAR_1 ;
 int FUNC_1 (struct b43legacy_wldev*,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int) ;
 int FUNC_4 (int,int,int) ;

void FUNC_5(struct b43legacy_wldev *VAR_2)
{
 struct b43legacy_phy *VAR_3 = &VAR_2->phy;
 s32 VAR_4;
 s32 VAR_5;
 s32 VAR_6;
 s16 VAR_7;
 u16 VAR_8;

 switch (VAR_3->type) {
 case 129: {
  if (VAR_3->radio_ver != 0x2050)
   return;
  if (!(VAR_2->dev->bus->sprom.boardflags_lo &
      VAR_0))
   return;

  if (VAR_3->radio_rev >= 6) {
   VAR_4 = (VAR_3->nrssi[1] - VAR_3->nrssi[0]) * 32;
   VAR_4 += 20 * (VAR_3->nrssi[0] + 1);
   VAR_4 /= 40;
  } else
   VAR_4 = VAR_3->nrssi[1] - 5;

  VAR_4 = FUNC_4(VAR_4, 0, 0x3E);
  FUNC_2(VAR_2, 0x0020);
  FUNC_3(VAR_2, 0x0020, (((u16)VAR_4) << 8)
        | 0x001C);

  if (VAR_3->radio_rev >= 6) {
   FUNC_3(VAR_2, 0x0087, 0x0E0D);
   FUNC_3(VAR_2, 0x0086, 0x0C0B);
   FUNC_3(VAR_2, 0x0085, 0x0A09);
   FUNC_3(VAR_2, 0x0084, 0x0808);
   FUNC_3(VAR_2, 0x0083, 0x0808);
   FUNC_3(VAR_2, 0x0082, 0x0604);
   FUNC_3(VAR_2, 0x0081, 0x0302);
   FUNC_3(VAR_2, 0x0080, 0x0100);
  }
  break;
 }
 case 128:
  if (!VAR_3->gmode ||
      !(VAR_2->dev->bus->sprom.boardflags_lo &
      VAR_0)) {
   VAR_7 = FUNC_1(VAR_2, 0x20);
   if (VAR_7 >= 0x20)
    VAR_7 -= 0x40;
   if (VAR_7 < 3)
    FUNC_3(VAR_2, 0x048A,
          (FUNC_2(VAR_2,
          0x048A) & 0xF000) | 0x09EB);
   else
    FUNC_3(VAR_2, 0x048A,
          (FUNC_2(VAR_2,
          0x048A) & 0xF000) | 0x0AED);
  } else {
   if (VAR_3->interfmode ==
       VAR_1) {
    VAR_5 = 0xE;
    VAR_6 = 0xA;
   } else if (!VAR_3->aci_wlan_automatic &&
        VAR_3->aci_enable) {
    VAR_5 = 0x13;
    VAR_6 = 0x12;
   } else {
    VAR_5 = 0xE;
    VAR_6 = 0x11;
   }

   VAR_5 = VAR_5 * (VAR_3->nrssi[1] - VAR_3->nrssi[0]);
   VAR_5 += (VAR_3->nrssi[0] << 6);
   if (VAR_5 < 32)
    VAR_5 += 31;
   else
    VAR_5 += 32;
   VAR_5 = VAR_5 >> 6;
   VAR_5 = FUNC_4(VAR_5, -31, 31);

   VAR_6 = VAR_6 * (VAR_3->nrssi[1] - VAR_3->nrssi[0]);
   VAR_6 += (VAR_3->nrssi[0] << 6);
   if (VAR_6 < 32)
    VAR_6 += 31;
   else
    VAR_6 += 32;
   VAR_6 = VAR_6 >> 6;
   VAR_6 = FUNC_4(VAR_6, -31, 31);

   VAR_8 = FUNC_2(VAR_2, 0x048A) & 0xF000;
   VAR_8 |= ((u32)VAR_6 & 0x0000003F);
   VAR_8 |= (((u32)VAR_5 & 0x0000003F) << 6);
   FUNC_3(VAR_2, 0x048A, VAR_8);
  }
  break;
 default:
  FUNC_0(1);
 }
}
