
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {struct sk_buff* next; int len; scalar_t__ data; } ;
struct rsi_hw {int hw; } ;
struct rsi_common {int * tx_queue; int band; TYPE_1__* tx_qinfo; struct rsi_hw* priv; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_rate {int bitrate; } ;
struct ieee80211_hdr {int addr2; } ;
typedef int s16 ;
typedef int __le16 ;
struct TYPE_2__ {int txop; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct ieee80211_vif*,int ,int ,struct ieee80211_rate*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct ieee80211_vif* FUNC_2 (struct rsi_hw*,int ) ;
 struct sk_buff* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static u32 FUNC_5(struct rsi_common *VAR_2, u8 VAR_3)
{
 struct rsi_hw *VAR_4 = VAR_2->priv;
 struct sk_buff *VAR_5;
 u32 VAR_6 = 0;
 s16 VAR_7 = VAR_2->tx_qinfo[VAR_3].txop * 32;
 __le16 VAR_8;
 struct ieee80211_rate VAR_9;
 struct ieee80211_hdr *VAR_10;
 struct ieee80211_vif *VAR_11;

 VAR_9.bitrate = VAR_0 * 5 * 10;
 if (VAR_3 == VAR_1)
  VAR_7 = ((VAR_7 << 5) / 80);

 if (FUNC_4(&VAR_2->tx_queue[VAR_3]))
  VAR_5 = FUNC_3(&VAR_2->tx_queue[VAR_3]);
 else
  return 0;

 do {
  VAR_10 = (struct ieee80211_hdr *)VAR_5->data;
  VAR_11 = FUNC_2(VAR_4, VAR_10->addr2);
  VAR_8 = FUNC_0(VAR_4->hw,
         VAR_11,
         VAR_2->band,
         VAR_5->len, &VAR_9);
  VAR_7 -= FUNC_1(VAR_8);
  VAR_6 += 1;

  if (FUNC_4(&VAR_2->tx_queue[VAR_3]) - VAR_6)
   VAR_5 = VAR_5->next;
  else
   break;

 } while (VAR_7 > 0);

 return VAR_6;
}
