
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_sta {int wcid; } ;
struct rt2x00_dev {struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int sta_ids; int ** wcid_to_sta; int * ampdu_factor_cnt; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {int ampdu_factor; scalar_t__ ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int *,int) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 struct rt2x00_sta* FUNC_3 (struct ieee80211_sta*) ;

int FUNC_4(struct ieee80211_hw *VAR_2, struct ieee80211_vif *VAR_3,
        struct ieee80211_sta *VAR_4)
{
 struct rt2x00_dev *VAR_5 = VAR_2->priv;
 struct rt2800_drv_data *VAR_6 = VAR_5->drv_data;
 struct rt2x00_sta *VAR_7 = FUNC_3(VAR_4);
 int VAR_8 = VAR_7->wcid;

 if (VAR_4->ht_cap.ht_supported) {
  VAR_6->ampdu_factor_cnt[VAR_4->ht_cap.ampdu_factor & 3]--;
  FUNC_2(VAR_5);
 }

 if (VAR_8 > VAR_0)
  return 0;




 FUNC_1(VAR_5, ((void*)0), VAR_8);
 VAR_6->wcid_to_sta[VAR_8 - VAR_1] = ((void*)0);
 FUNC_0(VAR_8 - VAR_1, VAR_6->sta_ids);

 return 0;
}
