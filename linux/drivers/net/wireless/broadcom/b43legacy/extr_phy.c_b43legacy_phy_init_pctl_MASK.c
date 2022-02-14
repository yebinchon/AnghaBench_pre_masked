
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct b43legacy_phy {scalar_t__ type; int savedpctlreg; int rev; int radio_ver; int bbatt; int rfatt; int txctl1; int radio_rev; scalar_t__ manual_txpower_control; int gmode; } ;
struct b43legacy_wldev {TYPE_3__* dev; struct b43legacy_phy phy; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_5__ {TYPE_1__ boardinfo; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int) ;
 int FUNC_4 (struct b43legacy_wldev*) ;
 int FUNC_5 (struct b43legacy_wldev*,int) ;
 int FUNC_6 (struct b43legacy_wldev*,int,int,int) ;
 int FUNC_7 (struct b43legacy_wldev*,int,int) ;
 int FUNC_8 (struct b43legacy_wldev*,int) ;
 int FUNC_9 (struct b43legacy_wldev*,int,int) ;
 scalar_t__ FUNC_10 (struct b43legacy_wldev*) ;

__attribute__((used)) static void FUNC_11(struct b43legacy_wldev *VAR_3)
{
 struct b43legacy_phy *VAR_4 = &VAR_3->phy;
 u16 VAR_5 = 0;
 u16 VAR_6 = 0;
 u16 VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_0(!(VAR_4->type == VAR_0 ||
     VAR_4->type == VAR_1));
 if (FUNC_10(VAR_3) &&
     (VAR_3->dev->bus->boardinfo.type == 0x0416))
  return;

 FUNC_3(VAR_3, 0x0028, 0x8018);
 FUNC_9(VAR_3, 0x03E6, FUNC_8(VAR_3, 0x03E6) & 0xFFDF);

 if (VAR_4->type == VAR_1) {
  if (!VAR_4->gmode)
   return;
  FUNC_3(VAR_3, 0x047A, 0xC111);
 }
 if (VAR_4->savedpctlreg != 0xFFFF)
  return;





 if (VAR_4->type == VAR_0 &&
     VAR_4->rev >= 2 &&
     VAR_4->radio_ver == 0x2050)
  FUNC_7(VAR_3, 0x0076,
     FUNC_5(VAR_3, 0x0076)
     | 0x0084);
 else {
  VAR_5 = VAR_4->bbatt;
  VAR_6 = VAR_4->rfatt;
  VAR_7 = VAR_4->txctl1;
  if ((VAR_4->radio_rev >= 6) && (VAR_4->radio_rev <= 8)
      && 0)
   FUNC_6(VAR_3, 0xB, 0x1F, 0);
  else
   FUNC_6(VAR_3, 0xB, 9, 0);
  VAR_8 = 1;
 }
 FUNC_1(VAR_3);

 VAR_4->savedpctlreg = FUNC_2(VAR_3, VAR_2);

 if (VAR_8)
  FUNC_6(VAR_3, VAR_5, VAR_6,
            VAR_7);
 else
  FUNC_7(VAR_3, 0x0076, FUNC_5(VAR_3,
     0x0076) & 0xFF7B);
 FUNC_4(VAR_3);
}
