
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct rtl_usb {int tx_submitted; int * tx_pending; int (* usb_tx_cleanup ) (struct ieee80211_hw*,struct sk_buff*) ;int * tx_skb_queue; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_tx_info*) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 struct rtl_usb* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_2)
{
 u32 VAR_3;
 struct sk_buff *VAR_4;
 struct rtl_usb *VAR_5 = FUNC_4(FUNC_5(VAR_2));
 struct ieee80211_tx_info *VAR_6;


 FUNC_1(VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  while ((VAR_4 = FUNC_6(&VAR_5->tx_skb_queue[VAR_3]))) {
   VAR_5->usb_tx_cleanup(VAR_2, VAR_4);
   VAR_6 = FUNC_0(VAR_4);
   FUNC_2(VAR_6);
   VAR_6->flags |= VAR_0;
   FUNC_3(VAR_2, VAR_4);
  }
  FUNC_8(&VAR_5->tx_pending[VAR_3]);
 }
 FUNC_8(&VAR_5->tx_submitted);
}
