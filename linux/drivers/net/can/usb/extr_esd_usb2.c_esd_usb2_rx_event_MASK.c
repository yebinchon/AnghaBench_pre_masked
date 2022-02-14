
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_errors; int rx_dropped; } ;
struct TYPE_12__ {int txerr; int rxerr; } ;
struct TYPE_10__ {int bus_error; int error_passive; int error_warning; int bus_off; } ;
struct TYPE_11__ {scalar_t__ state; TYPE_3__ can_stats; } ;
struct esd_usb2_net_priv {int old_state; TYPE_5__ bec; TYPE_4__ can; TYPE_6__* netdev; } ;
struct TYPE_8__ {int* data; int id; } ;
struct TYPE_9__ {TYPE_1__ rx; } ;
struct esd_usb2_msg {TYPE_2__ msg; } ;
struct can_frame {int can_id; int* data; scalar_t__ can_dlc; } ;
struct TYPE_13__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;


 int VAR_13 ;

 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

 int VAR_16 ;

 int VAR_17 ;
 int VAR_18 ;

 struct sk_buff* FUNC_0 (TYPE_6__*,struct can_frame**) ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct esd_usb2_net_priv *VAR_19,
         struct esd_usb2_msg *VAR_20)
{
 struct net_device_stats *VAR_21 = &VAR_19->netdev->stats;
 struct can_frame *VAR_22;
 struct sk_buff *VAR_23;
 u32 VAR_24 = FUNC_2(VAR_20->msg.rx.id) & VAR_15;

 if (VAR_24 == VAR_14) {
  u8 VAR_25 = VAR_20->msg.rx.data[0];
  u8 VAR_26 = VAR_20->msg.rx.data[1];
  u8 VAR_27 = VAR_20->msg.rx.data[2];
  u8 VAR_28 = VAR_20->msg.rx.data[3];

  VAR_23 = FUNC_0(VAR_19->netdev, &VAR_22);
  if (VAR_23 == ((void*)0)) {
   VAR_21->rx_dropped++;
   return;
  }

  if (VAR_25 != VAR_19->old_state) {
   VAR_19->old_state = VAR_25;

   switch (VAR_25 & VAR_13) {
   case 133:
    VAR_19->can.state = VAR_9;
    VAR_22->can_id |= VAR_1;
    VAR_19->can.can_stats.bus_off++;
    FUNC_1(VAR_19->netdev);
    break;
   case 131:
    VAR_19->can.state = VAR_12;
    VAR_19->can.can_stats.error_warning++;
    break;
   case 132:
    VAR_19->can.state = VAR_11;
    VAR_19->can.can_stats.error_passive++;
    break;
   default:
    VAR_19->can.state = VAR_10;
    break;
   }
  } else {
   VAR_19->can.can_stats.bus_error++;
   VAR_21->rx_errors++;

   VAR_22->can_id |= VAR_4 | VAR_0;

   switch (VAR_26 & VAR_17) {
   case 130:
    VAR_22->data[2] |= VAR_5;
    break;
   case 129:
    VAR_22->data[2] |= VAR_6;
    break;
   case 128:
    VAR_22->data[2] |= VAR_7;
    break;
   default:
    VAR_22->data[3] = VAR_26 & VAR_18;
    break;
   }


   if (!(VAR_26 & VAR_16))
    VAR_22->data[2] |= VAR_8;

   if (VAR_19->can.state == VAR_12 ||
       VAR_19->can.state == VAR_11) {
    VAR_22->data[1] = (VAR_27 > VAR_28) ?
     VAR_3 :
     VAR_2;
   }
   VAR_22->data[6] = VAR_27;
   VAR_22->data[7] = VAR_28;
  }

  VAR_19->bec.txerr = VAR_27;
  VAR_19->bec.rxerr = VAR_28;

  VAR_21->rx_packets++;
  VAR_21->rx_bytes += VAR_22->can_dlc;
  FUNC_3(VAR_23);
 }
}
