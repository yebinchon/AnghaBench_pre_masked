
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int mac80211_registered; int hw; int mac_addr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct wl1251 *VAR_0)
{
 int VAR_1;

 if (VAR_0->mac80211_registered)
  return 0;

 FUNC_0(VAR_0->hw, VAR_0->mac_addr);

 VAR_1 = FUNC_1(VAR_0->hw);
 if (VAR_1 < 0) {
  FUNC_2("unable to register mac80211 hw: %d", VAR_1);
  return VAR_1;
 }

 VAR_0->mac80211_registered = 1;

 FUNC_3("loaded");

 return 0;
}
