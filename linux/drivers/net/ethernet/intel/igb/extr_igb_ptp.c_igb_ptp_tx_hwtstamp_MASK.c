
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int link_speed; int state; struct sk_buff* ptp_tx_skb; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct igb_adapter*,struct skb_shared_hwtstamps*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,struct skb_shared_hwtstamps*) ;

__attribute__((used)) static void FUNC_6(struct igb_adapter *VAR_7)
{
 struct sk_buff *VAR_8 = VAR_7->ptp_tx_skb;
 struct e1000_hw *VAR_9 = &VAR_7->hw;
 struct skb_shared_hwtstamps VAR_10;
 u64 VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_4(VAR_1);
 VAR_11 |= (u64)FUNC_4(VAR_0) << 32;

 FUNC_2(VAR_7, &VAR_10, VAR_11);

 if (VAR_7->hw.mac.type == VAR_6) {
  switch (VAR_7->link_speed) {
  case 130:
   VAR_12 = VAR_2;
   break;
  case 129:
   VAR_12 = VAR_3;
   break;
  case 128:
   VAR_12 = VAR_4;
   break;
  }
 }

 VAR_10.hwtstamp =
  FUNC_3(VAR_10.hwtstamp, VAR_12);






 VAR_7->ptp_tx_skb = ((void*)0);
 FUNC_0(VAR_5, &VAR_7->state);


 FUNC_5(VAR_8, &VAR_10);
 FUNC_1(VAR_8);
}
