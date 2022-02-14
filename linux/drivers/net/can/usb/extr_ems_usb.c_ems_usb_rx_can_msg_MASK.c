
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct ems_usb {TYPE_3__* netdev; } ;
struct TYPE_4__ {int length; int * msg; int id; } ;
struct TYPE_5__ {TYPE_1__ can_msg; } ;
struct ems_cpc_msg {scalar_t__ type; TYPE_2__ msg; } ;
struct can_frame {int can_dlc; int * data; int can_id; } ;
struct TYPE_6__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_0 (TYPE_3__*,struct can_frame**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct ems_usb *VAR_5, struct ems_cpc_msg *VAR_6)
{
 struct can_frame *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9;
 struct net_device_stats *VAR_10 = &VAR_5->netdev->stats;

 VAR_8 = FUNC_0(VAR_5->netdev, &VAR_7);
 if (VAR_8 == ((void*)0))
  return;

 VAR_7->can_id = FUNC_2(VAR_6->msg.can_msg.id);
 VAR_7->can_dlc = FUNC_1(VAR_6->msg.can_msg.length & 0xF);

 if (VAR_6->type == VAR_2 ||
     VAR_6->type == VAR_3)
  VAR_7->can_id |= VAR_0;

 if (VAR_6->type == VAR_4 ||
     VAR_6->type == VAR_3) {
  VAR_7->can_id |= VAR_1;
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_7->can_dlc; VAR_9++)
   VAR_7->data[VAR_9] = VAR_6->msg.can_msg.msg[VAR_9];
 }

 VAR_10->rx_packets++;
 VAR_10->rx_bytes += VAR_7->can_dlc;
 FUNC_3(VAR_8);
}
