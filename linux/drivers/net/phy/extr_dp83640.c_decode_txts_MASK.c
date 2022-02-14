
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {scalar_t__ cb; } ;
struct phy_txts {int ns_hi; } ;
struct dp83640_skb_info {int tmo; } ;
struct dp83640_private {int tx_queue; } ;
typedef int shhwtstamps ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct phy_txts*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 struct sk_buff* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct dp83640_private *VAR_1,
   struct phy_txts *VAR_2)
{
 struct skb_shared_hwtstamps VAR_3;
 struct dp83640_skb_info *VAR_4;
 struct sk_buff *VAR_5;
 u8 VAR_6;
 u64 VAR_7;


again:
 VAR_5 = FUNC_6(&VAR_1->tx_queue);
 if (!VAR_5) {
  FUNC_4("have timestamp but tx_queue empty\n");
  return;
 }

 VAR_6 = (VAR_2->ns_hi >> 14) & 0x3;
 if (VAR_6) {
  FUNC_4("tx timestamp queue overflow, count %d\n", VAR_6);
  while (VAR_5) {
   FUNC_0(VAR_5);
   VAR_5 = FUNC_6(&VAR_1->tx_queue);
  }
  return;
 }
 VAR_4 = (struct dp83640_skb_info *)VAR_5->cb;
 if (FUNC_7(VAR_0, VAR_4->tmo)) {
  FUNC_0(VAR_5);
  goto again;
 }

 VAR_7 = FUNC_3(VAR_2);
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.hwtstamp = FUNC_2(VAR_7);
 FUNC_5(VAR_5, &VAR_3);
}
