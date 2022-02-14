
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; } ;
struct ieee80211_tx_rate {int flags; } ;
struct TYPE_2__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ar9170 {int dummy; } ;


 int VAR_0 ;
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
 unsigned int VAR_12 ;
 int VAR_13 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct ar9170*,struct ieee80211_tx_info*,struct ieee80211_tx_rate*,int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static bool FUNC_3(struct ar9170 *VAR_18, struct sk_buff *VAR_19,
          u32 *VAR_20, u32 *VAR_21)
{
 struct ieee80211_tx_info *VAR_22;
 struct ieee80211_tx_rate *VAR_23;
 unsigned int VAR_24, VAR_25;
 bool VAR_26;

 VAR_22 = FUNC_0(VAR_19);
 VAR_23 = &VAR_22->control.rates[0];
 VAR_26 = !!(VAR_22->control.rates[0].flags & VAR_16);
 FUNC_2(VAR_18, VAR_22, VAR_23, VAR_21, &VAR_24, &VAR_25);

 *VAR_20 = VAR_6;
 if (VAR_25 == VAR_12)
  *VAR_20 |= VAR_7;
 FUNC_1(VAR_4, *VAR_20, 7);
 FUNC_1(VAR_5, *VAR_20, VAR_24);
 FUNC_1(VAR_2, *VAR_20, VAR_25);

 if (VAR_26) {
  *VAR_20 |= VAR_3;
  if (VAR_23->flags & VAR_17)
   *VAR_21 |= VAR_10;

  if (VAR_23->flags & VAR_14) {
   *VAR_20 |= VAR_1;
   *VAR_21 |= VAR_8;
  } else if (VAR_23->flags & VAR_15) {
   *VAR_20 |= VAR_0;
   *VAR_21 |= VAR_8;
  }

  FUNC_1(VAR_9, *VAR_21, VAR_19->len + VAR_13);
 } else {
  if (*VAR_21 <= VAR_11)
   *VAR_21 |= ((VAR_19->len + VAR_13) << (3 + 16)) + 0x0400;
  else
   *VAR_21 |= ((VAR_19->len + VAR_13) << 16) + 0x0010;
 }

 return VAR_26;
}
