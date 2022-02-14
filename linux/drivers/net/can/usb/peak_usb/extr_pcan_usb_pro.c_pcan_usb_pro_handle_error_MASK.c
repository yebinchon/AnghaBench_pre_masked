
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int error_warning; int error_passive; int bus_off; } ;
struct TYPE_5__ {int state; TYPE_1__ can_stats; } ;
struct peak_usb_device {TYPE_2__ can; struct net_device* netdev; } ;
struct pcan_usb_pro_rxstatus {int channel; int ts32; int err_frm; int status; } ;
struct pcan_usb_pro_interface {int time_ref; struct peak_usb_device** dev; } ;
struct TYPE_6__ {int rx_bytes; int rx_packets; int rx_errors; int rx_over_errors; } ;
struct net_device {TYPE_3__ stats; } ;
struct can_frame {int* data; scalar_t__ can_dlc; int can_id; } ;
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




 int VAR_9 ;
 int VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,int,int *) ;
 struct skb_shared_hwtstamps* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct pcan_usb_pro_interface *VAR_15,
         struct pcan_usb_pro_rxstatus *VAR_16)
{
 const u16 VAR_17 = FUNC_2(VAR_16->status);
 const unsigned int VAR_18 = (VAR_16->channel >> 4) & 0x0f;
 struct peak_usb_device *VAR_19 = VAR_15->dev[VAR_18];
 struct net_device *VAR_20 = VAR_19->netdev;
 struct can_frame *VAR_21;
 enum can_state VAR_22 = 130;
 u8 VAR_23 = 0;
 struct sk_buff *VAR_24;
 struct skb_shared_hwtstamps *VAR_25;


 if (VAR_19->can.state == 131)
  return 0;

 if (!VAR_17) {

  VAR_19->can.state = 130;
  return 0;
 }

 if (VAR_17 & (VAR_13 |
     VAR_14)) {

  VAR_22 = VAR_9;
 }

 if (VAR_17 & VAR_11) {
  VAR_22 = 131;
 } else if (VAR_17 & VAR_12) {
  u32 VAR_26 = (FUNC_3(VAR_16->err_frm) & 0x00ff0000) >> 16;
  u32 VAR_27 = (FUNC_3(VAR_16->err_frm) & 0xff000000) >> 24;

  if (VAR_26 > 127)
   VAR_23 |= VAR_3;
  else if (VAR_26 > 96)
   VAR_23 |= VAR_4;

  if (VAR_27 > 127)
   VAR_23 |= VAR_5;
  else if (VAR_27 > 96)
   VAR_23 |= VAR_6;

  if (VAR_23 & (VAR_4 |
    VAR_6))
   VAR_22 = 128;
  else if (VAR_23 & (VAR_3 |
         VAR_5))
   VAR_22 = 129;
 }


 if (VAR_19->can.state == VAR_22)
  return 0;


 VAR_24 = FUNC_0(VAR_20, &VAR_21);
 if (!VAR_24)
  return -VAR_10;

 switch (VAR_22) {
 case 131:
  VAR_21->can_id |= VAR_0;
  VAR_19->can.can_stats.bus_off++;
  FUNC_1(VAR_20);
  break;

 case 129:
  VAR_21->can_id |= VAR_1;
  VAR_21->data[1] |= VAR_23;
  VAR_19->can.can_stats.error_passive++;
  break;

 case 128:
  VAR_21->can_id |= VAR_1;
  VAR_21->data[1] |= VAR_23;
  VAR_19->can.can_stats.error_warning++;
  break;

 case 130:
  break;

 default:

  if (VAR_17 & VAR_13) {
   VAR_21->can_id |= VAR_7;
   VAR_21->data[2] |= VAR_8;
   VAR_20->stats.rx_over_errors++;
   VAR_20->stats.rx_errors++;
  }

  if (VAR_17 & VAR_14) {
   VAR_21->can_id |= VAR_1;
   VAR_21->data[1] |= VAR_2;
   VAR_20->stats.rx_over_errors++;
   VAR_20->stats.rx_errors++;
  }

  VAR_22 = 130;
  break;
 }

 VAR_19->can.state = VAR_22;

 VAR_25 = FUNC_6(VAR_24);
 FUNC_5(&VAR_15->time_ref, FUNC_3(VAR_16->ts32), &VAR_25->hwtstamp);
 VAR_20->stats.rx_packets++;
 VAR_20->stats.rx_bytes += VAR_21->can_dlc;
 FUNC_4(VAR_24);

 return 0;
}
