
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct can_frame {scalar_t__ can_dlc; } ;
struct TYPE_4__ {int state; } ;
struct at91_priv {TYPE_2__ can; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*,int*) ;
 int FUNC_2 (struct net_device*,struct can_frame*,int) ;
 scalar_t__ FUNC_3 (struct at91_priv*) ;
 int FUNC_4 (struct at91_priv*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct net_device*,char*) ;
 struct at91_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_9)
{
 struct at91_priv *VAR_10 = FUNC_7(VAR_9);
 struct sk_buff *VAR_11;
 struct can_frame *VAR_12;
 enum can_state VAR_13;
 u32 VAR_14;
 int VAR_15;

 if (FUNC_3(VAR_10)) {
  VAR_14 = FUNC_4(VAR_10, VAR_4);


  if (FUNC_9(VAR_14 & VAR_0))
   VAR_13 = VAR_5;
  else if (FUNC_9(VAR_14 & VAR_2))
   VAR_13 = VAR_7;
  else if (FUNC_9(VAR_14 & VAR_3))
   VAR_13 = VAR_8;
  else if (FUNC_5(VAR_14 & VAR_1))
   VAR_13 = VAR_6;
  else {
   FUNC_6(VAR_9, "BUG! hardware in undefined state\n");
   return;
  }
 } else {
  VAR_15 = FUNC_1(VAR_9, &VAR_13);
  if (VAR_15)
   return;
 }


 if (FUNC_5(VAR_13 == VAR_10->can.state))
  return;

 VAR_11 = FUNC_0(VAR_9, &VAR_12);
 if (FUNC_9(!VAR_11))
  return;

 FUNC_2(VAR_9, VAR_12, VAR_13);

 VAR_9->stats.rx_packets++;
 VAR_9->stats.rx_bytes += VAR_12->can_dlc;
 FUNC_8(VAR_11);

 VAR_10->can.state = VAR_13;
}
