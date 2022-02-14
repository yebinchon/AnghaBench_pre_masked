
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {int rates; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_sta {int dummy; } ;
struct ar9170 {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ieee80211_vif*,struct ieee80211_sta*,struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ar9170 *VAR_3,
      struct ieee80211_vif *VAR_4,
      struct ieee80211_sta *VAR_5,
      struct sk_buff *VAR_6)
{
 struct ieee80211_tx_info *VAR_7;

 FUNC_0(VAR_1 < VAR_0);
 FUNC_0(VAR_1 > VAR_2);

 VAR_7 = FUNC_1(VAR_6);

 FUNC_2(VAR_4, VAR_5, VAR_6,
          VAR_7->control.rates,
          VAR_1);
}
