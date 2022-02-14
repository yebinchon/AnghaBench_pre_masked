
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int num_tx_queues; struct e1000_hw hw; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct igb_adapter*,int) ;
 scalar_t__ FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (struct net_device*,char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct igb_adapter *VAR_19)
{
 struct net_device *VAR_20 = VAR_19->netdev;
 struct e1000_hw *VAR_21 = &VAR_19->hw;
 u32 VAR_22;


 if (VAR_21->mac.type != VAR_18)
  return;

 if (FUNC_1(VAR_19)) {
  int VAR_23, VAR_24;





  VAR_22 = FUNC_3(VAR_1);
  VAR_22 |= VAR_5 | VAR_4;
  VAR_22 &= ~VAR_3;
  FUNC_4(VAR_1, VAR_22);




  VAR_22 = FUNC_3(VAR_6);
  VAR_22 &= ~VAR_13;
  VAR_22 |= VAR_14 | VAR_15 |
   VAR_16 | VAR_17;
  FUNC_4(VAR_6, VAR_22);

  VAR_22 = FUNC_3(VAR_2);
  VAR_22 &= ~VAR_9;
  VAR_22 |= VAR_10;
  FUNC_4(VAR_2, VAR_22);
  VAR_22 = (4096 - 1) / 64;
  FUNC_4(VAR_0, VAR_22);






  VAR_24 = (VAR_19->num_tx_queues < VAR_11) ?
       VAR_19->num_tx_queues : VAR_11;

  for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
   FUNC_0(VAR_19, VAR_23);
  }
 } else {
  FUNC_4(VAR_2, VAR_8);
  FUNC_4(VAR_6, VAR_12);
  FUNC_4(VAR_0, VAR_7);

  VAR_22 = FUNC_3(VAR_1);




  VAR_22 &= ~VAR_5;
  FUNC_4(VAR_1, VAR_22);
 }

 FUNC_2(VAR_20, "FQTSS %s\n", (FUNC_1(VAR_19)) ?
     "enabled" : "disabled");
}
