
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {struct ieee80211_sta** status_driver_data; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ status; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_hw*,struct ieee80211_sta*,struct ieee80211_tx_info*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_2, struct sk_buff *VAR_3)
{
 struct ieee80211_tx_info *VAR_4 = FUNC_0(VAR_3);
 struct ieee80211_sta *VAR_5 = VAR_4->status.status_driver_data[0];

 if (VAR_4->flags & (VAR_0 |
      VAR_1)) {
  FUNC_2(VAR_2, VAR_3);
  return;
 }

 if (VAR_5)
  FUNC_3(VAR_2, VAR_5, VAR_4);

 FUNC_1(VAR_3);
}
