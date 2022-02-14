
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct TYPE_11__ {int state; scalar_t__ restart_ms; } ;
struct kvaser_usb_net_priv {TYPE_7__* netdev; TYPE_2__ can; } ;
struct TYPE_15__ {int error_state; } ;
struct TYPE_14__ {int error_factor; } ;
struct kvaser_usb_err_summary {size_t channel; int status; int rxerr; int txerr; TYPE_6__ usbcan; TYPE_5__ leaf; } ;
struct TYPE_12__ {int family; } ;
struct TYPE_13__ {TYPE_3__ leaf; } ;
struct kvaser_usb {size_t nchannels; TYPE_4__ card_data; struct kvaser_usb_net_priv** nets; TYPE_1__* intf; } ;
struct can_frame {int can_id; scalar_t__ can_dlc; int * data; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;
struct TYPE_16__ {struct net_device_stats stats; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct sk_buff* FUNC_0 (TYPE_7__*,struct can_frame**) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (struct kvaser_usb_net_priv*,struct kvaser_usb_err_summary const*,struct can_frame*) ;
 int FUNC_3 (struct kvaser_usb_net_priv*,int ) ;
 int FUNC_4 (struct can_frame*,struct can_frame*,int) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(const struct kvaser_usb *VAR_24,
         const struct kvaser_usb_err_summary *VAR_25)
{
 struct can_frame *VAR_26;
 struct can_frame VAR_27 = { .can_id = VAR_2,
        .can_dlc = VAR_1 };
 struct sk_buff *VAR_28;
 struct net_device_stats *VAR_29;
 struct kvaser_usb_net_priv *VAR_30;
 enum can_state VAR_31, VAR_32;

 if (VAR_25->channel >= VAR_24->nchannels) {
  FUNC_1(&VAR_24->intf->dev,
   "Invalid channel number (%d)\n", VAR_25->channel);
  return;
 }

 VAR_30 = VAR_24->nets[VAR_25->channel];
 VAR_29 = &VAR_30->netdev->stats;
 VAR_31 = VAR_30->can.state;
 FUNC_2(VAR_30, VAR_25, &VAR_27);
 VAR_32 = VAR_30->can.state;

 VAR_28 = FUNC_0(VAR_30->netdev, &VAR_26);
 if (!VAR_28) {
  VAR_29->rx_dropped++;
  return;
 }
 FUNC_4(VAR_26, &VAR_27, sizeof(*VAR_26));

 if (VAR_32 != VAR_31) {
  if (VAR_25->status &
      (VAR_21 | VAR_22)) {
   if (!VAR_30->can.restart_ms)
    FUNC_3(VAR_30,
         VAR_13);
   FUNC_5(VAR_30->netdev);
  }

  if (VAR_30->can.restart_ms &&
      VAR_31 >= VAR_12 &&
      VAR_32 < VAR_12) {
   VAR_26->can_id |= VAR_11;
   FUNC_6(VAR_30->netdev);
  }
 }

 switch (VAR_24->card_data.leaf.family) {
 case 129:
  if (VAR_25->leaf.error_factor) {
   VAR_26->can_id |= VAR_0 | VAR_3;

   if (VAR_25->leaf.error_factor & VAR_14)
    VAR_26->data[3] = VAR_7;
   if (VAR_25->leaf.error_factor & VAR_17)
    VAR_26->data[3] = VAR_8;
   if (VAR_25->leaf.error_factor & VAR_18)
    VAR_26->data[2] |= VAR_6;
   if (VAR_25->leaf.error_factor & VAR_19)
    VAR_26->data[2] |= VAR_9;
   if (VAR_25->leaf.error_factor & VAR_15)
    VAR_26->data[2] |= VAR_4;
   if (VAR_25->leaf.error_factor & VAR_16)
    VAR_26->data[2] |= VAR_5;
   if (VAR_25->leaf.error_factor & VAR_20)
    VAR_26->data[2] |= VAR_10;
  }
  break;
 case 128:
  if (VAR_25->usbcan.error_state & VAR_23)
   VAR_26->can_id |= VAR_0;
  break;
 }

 VAR_26->data[6] = VAR_25->txerr;
 VAR_26->data[7] = VAR_25->rxerr;

 VAR_29->rx_packets++;
 VAR_29->rx_bytes += VAR_26->can_dlc;
 FUNC_7(VAR_28);
}
