
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_vif {int mac_addr; } ;
struct rtw_dev {int mutex; } ;
struct ieee80211_vif {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtw_dev*,int ) ;
 int FUNC_4 (struct rtw_dev*,int ) ;
 int FUNC_5 (struct rtw_dev*,struct rtw_vif*,int ) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_4,
         struct ieee80211_vif *VAR_5)
{
 struct rtw_dev *VAR_6 = VAR_4->priv;
 struct rtw_vif *VAR_7 = (struct rtw_vif *)VAR_5->drv_priv;
 u32 VAR_8 = 0;

 FUNC_1(&VAR_6->mutex);

 FUNC_4(VAR_6, VAR_3);
 FUNC_4(VAR_6, VAR_2);

 FUNC_0(VAR_7->mac_addr, VAR_5->addr);
 VAR_8 |= VAR_1;
 FUNC_5(VAR_6, VAR_7, VAR_8);

 FUNC_3(VAR_6, VAR_0);

 FUNC_2(&VAR_6->mutex);
}
