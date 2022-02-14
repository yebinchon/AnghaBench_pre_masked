
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct rcar_canfd_channel {TYPE_1__ can; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {scalar_t__ can_dlc; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*,struct can_frame*,int,int) ;
 int FUNC_2 (struct net_device*,char*,int,int,int,int) ;
 struct rcar_canfd_channel* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
        u16 VAR_3, u16 VAR_4)
{
 struct rcar_canfd_channel *VAR_5 = FUNC_3(VAR_2);
 struct net_device_stats *VAR_6 = &VAR_2->stats;
 enum can_state VAR_7, VAR_8, VAR_9 = VAR_5->can.state;
 struct can_frame *VAR_10;
 struct sk_buff *VAR_11;


 if (VAR_3 < 96 && VAR_4 < 96)
  VAR_9 = VAR_0;
 else if (VAR_3 < 128 && VAR_4 < 128)
  VAR_9 = VAR_1;

 if (VAR_9 != VAR_5->can.state) {
  FUNC_2(VAR_2, "state: new %d, old %d: txerr %u, rxerr %u\n",
      VAR_9, VAR_5->can.state, VAR_3, VAR_4);
  VAR_11 = FUNC_0(VAR_2, &VAR_10);
  if (!VAR_11) {
   VAR_6->rx_dropped++;
   return;
  }
  VAR_8 = VAR_3 >= VAR_4 ? VAR_9 : 0;
  VAR_7 = VAR_3 <= VAR_4 ? VAR_9 : 0;

  FUNC_1(VAR_2, VAR_10, VAR_8, VAR_7);
  VAR_6->rx_packets++;
  VAR_6->rx_bytes += VAR_10->can_dlc;
  FUNC_4(VAR_11);
 }
}
