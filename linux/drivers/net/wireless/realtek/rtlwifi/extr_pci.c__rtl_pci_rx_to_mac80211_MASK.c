
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; int data; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef int rx_status ;


 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,struct ieee80211_rx_status*,int) ;
 int FUNC_6 (struct ieee80211_hw*,struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_0,
        struct sk_buff *VAR_1,
        struct ieee80211_rx_status VAR_2)
{
 if (FUNC_8(!FUNC_6(VAR_0, VAR_1, 0))) {
  FUNC_2(VAR_1);
 } else {
  struct sk_buff *VAR_3 = ((void*)0);

  VAR_3 = FUNC_1(VAR_1->len + 128);
  if (FUNC_4(VAR_3)) {
   FUNC_5(FUNC_0(VAR_3), &VAR_2,
          sizeof(VAR_2));
   FUNC_7(VAR_3, VAR_1->data, VAR_1->len);
   FUNC_2(VAR_1);
   FUNC_3(VAR_0, VAR_3);
  } else {
   FUNC_3(VAR_0, VAR_1);
  }
 }
}
