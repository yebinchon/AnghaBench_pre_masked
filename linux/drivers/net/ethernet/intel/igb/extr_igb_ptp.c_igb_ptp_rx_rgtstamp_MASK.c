
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct igb_q_vector {struct igb_adapter* adapter; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int link_speed; int last_rx_timestamp; struct e1000_hw hw; } ;
struct TYPE_5__ {int hwtstamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 scalar_t__ VAR_7 ;
 int FUNC_0 (struct igb_adapter*,TYPE_2__*,int) ;
 int VAR_8 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct igb_q_vector *VAR_9,
    struct sk_buff *VAR_10)
{
 struct igb_adapter *VAR_11 = VAR_9->adapter;
 struct e1000_hw *VAR_12 = &VAR_11->hw;
 u64 VAR_13;
 int VAR_14 = 0;
 if (!(FUNC_2(VAR_2) & VAR_3))
  return;

 VAR_13 = FUNC_2(VAR_1);
 VAR_13 |= (u64)FUNC_2(VAR_0) << 32;

 FUNC_0(VAR_11, FUNC_3(VAR_10), VAR_13);


 if (VAR_11->hw.mac.type == VAR_7) {
  switch (VAR_11->link_speed) {
  case 130:
   VAR_14 = VAR_4;
   break;
  case 129:
   VAR_14 = VAR_5;
   break;
  case 128:
   VAR_14 = VAR_6;
   break;
  }
 }
 FUNC_3(VAR_10)->hwtstamp =
  FUNC_1(FUNC_3(VAR_10)->hwtstamp, VAR_14);




 VAR_11->last_rx_timestamp = VAR_8;
}
