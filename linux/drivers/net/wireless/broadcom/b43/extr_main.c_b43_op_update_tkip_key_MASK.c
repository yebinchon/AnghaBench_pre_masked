
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int * addr; } ;
struct ieee80211_key_conf {int hw_key_idx; } ;
struct ieee80211_hw {int dummy; } ;
struct b43_wldev {int dummy; } ;
struct b43_wl {struct b43_wldev* current_dev; int mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct b43_wldev*) ;
 struct b43_wl* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct b43_wldev*,int,int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct b43_wldev*,int,int ,int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_2,
       struct ieee80211_vif *VAR_3,
       struct ieee80211_key_conf *VAR_4,
       struct ieee80211_sta *VAR_5,
       u32 VAR_6, u16 *VAR_7)
{
 struct b43_wl *VAR_8 = FUNC_3(VAR_2);
 struct b43_wldev *VAR_9;
 int VAR_10 = VAR_4->hw_key_idx;

 if (FUNC_0(!VAR_1))
  return;



 FUNC_0(!FUNC_5(&VAR_8->mutex));
 VAR_9 = VAR_8->current_dev;
 FUNC_0(!VAR_9 || FUNC_2(VAR_9) < VAR_0);

 FUNC_4(VAR_9, VAR_10, ((void*)0));

 FUNC_6(VAR_9, VAR_10, VAR_6, VAR_7);

 if (FUNC_1(!VAR_5))
  return;
 FUNC_4(VAR_9, VAR_10, VAR_5->addr);
}
