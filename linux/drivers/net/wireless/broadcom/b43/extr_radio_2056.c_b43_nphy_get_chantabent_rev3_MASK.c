
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct b43_phy {int rev; int radio_rev; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_nphy_channeltab_entry_rev3 {scalar_t__ freq; } ;


 unsigned int FUNC_0 (struct b43_nphy_channeltab_entry_rev3*) ;
 int FUNC_1 (int) ;
 struct b43_nphy_channeltab_entry_rev3* VAR_0 ;
 struct b43_nphy_channeltab_entry_rev3* VAR_1 ;
 struct b43_nphy_channeltab_entry_rev3* VAR_2 ;
 struct b43_nphy_channeltab_entry_rev3* VAR_3 ;
 struct b43_nphy_channeltab_entry_rev3* VAR_4 ;
 struct b43_nphy_channeltab_entry_rev3* VAR_5 ;
 struct b43_nphy_channeltab_entry_rev3* VAR_6 ;

const struct b43_nphy_channeltab_entry_rev3 *
FUNC_2(struct b43_wldev *VAR_7, u16 VAR_8)
{
 struct b43_phy *VAR_9 = &VAR_7->phy;
 const struct b43_nphy_channeltab_entry_rev3 *VAR_10;
 unsigned int VAR_11, VAR_12;

 switch (VAR_9->rev) {
 case 3:
  VAR_10 = VAR_0;
  VAR_11 = FUNC_0(VAR_0);
  break;
 case 4:
  VAR_10 = VAR_1;
  VAR_11 = FUNC_0(VAR_1);
  break;
 default:
  switch (VAR_9->radio_rev) {
  case 5:
   VAR_10 = VAR_3;
   VAR_11 = FUNC_0(VAR_3);
   break;
  case 6:
   VAR_10 = VAR_4;
   VAR_11 = FUNC_0(VAR_4);
   break;
  case 7:
  case 9:
   VAR_10 = VAR_5;
   VAR_11 = FUNC_0(VAR_5);
   break;
  case 8:
   VAR_10 = VAR_6;
   VAR_11 = FUNC_0(VAR_6);
   break;
  case 11:
   VAR_10 = VAR_2;
   VAR_11 = FUNC_0(VAR_2);
   break;
  default:
   FUNC_1(1);
   return ((void*)0);
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++, VAR_10++) {
  if (VAR_10->freq == VAR_8)
   return VAR_10;
 }

 return ((void*)0);
}
