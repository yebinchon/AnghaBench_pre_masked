
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tx_ts_record {int tx_cur_seq; } ;
struct ts_common_info {int dummy; } ;
struct sk_buff {int priority; int data; } ;
struct ieee80211_device {int dummy; } ;


 int FUNC_0 (struct ieee80211_device*,struct ts_common_info**,int *,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_device *VAR_1,
       struct sk_buff *VAR_2, u8 *VAR_3)
{
 if (FUNC_2(VAR_3))
  return;
 if (FUNC_1(VAR_2->data)) {
  struct tx_ts_record *VAR_4 = ((void*)0);
  if (!FUNC_0(VAR_1, (struct ts_common_info **)(&VAR_4), VAR_3, VAR_2->priority, VAR_0, 1)) {
   return;
  }
  VAR_4->tx_cur_seq = (VAR_4->tx_cur_seq + 1) % 4096;
 }
}
