
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct ieee80211_rx_status {int freq; } ;
struct ath10k {int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct ath10k *VAR_2,
     struct sk_buff_head *VAR_3,
     struct ieee80211_rx_status *VAR_4)
{




 if (!VAR_4->freq) {
  FUNC_0(VAR_2, VAR_1, "no channel configured; ignoring frame(s)!\n");
  return 0;
 }

 if (FUNC_1(VAR_0, &VAR_2->dev_flags)) {
  FUNC_0(VAR_2, VAR_1, "htt rx cac running\n");
  return 0;
 }

 return 1;
}
