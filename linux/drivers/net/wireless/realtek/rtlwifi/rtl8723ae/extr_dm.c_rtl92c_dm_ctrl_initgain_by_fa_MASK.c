
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int cnt_all; } ;
struct dig_t {int cur_igvalue; } ;
struct rtl_priv {TYPE_1__ falsealm_cnt; struct dig_t dm_digtable; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_5);
 struct dig_t *VAR_7 = &VAR_6->dm_digtable;
 u8 VAR_8 = VAR_7->cur_igvalue;

 if (VAR_6->falsealm_cnt.cnt_all < VAR_1)
  VAR_8--;
 else if (VAR_6->falsealm_cnt.cnt_all < VAR_2)
  VAR_8 += 0;
 else if (VAR_6->falsealm_cnt.cnt_all < VAR_3)
  VAR_8++;
 else if (VAR_6->falsealm_cnt.cnt_all >= VAR_3)
  VAR_8 += 2;
 if (VAR_8 > VAR_4)
  VAR_8 = VAR_4;
 else if (VAR_8 < VAR_0)
  VAR_8 = VAR_0;
 if (VAR_6->falsealm_cnt.cnt_all > 10000)
  VAR_8 = 0x32;

 VAR_7->cur_igvalue = VAR_8;
 FUNC_0(VAR_5);
}
