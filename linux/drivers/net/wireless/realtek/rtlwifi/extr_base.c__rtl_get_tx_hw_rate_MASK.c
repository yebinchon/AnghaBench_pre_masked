
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ current_bandtype; } ;
struct rtl_priv {TYPE_3__* cfg; TYPE_2__ rtlhal; } ;
struct ieee80211_tx_rate {int flags; int idx; } ;
struct TYPE_4__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {TYPE_1__ status; } ;
struct ieee80211_rate {int hw_value; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {int* maps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 struct ieee80211_rate* FUNC_0 (struct ieee80211_hw*,struct ieee80211_tx_info*) ;
 int FUNC_1 (struct ieee80211_tx_rate*) ;
 int FUNC_2 (struct ieee80211_tx_rate*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_4(struct ieee80211_hw *VAR_7,
         struct ieee80211_tx_info *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_3(VAR_7);
 struct ieee80211_tx_rate *VAR_10 = &VAR_8->status.rates[0];
 struct ieee80211_rate *VAR_11;
 u8 VAR_12 = 0x0;

 if (VAR_10->flags & VAR_1) {

  VAR_12 = VAR_9->cfg->maps[VAR_3] - 15 +
      VAR_10->idx;
 } else if (VAR_10->flags & VAR_2) {

  if (FUNC_2(VAR_10) == 2)
   VAR_12 = VAR_9->cfg->maps[VAR_6];
  else
   VAR_12 = VAR_9->cfg->maps[VAR_5];

  VAR_12 = VAR_12 - 9 + FUNC_1(VAR_10);
 } else {

  VAR_11 = FUNC_0(VAR_7, VAR_8);

  if (VAR_11)
   VAR_12 = VAR_11->hw_value;
 }


 if (VAR_9->rtlhal.current_bandtype == VAR_0 &&
     VAR_12 < VAR_9->cfg->maps[VAR_4])
  VAR_12 = VAR_9->cfg->maps[VAR_4];

 return VAR_12;
}
