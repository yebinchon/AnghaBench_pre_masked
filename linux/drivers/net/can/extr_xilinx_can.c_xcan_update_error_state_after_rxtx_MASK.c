
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct xcan_priv {TYPE_1__ can; } ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {scalar_t__ can_dlc; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 struct xcan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int,struct can_frame*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 struct xcan_priv *VAR_3 = FUNC_1(VAR_2);
 enum can_state VAR_4 = VAR_3->can.state;
 enum can_state VAR_5;




 if (VAR_4 != VAR_1 &&
     VAR_4 != VAR_0)
  return;

 VAR_5 = FUNC_3(VAR_2);

 if (VAR_5 != VAR_4) {
  struct sk_buff *VAR_6;
  struct can_frame *VAR_7;

  VAR_6 = FUNC_0(VAR_2, &VAR_7);

  FUNC_4(VAR_2, VAR_5, VAR_6 ? VAR_7 : ((void*)0));

  if (VAR_6) {
   struct net_device_stats *VAR_8 = &VAR_2->stats;

   VAR_8->rx_packets++;
   VAR_8->rx_bytes += VAR_7->can_dlc;
   FUNC_2(VAR_6);
  }
 }
}
