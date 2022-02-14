
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct nphy_rf_control_override_rev7 {scalar_t__ field; } ;
struct b43_wldev {int wl; } ;


 int FUNC_0 (struct nphy_rf_control_override_rev7*) ;
 int FUNC_1 (int ,char*,int) ;
 struct nphy_rf_control_override_rev7* VAR_0 ;
 struct nphy_rf_control_override_rev7* VAR_1 ;
 struct nphy_rf_control_override_rev7* VAR_2 ;

const struct nphy_rf_control_override_rev7 *FUNC_2(
 struct b43_wldev *VAR_3, u16 VAR_4, u8 VAR_5)
{
 const struct nphy_rf_control_override_rev7 *VAR_6;
 u8 VAR_7, VAR_8;

 switch (VAR_5) {
 case 0:
  VAR_6 = VAR_0;
  VAR_7 = FUNC_0(VAR_0);
  break;
 case 1:
  VAR_6 = VAR_1;
  VAR_7 = FUNC_0(VAR_1);
  break;
 case 2:
  VAR_6 = VAR_2;
  VAR_7 = FUNC_0(VAR_2);
  break;
 default:
  FUNC_1(VAR_3->wl, "Invalid override value %d\n", VAR_5);
  return ((void*)0);
 }

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_6[VAR_8].field == VAR_4)
   return &VAR_6[VAR_8];
 }

 return ((void*)0);
}
