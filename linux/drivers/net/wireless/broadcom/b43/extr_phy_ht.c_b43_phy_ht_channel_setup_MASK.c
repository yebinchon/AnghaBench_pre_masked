
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {scalar_t__ band; int hw_value; } ;
struct b43_wldev {int dummy; } ;
struct b43_phy_ht_channeltab_e_phy {int bw1; int bw2; int bw3; int bw4; int bw5; int bw6; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct b43_wldev*,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int ) ;
 int FUNC_2 (struct b43_wldev*,struct ieee80211_channel*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_12,
    const struct b43_phy_ht_channeltab_e_phy *VAR_13,
    struct ieee80211_channel *VAR_14)
{
 if (VAR_14->band == VAR_11) {

  FUNC_4(VAR_12, VAR_0, ~VAR_1);

  FUNC_0(VAR_12, 1);


  FUNC_5(VAR_12, VAR_0, VAR_1);
 } else {

  FUNC_4(VAR_12, VAR_0, ~VAR_1);

  FUNC_0(VAR_12, 0);
 }

 FUNC_6(VAR_12, VAR_2, VAR_13->bw1);
 FUNC_6(VAR_12, VAR_3, VAR_13->bw2);
 FUNC_6(VAR_12, VAR_4, VAR_13->bw3);
 FUNC_6(VAR_12, VAR_5, VAR_13->bw4);
 FUNC_6(VAR_12, VAR_6, VAR_13->bw5);
 FUNC_6(VAR_12, VAR_7, VAR_13->bw6);

 if (VAR_14->hw_value == 14) {
  FUNC_1(VAR_12, VAR_8, 0);
  FUNC_5(VAR_12, VAR_9, 0x0800);
 } else {
  FUNC_1(VAR_12, VAR_8,
          VAR_8);
  if (VAR_14->band == VAR_10)
   FUNC_4(VAR_12, VAR_9, ~0x840);
 }

 if (1)
  FUNC_3(VAR_12);

 FUNC_2(VAR_12, VAR_14);

 FUNC_6(VAR_12, 0x017e, 0x3830);
}
