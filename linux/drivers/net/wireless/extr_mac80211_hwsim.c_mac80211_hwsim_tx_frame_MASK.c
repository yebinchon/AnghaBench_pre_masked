
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct mac80211_hwsim_data {int wmediumd; } ;
struct TYPE_2__ {int rates; int vif; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_hw {struct mac80211_hwsim_data* priv; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (int ) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int *,struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct ieee80211_hw*,int ) ;
 int FUNC_6 (struct ieee80211_hw*,struct sk_buff*,struct ieee80211_channel*) ;
 void FUNC_7 (struct ieee80211_hw*,struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct ieee80211_hw*,struct sk_buff*,struct ieee80211_channel*) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_1,
        struct sk_buff *VAR_2,
        struct ieee80211_channel *VAR_3)
{
 struct mac80211_hwsim_data *VAR_4 = VAR_1->priv;
 u32 VAR_5 = FUNC_2(VAR_4->wmediumd);

 if (FUNC_5(VAR_1, VAR_0)) {
  struct ieee80211_tx_info *VAR_6 = FUNC_1(VAR_2);
  FUNC_4(VAR_6->control.vif, ((void*)0), VAR_2,
           VAR_6->control.rates,
           FUNC_0(VAR_6->control.rates));
 }

 FUNC_6(VAR_1, VAR_2, VAR_3);

 if (VAR_5)
  return FUNC_7(VAR_1, VAR_2, VAR_5);

 FUNC_8(VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_2);
}
