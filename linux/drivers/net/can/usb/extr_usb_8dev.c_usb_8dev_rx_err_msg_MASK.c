
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct usb_8dev_rx_msg {int* data; } ;
struct TYPE_9__ {int txerr; int rxerr; } ;
struct TYPE_7__ {int error_passive; int error_warning; int bus_error; int bus_off; } ;
struct TYPE_8__ {TYPE_1__ can_stats; void* state; } ;
struct usb_8dev_priv {TYPE_3__ bec; TYPE_4__* netdev; TYPE_2__ can; } ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_errors; int tx_errors; int rx_over_errors; } ;
struct can_frame {int can_id; int* data; scalar_t__ can_dlc; } ;
struct TYPE_10__ {struct net_device_stats stats; } ;


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
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 struct sk_buff* FUNC_0 (TYPE_4__*,struct can_frame**) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct usb_8dev_priv *VAR_22,
    struct usb_8dev_rx_msg *VAR_23)
{
 struct can_frame *VAR_24;
 struct sk_buff *VAR_25;
 struct net_device_stats *VAR_26 = &VAR_22->netdev->stats;
 u8 VAR_27 = VAR_23->data[0];
 u8 VAR_28 = VAR_23->data[1] & VAR_21;
 u8 VAR_29 = VAR_23->data[2];
 int VAR_30 = 0;
 int VAR_31 = 0;

 VAR_25 = FUNC_0(VAR_22->netdev, &VAR_24);
 if (!VAR_25)
  return;

 switch (VAR_27) {
 case 130:
  VAR_22->can.state = VAR_18;
  VAR_24->can_id |= VAR_9;
  VAR_24->data[2] = VAR_10;
  break;
 case 133:
  VAR_22->can.state = VAR_17;
  VAR_24->can_id |= VAR_2;
  VAR_22->can.can_stats.bus_off++;
  FUNC_1(VAR_22->netdev);
  break;
 case 129:
 case 134:
 case 135:
  VAR_24->can_id |= VAR_3;
  break;
 default:
  VAR_22->can.state = VAR_20;
  VAR_24->can_id |= VAR_9 | VAR_1;
  VAR_22->can.can_stats.bus_error++;
  break;
 }

 switch (VAR_27) {
 case 130:
 case 133:
  break;
 case 138:
  VAR_24->can_id |= VAR_0;
  VAR_31 = 1;
  break;
 case 132:
  VAR_24->data[3] = VAR_14;
  VAR_30 = 1;
  break;
 case 137:
  VAR_24->data[2] |= VAR_11;
  VAR_31 = 1;
  break;
 case 136:
  VAR_24->data[2] |= VAR_12;
  VAR_31 = 1;
  break;
 case 131:
  VAR_24->data[2] |= VAR_13;
  VAR_30 = 1;
  break;
 case 128:
  VAR_24->data[2] |= VAR_15;
  VAR_30 = 1;
  break;
 case 129:
  VAR_24->data[1] = VAR_4;
  VAR_26->rx_over_errors++;
  VAR_30 = 1;
  break;
 case 134:
  VAR_22->can.state = VAR_20;
  VAR_24->data[1] = (VAR_29 > VAR_28) ?
   VAR_8 :
   VAR_6;
  VAR_22->can.can_stats.error_warning++;
  break;
 case 135:
  VAR_22->can.state = VAR_19;
  VAR_24->data[1] = (VAR_29 > VAR_28) ?
   VAR_7 :
   VAR_5;
  VAR_22->can.can_stats.error_passive++;
  break;
 default:
  FUNC_2(VAR_22->netdev,
       "Unknown status/error message (%d)\n", VAR_27);
  break;
 }

 if (VAR_31) {
  VAR_24->data[2] |= VAR_16;
  VAR_26->tx_errors++;
 }

 if (VAR_30)
  VAR_26->rx_errors++;

 VAR_24->data[6] = VAR_29;
 VAR_24->data[7] = VAR_28;

 VAR_22->bec.txerr = VAR_29;
 VAR_22->bec.rxerr = VAR_28;

 VAR_26->rx_packets++;
 VAR_26->rx_bytes += VAR_24->can_dlc;
 FUNC_3(VAR_25);
}
