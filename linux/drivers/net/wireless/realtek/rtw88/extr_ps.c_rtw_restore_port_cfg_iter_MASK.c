
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_vif {int dummy; } ;
struct rtw_dev {int dummy; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;


 int FUNC_0 (struct rtw_dev*,struct rtw_vif*,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u8 *VAR_1,
          struct ieee80211_vif *VAR_2)
{
 struct rtw_dev *VAR_3 = VAR_0;
 struct rtw_vif *VAR_4 = (struct rtw_vif *)VAR_2->drv_priv;
 u32 VAR_5 = ~0;

 FUNC_0(VAR_3, VAR_4, VAR_5);
}
