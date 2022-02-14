
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_info {int internal_hdr_size; } ;
struct sk_buff {int dummy; } ;
struct rsi_hw {int hw; } ;
struct ieee80211_tx_info {scalar_t__ driver_data; int flags; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct sk_buff*,int ) ;

void FUNC_5(struct rsi_hw *VAR_3,
       struct sk_buff *VAR_4,
       int VAR_5)
{
 struct ieee80211_tx_info *VAR_6 = FUNC_0(VAR_4);
 struct skb_info *VAR_7;

 if (!VAR_3->hw) {
  FUNC_3(VAR_0, "##### No MAC #####\n");
  return;
 }

 if (!VAR_5)
  VAR_6->flags |= VAR_2;

 VAR_7 = (struct skb_info *)VAR_6->driver_data;
 FUNC_4(VAR_4, VAR_7->internal_hdr_size);
 FUNC_2(VAR_6->driver_data, 0, VAR_1);

 FUNC_1(VAR_3->hw, VAR_4);
}
