
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
struct mt76_dev {int rx_lock; int hw; } ;
struct ieee80211_sta {int dummy; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct ieee80211_sta*,struct sk_buff*,struct napi_struct*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct ieee80211_sta* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct mt76_dev *VAR_0, struct sk_buff_head *VAR_1,
        struct napi_struct *VAR_2)
{
 struct ieee80211_sta *VAR_3;
 struct sk_buff *VAR_4;

 FUNC_5(&VAR_0->rx_lock);
 while ((VAR_4 = FUNC_0(VAR_1)) != ((void*)0)) {
  if (FUNC_3(VAR_4)) {
   FUNC_1(VAR_4);
   continue;
  }

  VAR_3 = FUNC_4(VAR_4);
  FUNC_2(VAR_0->hw, VAR_3, VAR_4, VAR_2);
 }
 FUNC_6(&VAR_0->rx_lock);
}
