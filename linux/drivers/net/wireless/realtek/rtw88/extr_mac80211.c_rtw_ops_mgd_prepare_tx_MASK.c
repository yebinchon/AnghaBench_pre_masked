
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtw_dev {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtw_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_1,
       struct ieee80211_vif *VAR_2,
       u16 VAR_3)
{
 struct rtw_dev *VAR_4 = VAR_1->priv;

 FUNC_0(&VAR_4->mutex);
 FUNC_2(VAR_4, VAR_0);
 FUNC_1(&VAR_4->mutex);
}
