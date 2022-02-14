
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct zd_chip {int dummy; } ;
struct zd_mac {int flags; struct sk_buff_head ack_wait_queue; struct zd_chip chip; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct zd_mac*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct zd_mac*) ;
 struct sk_buff* FUNC_5 (struct sk_buff_head*) ;
 int FUNC_6 (struct zd_chip*) ;
 int FUNC_7 (struct zd_chip*) ;
 int FUNC_8 (struct zd_chip*) ;
 int FUNC_9 (struct zd_chip*) ;
 struct zd_mac* FUNC_10 (struct ieee80211_hw*) ;
 int VAR_1 ;

void FUNC_11(struct ieee80211_hw *VAR_2)
{
 struct zd_mac *VAR_3 = FUNC_10(VAR_2);
 struct zd_chip *VAR_4 = &VAR_3->chip;
 struct sk_buff *VAR_5;
 struct sk_buff_head *VAR_6 = &VAR_3->ack_wait_queue;

 FUNC_1(VAR_0, &VAR_3->flags);






 FUNC_8(VAR_4);
 FUNC_0(VAR_3);
 FUNC_4(VAR_3);
 FUNC_3(VAR_1);

 FUNC_6(VAR_4);
 FUNC_9(VAR_4);
 FUNC_7(VAR_4);


 while ((VAR_5 = FUNC_5(VAR_6)))
  FUNC_2(VAR_5);
}
