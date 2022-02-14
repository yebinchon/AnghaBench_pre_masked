
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_sta {int wcid; } ;
struct rt2x00_dev {struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {struct ieee80211_sta** wcid_to_sta; int sta_ids; int * ampdu_factor_cnt; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {int ampdu_factor; scalar_t__ ht_supported; } ;
struct ieee80211_sta {int addr; TYPE_1__ ht_cap; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int) ;
 int FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (struct rt2x00_dev*,struct ieee80211_vif*) ;
 struct rt2x00_sta* FUNC_7 (struct ieee80211_sta*) ;

int FUNC_8(struct ieee80211_hw *VAR_3, struct ieee80211_vif *VAR_4,
     struct ieee80211_sta *VAR_5)
{
 struct rt2x00_dev *VAR_6 = VAR_3->priv;
 struct rt2800_drv_data *VAR_7 = VAR_6->drv_data;
 struct rt2x00_sta *VAR_8 = FUNC_7(VAR_5);
 int VAR_9;







 if (VAR_5->ht_cap.ht_supported) {
  VAR_7->ampdu_factor_cnt[VAR_5->ht_cap.ampdu_factor & 3]++;
  FUNC_5(VAR_6);
 }





 VAR_9 = FUNC_1(VAR_7->sta_ids, VAR_0) + VAR_2;





 VAR_8->wcid = VAR_9;





 if (VAR_9 > VAR_1)
  return 0;

 FUNC_0(VAR_9 - VAR_2, VAR_7->sta_ids);
 VAR_7->wcid_to_sta[VAR_9 - VAR_2] = VAR_5;




 FUNC_4(VAR_6, VAR_9);
 FUNC_2(VAR_6, VAR_5->addr, VAR_9);
 FUNC_3(VAR_6, VAR_9,
           FUNC_6(VAR_6, VAR_4));
 return 0;
}
