
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt76x02_dev {int dummy; } ;
typedef int s8 ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mt76x02_dev*,int ) ;
 int FUNC_1 (int) ;

void FUNC_2(struct mt76x02_dev *VAR_6, enum nl80211_band VAR_7,
    u16 *VAR_8, s8 *VAR_9, s8 *VAR_10)
{
 u16 VAR_11;

 VAR_11 = FUNC_0(VAR_6, VAR_0);
 *VAR_9 = VAR_11 & 0xff;
 VAR_10[0] = VAR_11 >> 8;

 VAR_11 = FUNC_0(VAR_6, VAR_2);
 VAR_10[1] = VAR_11 >> 8;

 VAR_11 = FUNC_0(VAR_6, VAR_4);
 VAR_10[2] = VAR_11 >> 8;

 if (!FUNC_1(VAR_10[1]))
  VAR_10[1] = VAR_10[0];

 if (!FUNC_1(VAR_10[2]))
  VAR_10[2] = VAR_10[0];

 if (VAR_7 == VAR_5)
  *VAR_8 = FUNC_0(VAR_6, VAR_1);
 else
  *VAR_8 = FUNC_0(VAR_6, VAR_3);
}
