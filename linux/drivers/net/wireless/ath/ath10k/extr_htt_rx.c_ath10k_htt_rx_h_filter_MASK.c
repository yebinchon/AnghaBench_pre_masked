
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct sk_buff_head*) ;
 scalar_t__ FUNC_1 (struct ath10k*,struct sk_buff_head*,struct ieee80211_rx_status*) ;
 scalar_t__ FUNC_2 (struct sk_buff_head*) ;
 scalar_t__ FUNC_3 (struct sk_buff_head*) ;

__attribute__((used)) static void FUNC_4(struct ath10k *VAR_0,
       struct sk_buff_head *VAR_1,
       struct ieee80211_rx_status *VAR_2,
       unsigned long *VAR_3)
{
 if (FUNC_2(VAR_1))
  return;

 if (FUNC_1(VAR_0, VAR_1, VAR_2))
  return;

 if (VAR_3)
  *VAR_3 += FUNC_3(VAR_1);

 FUNC_0(VAR_1);
}
