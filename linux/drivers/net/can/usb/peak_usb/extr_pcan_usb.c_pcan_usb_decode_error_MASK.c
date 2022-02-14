
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct pcan_usb_msg_context {TYPE_7__* netdev; int ts16; TYPE_4__* pdev; } ;
struct can_frame {int* data; scalar_t__ can_dlc; int can_id; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;
struct TYPE_13__ {int rx_bytes; int rx_packets; int rx_errors; int rx_over_errors; } ;
struct TYPE_15__ {TYPE_5__ stats; } ;
struct TYPE_14__ {int tick_count; } ;
struct TYPE_9__ {int error_warning; int error_passive; int bus_off; } ;
struct TYPE_10__ {int state; TYPE_1__ can_stats; } ;
struct TYPE_11__ {TYPE_2__ can; } ;
struct TYPE_12__ {TYPE_6__ time_ref; TYPE_3__ dev; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 struct sk_buff* FUNC_0 (TYPE_7__*,struct can_frame**) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_6__*,int ,int *) ;
 struct skb_shared_hwtstamps* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct pcan_usb_msg_context *VAR_16, u8 VAR_17,
     u8 VAR_18)
{
 struct sk_buff *VAR_19;
 struct can_frame *VAR_20;
 enum can_state VAR_21;


 if (VAR_17 == VAR_13)
  if (!VAR_16->pdev->time_ref.tick_count)
   return 0;

 VAR_21 = VAR_16->pdev->dev.can.state;

 switch (VAR_16->pdev->dev.can.state) {
 case 130:
  if (VAR_17 & VAR_11) {
   VAR_21 = 128;
   break;
  }


 case 128:
  if (VAR_17 & VAR_10) {
   VAR_21 = 129;
   break;
  }
  if (VAR_17 & VAR_12) {
   VAR_21 = 131;
   break;
  }
  if (VAR_17 & (VAR_14 | VAR_13)) {




   VAR_21 = VAR_8;
   break;
  }
  if ((VAR_17 & VAR_11) == 0) {

   VAR_21 = 130;
   break;
  }
  break;

 case 129:
  if (VAR_17 & VAR_12) {
   VAR_21 = 131;
   break;
  }
  if (VAR_17 & VAR_11) {
   VAR_21 = 128;
   break;
  }
  if (VAR_17 & (VAR_14 | VAR_13)) {




   VAR_21 = VAR_8;
   break;
  }

  if ((VAR_17 & VAR_10) == 0) {

   VAR_21 = 128;
   break;
  }
  break;

 default:

  return 0;
 }


 if (VAR_16->pdev->dev.can.state == VAR_21)
  return 0;


 VAR_19 = FUNC_0(VAR_16->netdev, &VAR_20);
 if (!VAR_19)
  return -VAR_9;

 switch (VAR_21) {
 case 131:
  VAR_20->can_id |= VAR_0;
  VAR_16->pdev->dev.can.can_stats.bus_off++;
  FUNC_1(VAR_16->netdev);
  break;

 case 129:
  VAR_20->can_id |= VAR_1;
  VAR_20->data[1] |= VAR_6 |
          VAR_4;
  VAR_16->pdev->dev.can.can_stats.error_passive++;
  break;

 case 128:
  VAR_20->can_id |= VAR_1;
  VAR_20->data[1] |= VAR_7 |
          VAR_5;
  VAR_16->pdev->dev.can.can_stats.error_warning++;
  break;

 case 130:
  VAR_20->can_id |= VAR_1;
  VAR_20->data[1] = VAR_2;
  break;

 default:

  VAR_20->can_id |= VAR_1;
  VAR_20->data[1] |= VAR_3;
  VAR_16->netdev->stats.rx_over_errors++;
  VAR_16->netdev->stats.rx_errors++;

  VAR_21 = VAR_16->pdev->dev.can.state;
  break;
 }

 VAR_16->pdev->dev.can.state = VAR_21;

 if (VAR_18 & VAR_15) {
  struct skb_shared_hwtstamps *VAR_22 = FUNC_4(VAR_19);

  FUNC_3(&VAR_16->pdev->time_ref, VAR_16->ts16,
         &VAR_22->hwtstamp);
 }

 VAR_16->netdev->stats.rx_packets++;
 VAR_16->netdev->stats.rx_bytes += VAR_20->can_dlc;
 FUNC_2(VAR_19);

 return 0;
}
