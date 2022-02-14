
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_vif {int mac_addr; } ;
struct rtw_dev {int mutex; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtw_dev*,int ) ;
 int FUNC_4 (struct rtw_dev*,int ) ;
 int FUNC_5 (struct rtw_dev*,struct rtw_vif*) ;
 int FUNC_6 (struct rtw_dev*,struct rtw_vif*,int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_4,
      struct ieee80211_vif *VAR_5,
      const u8 *VAR_6)
{
 struct rtw_dev *VAR_7 = VAR_4->priv;
 struct rtw_vif *VAR_8 = (struct rtw_vif *)VAR_5->drv_priv;
 u32 VAR_9 = 0;

 FUNC_5(VAR_7, VAR_8);

 FUNC_1(&VAR_7->mutex);

 FUNC_0(VAR_8->mac_addr, VAR_6);
 VAR_9 |= VAR_1;
 FUNC_6(VAR_7, VAR_8, VAR_9);

 FUNC_3(VAR_7, VAR_0);

 FUNC_4(VAR_7, VAR_2);
 FUNC_4(VAR_7, VAR_3);

 FUNC_2(&VAR_7->mutex);
}
