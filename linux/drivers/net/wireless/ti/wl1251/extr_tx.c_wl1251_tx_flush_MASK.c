
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {struct sk_buff** tx_frames; int hw; int tx_queue; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,struct sk_buff*) ;

void FUNC_4(struct wl1251 *VAR_3)
{
 int VAR_4;
 struct sk_buff *VAR_5;
 struct ieee80211_tx_info *VAR_6;




 while ((VAR_5 = FUNC_2(&VAR_3->tx_queue))) {
  VAR_6 = FUNC_0(VAR_5);

  FUNC_3(VAR_0, "flushing skb 0x%p", VAR_5);

  if (!(VAR_6->flags & VAR_2))
    continue;

  FUNC_1(VAR_3->hw, VAR_5);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_3->tx_frames[VAR_4] != ((void*)0)) {
   VAR_5 = VAR_3->tx_frames[VAR_4];
   VAR_6 = FUNC_0(VAR_5);

   if (!(VAR_6->flags & VAR_2))
    continue;

   FUNC_1(VAR_3->hw, VAR_5);
   VAR_3->tx_frames[VAR_4] = ((void*)0);
  }
}
