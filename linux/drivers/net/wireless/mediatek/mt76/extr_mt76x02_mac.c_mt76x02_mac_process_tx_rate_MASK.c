
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_tx_rate {int idx; int count; int flags; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_1(struct ieee80211_tx_rate *VAR_12, u16 VAR_13,
       enum nl80211_band VAR_14)
{
 u8 VAR_15 = FUNC_0(VAR_8, VAR_13);

 VAR_12->idx = 0;
 VAR_12->flags = 0;
 VAR_12->count = 1;

 switch (FUNC_0(VAR_9, VAR_13)) {
 case 129:
  if (VAR_14 == VAR_11)
   VAR_15 += 4;

  VAR_12->idx = VAR_15;
  return 0;
 case 132:
  if (VAR_15 >= 8)
   VAR_15 -= 8;

  VAR_12->idx = VAR_15;
  return 0;
 case 130:
  VAR_12->flags |= VAR_3;

 case 131:
  VAR_12->flags |= VAR_4;
  VAR_12->idx = VAR_15;
  break;
 case 128:
  VAR_12->flags |= VAR_6;
  VAR_12->idx = VAR_15;
  break;
 default:
  return -VAR_0;
 }

 switch (FUNC_0(VAR_7, VAR_13)) {
 case 135:
  break;
 case 134:
  VAR_12->flags |= VAR_1;
  break;
 case 133:
  VAR_12->flags |= VAR_2;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_13 & VAR_10)
  VAR_12->flags |= VAR_5;

 return 0;
}
