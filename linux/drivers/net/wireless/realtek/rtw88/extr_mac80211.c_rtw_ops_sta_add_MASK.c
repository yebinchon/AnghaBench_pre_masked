
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_sta_info {scalar_t__ mac_id; int init_ra_lv; int avg_rssi; struct ieee80211_vif* vif; struct ieee80211_sta* sta; } ;
struct rtw_dev {int mutex; int sta_cnt; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct rtw_dev*) ;
 int FUNC_4 (struct rtw_dev*,scalar_t__,int) ;
 int FUNC_5 (struct rtw_dev*,char*,int ,scalar_t__) ;
 int FUNC_6 (struct rtw_dev*,struct rtw_sta_info*) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_2,
      struct ieee80211_vif *VAR_3,
      struct ieee80211_sta *VAR_4)
{
 struct rtw_dev *VAR_5 = VAR_2->priv;
 struct rtw_sta_info *VAR_6 = (struct rtw_sta_info *)VAR_4->drv_priv;
 int VAR_7 = 0;

 FUNC_1(&VAR_5->mutex);

 VAR_6->mac_id = FUNC_3(VAR_5);
 if (VAR_6->mac_id >= VAR_1) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_6->sta = VAR_4;
 VAR_6->vif = VAR_3;
 VAR_6->init_ra_lv = 1;
 FUNC_0(&VAR_6->avg_rssi);

 FUNC_6(VAR_5, VAR_6);
 FUNC_4(VAR_5, VAR_6->mac_id, 1);

 VAR_5->sta_cnt++;

 FUNC_5(VAR_5, "sta %pM joined with macid %d\n",
   VAR_4->addr, VAR_6->mac_id);

out:
 FUNC_2(&VAR_5->mutex);
 return VAR_7;
}
