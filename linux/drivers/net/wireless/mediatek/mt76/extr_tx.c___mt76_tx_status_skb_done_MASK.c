
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct mt76_tx_cb {int flags; } ;
struct mt76_dev {int status_list; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ status; } ;
struct TYPE_3__ {int idx; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *) ;
 int FUNC_3 (struct ieee80211_tx_info*) ;
 struct mt76_tx_cb* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_5(struct mt76_dev *VAR_4, struct sk_buff *VAR_5, u8 VAR_6,
     struct sk_buff_head *VAR_7)
{
 struct ieee80211_tx_info *VAR_8 = FUNC_0(VAR_5);
 struct mt76_tx_cb *VAR_9 = FUNC_4(VAR_5);
 u8 VAR_10 = VAR_1 | VAR_2;

 VAR_6 |= VAR_9->flags;
 VAR_9->flags = VAR_6;

 if ((VAR_6 & VAR_10) != VAR_10)
  return;

 FUNC_2(VAR_5, &VAR_4->status_list);


 if (VAR_6 & VAR_3) {
  FUNC_3(VAR_8);
  VAR_8->status.rates[0].idx = -1;
  VAR_8->flags |= VAR_0;
 }

 FUNC_1(VAR_7, VAR_5);
}
