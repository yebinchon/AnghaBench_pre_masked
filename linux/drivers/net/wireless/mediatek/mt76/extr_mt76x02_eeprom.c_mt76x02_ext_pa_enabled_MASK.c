
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt76x02_dev {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;

bool FUNC_1(struct mt76x02_dev *VAR_4, enum nl80211_band VAR_5)
{
 u16 VAR_6 = FUNC_0(VAR_4, VAR_0);

 if (VAR_5 == VAR_3)
  return !(VAR_6 & VAR_2);
 else
  return !(VAR_6 & VAR_1);
}
