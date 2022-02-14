
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_dev {struct rtw_chip_info* chip; } ;
struct rtw_chip_info {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtw_chip_info*) ;

void FUNC_2(struct rtw_dev *VAR_0, struct ieee80211_hw *VAR_1)
{
 struct rtw_chip_info *VAR_2 = VAR_0->chip;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_2);
}
