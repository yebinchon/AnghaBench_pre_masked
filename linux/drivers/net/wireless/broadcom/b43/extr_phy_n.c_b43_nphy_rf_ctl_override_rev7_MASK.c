
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nphy_rf_control_override_rev7 {int val_addr_core0; int val_addr_core1; int val_mask; int val_shift; } ;
struct b43_phy {int rev; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;


 int FUNC_0 (int**) ;
 int FUNC_1 (int) ;
 struct nphy_rf_control_override_rev7* FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_0, u16 VAR_1,
       u16 VAR_2, u8 VAR_3, bool VAR_4,
       u8 VAR_5)
{
 struct b43_phy *VAR_6 = &VAR_0->phy;
 const struct nphy_rf_control_override_rev7 *VAR_7;
 u16 VAR_8[3][2] = {
  { 0x0E7, 0x0EC }, { 0x342, 0x343 }, { 0x346, 0x347 }
 };
 u16 VAR_9;
 u16 VAR_10 = VAR_1;
 u16 VAR_11;
 u8 VAR_12;

 if (VAR_6->rev >= 19 || VAR_6->rev < 3) {
  FUNC_1(1);
  return;
 }


 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_5);

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  if (VAR_5 >= FUNC_0(VAR_8)) {
   FUNC_6(VAR_0->wl, "Invalid override value %d\n", VAR_5);
   return;
  }
  VAR_9 = VAR_8[VAR_5][VAR_12];

  if (VAR_7)
   VAR_11 = (VAR_12 == 0) ? VAR_7->val_addr_core0 : VAR_7->val_addr_core1;

  if (VAR_4) {
   FUNC_3(VAR_0, VAR_9, ~VAR_10);
   if (VAR_7)
    FUNC_3(VAR_0, VAR_11, ~VAR_7->val_mask);
  } else {
   if (!VAR_3 || (VAR_3 & (1 << VAR_12))) {
    FUNC_5(VAR_0, VAR_9, VAR_10);
    if (VAR_7)
     FUNC_4(VAR_0, VAR_11, ~VAR_7->val_mask, (VAR_2 << VAR_7->val_shift));
   }
  }
 }
}
