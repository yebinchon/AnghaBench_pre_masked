
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nphy_rf_control_override_rev3 {int val_mask; int val_shift; int val_addr1; int val_addr0; int en_addr1; int en_addr0; } ;
struct nphy_rf_control_override_rev2 {int bmask; int shift; int addr1; int addr0; } ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int) ;
 struct nphy_rf_control_override_rev2* VAR_3 ;
 struct nphy_rf_control_override_rev3* VAR_4 ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct b43_wldev *VAR_5, u16 VAR_6,
         u16 VAR_7, u8 VAR_8, bool VAR_9)
{
 int VAR_10;
 u8 VAR_11 = FUNC_6(VAR_6);
 u8 VAR_12, VAR_13, VAR_14;

 FUNC_1(VAR_6 & (~(1 << (VAR_11 - 1))));

 if (VAR_5->phy.rev >= 3) {
  const struct nphy_rf_control_override_rev3 *VAR_15;
  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   if (VAR_11 == 0 || VAR_11 == 16) {
    FUNC_5(VAR_5->wl,
     "Unsupported RF Ctrl Override call\n");
    return;
   }

   VAR_15 = &VAR_4[VAR_11 - 1];
   VAR_13 = FUNC_0((VAR_10 == 0) ?
    VAR_15->en_addr0 : VAR_15->en_addr1);
   VAR_14 = FUNC_0((VAR_10 == 0) ?
    VAR_15->val_addr0 : VAR_15->val_addr1);

   if (VAR_9) {
    FUNC_2(VAR_5, VAR_13, ~(VAR_6));
    FUNC_2(VAR_5, VAR_14,
      ~(VAR_15->val_mask));
   } else {
    if (VAR_8 == 0 || ((1 << VAR_10) & VAR_8)) {
     FUNC_4(VAR_5, VAR_13, VAR_6);
     FUNC_3(VAR_5, VAR_14,
      ~(VAR_15->val_mask),
      (VAR_7 << VAR_15->val_shift));
    }
   }
  }
 } else {
  const struct nphy_rf_control_override_rev2 *VAR_16;
  if (VAR_9) {
   FUNC_2(VAR_5, VAR_2, ~(VAR_6));
   VAR_7 = 0;
  } else {
   FUNC_4(VAR_5, VAR_2, VAR_6);
  }

  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   if (VAR_11 <= 1 || VAR_11 == 16) {
    FUNC_5(VAR_5->wl,
     "Unsupported RF Ctrl Override call\n");
    return;
   }

   if (VAR_11 == 2 || VAR_11 == 10 ||
       (VAR_11 >= 13 && VAR_11 <= 15)) {
    VAR_8 = 1;
   }

   VAR_16 = &VAR_3[VAR_11 - 2];
   VAR_12 = FUNC_0((VAR_10 == 0) ?
    VAR_16->addr0 : VAR_16->addr1);

   if ((1 << VAR_10) & VAR_8)
    FUNC_3(VAR_5, VAR_12, ~(VAR_16->bmask),
      (VAR_7 << VAR_16->shift));

   FUNC_4(VAR_5, VAR_2, 0x1);
   FUNC_4(VAR_5, VAR_0,
     VAR_1);
   FUNC_7(1);
   FUNC_2(VAR_5, VAR_2, 0xFFFE);
  }
 }
}
