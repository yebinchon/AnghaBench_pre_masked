
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mt7601u_dev {int mac_lock; int hw; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ status; } ;
struct TYPE_3__ {int idx; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_tx_info*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct ieee80211_tx_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mt7601u_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct ieee80211_tx_info *VAR_3 = FUNC_0(VAR_2);

 FUNC_3(VAR_2, VAR_3);

 FUNC_1(VAR_3);
 VAR_3->status.rates[0].idx = -1;
 VAR_3->flags |= VAR_0;

 FUNC_4(&VAR_1->mac_lock);
 FUNC_2(VAR_1->hw, VAR_2);
 FUNC_5(&VAR_1->mac_lock);
}
