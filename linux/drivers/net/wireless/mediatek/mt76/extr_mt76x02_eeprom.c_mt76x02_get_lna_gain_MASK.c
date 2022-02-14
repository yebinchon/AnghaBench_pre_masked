
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mt76x02_dev {int dummy; } ;
struct ieee80211_channel {scalar_t__ band; int hw_value; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct mt76x02_dev*,int ) ;

u8 FUNC_2(struct mt76x02_dev *VAR_4,
   s8 *VAR_5, s8 *VAR_6,
   struct ieee80211_channel *VAR_7)
{
 u16 VAR_8;
 u8 VAR_9;

 VAR_8 = FUNC_1(VAR_4, VAR_0);
 if (VAR_8 & VAR_1)
  *VAR_5 = 0;
 if (VAR_8 & VAR_2)
  FUNC_0(VAR_6, 0, sizeof(s8) * 3);

 if (VAR_7->band == VAR_3)
  VAR_9 = *VAR_5;
 else if (VAR_7->hw_value <= 64)
  VAR_9 = VAR_6[0];
 else if (VAR_7->hw_value <= 128)
  VAR_9 = VAR_6[1];
 else
  VAR_9 = VAR_6[2];

 return VAR_9 != 0xff ? VAR_9 : 0;
}
