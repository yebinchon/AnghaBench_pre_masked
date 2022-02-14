
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct mt76_dev {int dummy; } ;
struct mt7615_sta {int wcid; } ;
struct mt7615_dev {struct mt76_dev mt76; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ status; } ;
typedef int __le32 ;
struct TYPE_3__ {int idx; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_tx_info*) ;
 int FUNC_2 (struct mt7615_dev*,struct mt7615_sta*,struct ieee80211_tx_info*,int *) ;
 int FUNC_3 (struct mt76_dev*,struct sk_buff_head*) ;
 int FUNC_4 (struct mt76_dev*,struct sk_buff*,struct sk_buff_head*) ;
 struct sk_buff* FUNC_5 (struct mt76_dev*,int *,int,struct sk_buff_head*) ;
 int FUNC_6 (struct mt76_dev*,struct sk_buff_head*) ;

__attribute__((used)) static bool FUNC_7(struct mt7615_dev *VAR_1,
       struct mt7615_sta *VAR_2, int VAR_3,
       __le32 *VAR_4)
{
 struct mt76_dev *VAR_5 = &VAR_1->mt76;
 struct sk_buff_head VAR_6;
 struct sk_buff *VAR_7;

 if (VAR_3 < VAR_0)
  return 0;

 FUNC_3(VAR_5, &VAR_6);
 VAR_7 = FUNC_5(VAR_5, &VAR_2->wcid, VAR_3, &VAR_6);
 if (VAR_7) {
  struct ieee80211_tx_info *VAR_8 = FUNC_0(VAR_7);

  if (!FUNC_2(VAR_1, VAR_2, VAR_8, VAR_4)) {
   FUNC_1(VAR_8);
   VAR_8->status.rates[0].idx = -1;
  }

  FUNC_4(VAR_5, VAR_7, &VAR_6);
 }
 FUNC_6(VAR_5, &VAR_6);

 return !!VAR_7;
}
