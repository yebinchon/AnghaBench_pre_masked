
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ar9170 {int tx_ack_failures; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ar9170*,struct sk_buff*) ;
 int FUNC_2 (struct ar9170*,struct sk_buff*,struct ieee80211_tx_info*) ;
 int FUNC_3 (struct ar9170*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct ar9170*,struct sk_buff*,struct ieee80211_tx_info*) ;

void FUNC_6(struct ar9170 *VAR_2, struct sk_buff *VAR_3,
   const bool VAR_4)
{
 struct ieee80211_tx_info *VAR_5;

 FUNC_1(VAR_2, VAR_3);

 VAR_5 = FUNC_0(VAR_3);

 FUNC_2(VAR_2, VAR_3, VAR_5);

 if (VAR_4)
  VAR_5->flags |= VAR_1;
 else
  VAR_2->tx_ack_failures++;

 if (VAR_5->flags & VAR_0)
  FUNC_5(VAR_2, VAR_3, VAR_5);

 FUNC_3(VAR_2, VAR_3);
 FUNC_4(VAR_3);
}
