
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43_phy {scalar_t__ type; int gmode; struct b43_phy_g* g; } ;
struct b43_wldev {TYPE_2__* dev; struct b43_phy phy; } ;
struct b43_phy_g {scalar_t__ interfmode; int* nrssi; scalar_t__ aci_enable; int aci_wlan_automatic; } ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_4__ {TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {int boardflags_lo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*,int,int,int) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (int,int,int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_3)
{
 struct b43_phy *VAR_4 = &VAR_3->phy;
 struct b43_phy_g *VAR_5 = VAR_4->g;
 s32 VAR_6, VAR_7;
 s16 VAR_8;
 u16 VAR_9;

 FUNC_0(VAR_4->type != VAR_2);

 if (!VAR_4->gmode ||
     !(VAR_3->dev->bus_sprom->boardflags_lo & VAR_0)) {
  VAR_8 = FUNC_1(VAR_3, 0x20);
  if (VAR_8 >= 0x20)
   VAR_8 -= 0x40;
  if (VAR_8 < 3) {
   FUNC_2(VAR_3, 0x048A, 0xF000, 0x09EB);
  } else {
   FUNC_2(VAR_3, 0x048A, 0xF000, 0x0AED);
  }
 } else {
  if (VAR_5->interfmode == VAR_1) {
   VAR_6 = 0xE;
   VAR_7 = 0xA;
  } else if (!VAR_5->aci_wlan_automatic && VAR_5->aci_enable) {
   VAR_6 = 0x13;
   VAR_7 = 0x12;
  } else {
   VAR_6 = 0xE;
   VAR_7 = 0x11;
  }

  VAR_6 = VAR_6 * (VAR_5->nrssi[1] - VAR_5->nrssi[0]);
  VAR_6 += (VAR_5->nrssi[0] << 6);
  if (VAR_6 < 32)
   VAR_6 += 31;
  else
   VAR_6 += 32;
  VAR_6 = VAR_6 >> 6;
  VAR_6 = FUNC_5(VAR_6, -31, 31);

  VAR_7 = VAR_7 * (VAR_5->nrssi[1] - VAR_5->nrssi[0]);
  VAR_7 += (VAR_5->nrssi[0] << 6);
  if (VAR_7 < 32)
   VAR_7 += 31;
  else
   VAR_7 += 32;
  VAR_7 = VAR_7 >> 6;
  VAR_7 = FUNC_5(VAR_7, -31, 31);

  VAR_9 = FUNC_3(VAR_3, 0x048A) & 0xF000;
  VAR_9 |= ((u32) VAR_7 & 0x0000003F);
  VAR_9 |= (((u32) VAR_6 & 0x0000003F) << 6);
  FUNC_4(VAR_3, 0x048A, VAR_9);
 }
}
