
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_rx_status {int flag; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct ath10k*,struct ieee80211_rx_status*,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;
 scalar_t__ FUNC_3 (struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_4(struct ath10k *VAR_2,
        struct sk_buff_head *VAR_3,
        struct ieee80211_rx_status *VAR_4)
{
 struct sk_buff *VAR_5;
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_2(VAR_3);

 while ((VAR_5 = FUNC_0(VAR_3))) {

  if (FUNC_3(VAR_3))
   VAR_4->flag &= ~VAR_1;
  else
   VAR_4->flag |= VAR_1;

  if (VAR_5 == VAR_6) {
   VAR_6 = ((void*)0);
   VAR_4->flag &= ~VAR_0;
  } else {
   VAR_4->flag |= VAR_0;
  }

  FUNC_1(VAR_2, VAR_4, VAR_5);
 }
}
