
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int priority; scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath10k_skb_cb {int flags; } ;


 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u8 FUNC_2(struct sk_buff *VAR_4, bool VAR_5)
{
 struct ieee80211_hdr *VAR_6 = (void *)VAR_4->data;
 struct ath10k_skb_cb *VAR_7 = FUNC_0(VAR_4);

 if (!VAR_5 && FUNC_1(VAR_6->frame_control))
  return VAR_1;
 else if (VAR_7->flags & VAR_0)
  return VAR_4->priority & VAR_3;
 else
  return VAR_2;
}
