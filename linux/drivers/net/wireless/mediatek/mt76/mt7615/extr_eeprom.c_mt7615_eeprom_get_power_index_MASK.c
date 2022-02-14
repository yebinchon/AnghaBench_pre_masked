
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7615_dev {int dummy; } ;
struct ieee80211_channel {scalar_t__ band; int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct mt7615_dev*,scalar_t__) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct mt7615_dev *VAR_9,
      struct ieee80211_channel *VAR_10,
      u8 VAR_11)
{
 int VAR_12;

 if (VAR_11 > 3)
  return -VAR_0;


 if (FUNC_0(VAR_9, VAR_10->band)) {
  if (VAR_10->band == VAR_8)
   return VAR_1;
  else
   return VAR_2;
 }


 if (VAR_10->band == VAR_8) {
  VAR_12 = VAR_3 + VAR_11 * 6;
 } else {
  int VAR_13 = FUNC_1(VAR_10->hw_value);

  switch (VAR_11) {
  case 1:
   VAR_12 = VAR_5;
   break;
  case 2:
   VAR_12 = VAR_6;
   break;
  case 3:
   VAR_12 = VAR_7;
   break;
  case 0:
  default:
   VAR_12 = VAR_4;
   break;
  }
  VAR_12 += 5 * VAR_13;
 }

 return VAR_12;
}
