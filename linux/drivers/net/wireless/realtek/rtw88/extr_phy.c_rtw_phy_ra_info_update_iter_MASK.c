
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_sta_info {int dummy; } ;
struct rtw_dev {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;


 int FUNC_0 (struct rtw_dev*,struct rtw_sta_info*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct ieee80211_sta *VAR_1)
{
 struct rtw_dev *VAR_2 = VAR_0;
 struct rtw_sta_info *VAR_3 = (struct rtw_sta_info *)VAR_1->drv_priv;

 FUNC_0(VAR_2, VAR_3);
}
