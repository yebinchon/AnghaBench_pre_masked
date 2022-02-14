
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct b43_phy {scalar_t__ type; int radio_ver; scalar_t__ analog; int radio_rev; int gmode; struct b43_phy_g* g; } ;
struct b43_wldev {int wl; TYPE_1__* dev; struct b43_phy phy; } ;
struct b43_rfatt {int att; int with_padmix; } ;
struct b43_phy_g {scalar_t__ cur_idle_tssi; scalar_t__ tgt_idle_tssi; scalar_t__ tx_control; int bbatt; int rfatt; } ;
struct b43_bbatt {int att; int with_padmix; } ;
typedef int old_rfatt ;
typedef int old_bbatt ;
struct TYPE_2__ {scalar_t__ board_vendor; scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 scalar_t__ FUNC_5 (struct b43_wldev*,int ) ;
 int FUNC_6 (struct b43_wldev*,int,int) ;
 int FUNC_7 (struct b43_wldev*,int,int) ;
 int FUNC_8 (struct b43_wldev*,int,int,int) ;
 int FUNC_9 (struct b43_wldev*,int ) ;
 int FUNC_10 (struct b43_wldev*,struct b43_rfatt*,struct b43_rfatt*,scalar_t__) ;
 int FUNC_11 (struct b43_wldev*) ;
 int FUNC_12 (struct b43_wldev*,int ,int) ;
 int FUNC_13 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct b43_rfatt*,int *,int) ;

__attribute__((used)) static void FUNC_15(struct b43_wldev *VAR_6)
{
 struct b43_phy *VAR_7 = &VAR_6->phy;
 struct b43_phy_g *VAR_8 = VAR_7->g;
 struct b43_rfatt VAR_9;
 struct b43_bbatt VAR_10;
 u8 VAR_11 = 0;

 FUNC_0(VAR_7->type != VAR_2);

 if ((VAR_6->dev->board_vendor == VAR_4) &&
     (VAR_6->dev->board_type == VAR_5))
  return;

 FUNC_6(VAR_6, 0x0028, 0x8018);


 FUNC_12(VAR_6, VAR_1, FUNC_9(VAR_6, VAR_1)
      & 0xFFDF);

 if (!VAR_7->gmode)
  return;
 FUNC_3(VAR_6);
 if (VAR_8->cur_idle_tssi == 0) {
  if (VAR_7->radio_ver == 0x2050 && VAR_7->analog == 0) {
   FUNC_8(VAR_6, 0x0076, 0x00F7, 0x0084);
  } else {
   struct b43_rfatt VAR_12;
   struct b43_bbatt VAR_13;

   FUNC_14(&VAR_9, &VAR_8->rfatt, sizeof(VAR_9));
   FUNC_14(&VAR_10, &VAR_8->bbatt, sizeof(VAR_10));
   VAR_11 = VAR_8->tx_control;

   VAR_13.att = 11;
   if (VAR_7->radio_rev == 8) {
    VAR_12.att = 15;
    VAR_12.with_padmix = 1;
   } else {
    VAR_12.att = 9;
    VAR_12.with_padmix = 0;
   }
   FUNC_10(VAR_6, &VAR_13, &VAR_12, 0);
  }
  FUNC_2(VAR_6, 0, 1);
  VAR_8->cur_idle_tssi = FUNC_5(VAR_6, VAR_3);
  if (VAR_0) {

   if (FUNC_1(VAR_8->cur_idle_tssi - VAR_8->tgt_idle_tssi) >= 20) {
    FUNC_13(VAR_6->wl,
           "!WARNING! Idle-TSSI phy->cur_idle_tssi "
           "measuring failed. (cur=%d, tgt=%d). Disabling TX power "
           "adjustment.\n", VAR_8->cur_idle_tssi,
           VAR_8->tgt_idle_tssi);
    VAR_8->cur_idle_tssi = 0;
   }
  }
  if (VAR_7->radio_ver == 0x2050 && VAR_7->analog == 0) {
   FUNC_7(VAR_6, 0x0076, 0xFF7B);
  } else {
   FUNC_10(VAR_6, &VAR_10,
       &VAR_9, VAR_11);
  }
 }
 FUNC_4(VAR_6);
 FUNC_11(VAR_6);
}
