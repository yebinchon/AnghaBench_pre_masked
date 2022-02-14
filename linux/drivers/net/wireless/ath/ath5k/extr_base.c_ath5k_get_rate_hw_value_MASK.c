
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_rate {int hw_value; int hw_value_short; } ;
struct ieee80211_hw {int dummy; } ;
struct ath5k_buf {TYPE_1__* rates; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 struct ieee80211_rate* FUNC_0 (struct ieee80211_hw const*,struct ieee80211_tx_info const*,struct ath5k_buf*,int) ;

__attribute__((used)) static u16
FUNC_1(const struct ieee80211_hw *VAR_1,
   const struct ieee80211_tx_info *VAR_2,
   struct ath5k_buf *VAR_3, int VAR_4)
{
 struct ieee80211_rate *VAR_5;
 u16 VAR_6;
 u8 VAR_7;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return 0;

 VAR_7 = VAR_3->rates[VAR_4].flags;
 VAR_6 = (VAR_7 & VAR_0) ?
     VAR_5->hw_value_short : VAR_5->hw_value;

 return VAR_6;
}
