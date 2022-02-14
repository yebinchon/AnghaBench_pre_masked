
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct b43_phy {int rev; int radio_rev; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_nphy_chantabent_rev7_2g {scalar_t__ freq; } ;
struct b43_nphy_chantabent_rev7 {scalar_t__ freq; } ;


 unsigned int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

void FUNC_2(struct b43_wldev *VAR_3, u16 VAR_4,
          const struct b43_nphy_chantabent_rev7 **VAR_5,
          const struct b43_nphy_chantabent_rev7_2g **VAR_6)
{
 struct b43_phy *VAR_7 = &VAR_3->phy;
 const struct b43_nphy_chantabent_rev7 *VAR_8 = ((void*)0);
 const struct b43_nphy_chantabent_rev7_2g *VAR_9 = ((void*)0);
 unsigned int VAR_10, VAR_11;

 *VAR_5 = ((void*)0);
 *VAR_6 = ((void*)0);

 switch (VAR_7->rev) {
 case 8:
  if (VAR_7->radio_rev == 5) {
   VAR_9 = VAR_2;
   VAR_10 = FUNC_0(VAR_2);
  }
  break;
 case 16:
  if (VAR_7->radio_rev == 9) {
   VAR_8 = VAR_0;
   VAR_10 = FUNC_0(VAR_0);
  }
  break;
 case 17:
  if (VAR_7->radio_rev == 14) {
   VAR_9 = VAR_1;
   VAR_10 = FUNC_0(VAR_1);
  }
  break;
 default:
  break;
 }

 if (VAR_8) {
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++, VAR_8++) {
   if (VAR_8->freq == VAR_4) {
    *VAR_5 = VAR_8;
    return;
   }
  }
 } else if (VAR_9) {
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++, VAR_9++) {
   if (VAR_9->freq == VAR_4) {
    *VAR_6 = VAR_9;
    return;
   }
  }
 } else {
  FUNC_1(1);
 }
}
