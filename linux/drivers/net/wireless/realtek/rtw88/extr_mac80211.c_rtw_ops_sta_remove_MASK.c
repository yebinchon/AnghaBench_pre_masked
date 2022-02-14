
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_sta_info {int mac_id; } ;
struct rtw_dev {int mutex; int sta_cnt; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtw_dev*,int ,int) ;
 int FUNC_3 (struct rtw_dev*,char*,int ,int ) ;
 int FUNC_4 (struct rtw_dev*,int ) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1,
         struct ieee80211_sta *VAR_2)
{
 struct rtw_dev *VAR_3 = VAR_0->priv;
 struct rtw_sta_info *VAR_4 = (struct rtw_sta_info *)VAR_2->drv_priv;

 FUNC_0(&VAR_3->mutex);

 FUNC_4(VAR_3, VAR_4->mac_id);
 FUNC_2(VAR_3, VAR_4->mac_id, 0);

 VAR_3->sta_cnt--;

 FUNC_3(VAR_3, "sta %pM with macid %d left\n",
   VAR_2->addr, VAR_4->mac_id);

 FUNC_1(&VAR_3->mutex);
 return 0;
}
