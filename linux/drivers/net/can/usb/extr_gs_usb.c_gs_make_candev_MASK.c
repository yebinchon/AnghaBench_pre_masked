
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct net_device {int * ethtool_ops; int flags; int * netdev_ops; } ;
struct gs_device_config {int sw_version; } ;
struct gs_device_bt_const {int feature; int fclk_can; int brp_inc; int brp_max; int brp_min; int sjw_max; int tseg2_max; int tseg2_min; int tseg1_max; int tseg1_min; } ;
struct TYPE_6__ {int freq; } ;
struct TYPE_8__ {int ctrlmode_supported; int do_set_bittiming; TYPE_3__* bittiming_const; TYPE_2__ clock; int state; } ;
struct TYPE_7__ {int brp_inc; int brp_max; int brp_min; int sjw_max; int tseg2_max; int tseg2_min; int tseg1_max; int tseg1_min; int name; } ;
struct gs_can {unsigned int channel; struct net_device* netdev; TYPE_4__ can; TYPE_3__ bt_const; TYPE_1__* tx_context; int tx_ctx_lock; int active_tx_urbs; int tx_submitted; struct usb_interface* iface; int udev; } ;
struct TYPE_5__ {int echo_id; struct gs_can* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct gs_can* FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct net_device* FUNC_2 (int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct gs_device_bt_const*) ;
 struct gs_device_bt_const* FUNC_9 (int,int ) ;
 struct gs_can* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,int ,int ,int,unsigned int,int ,struct gs_device_bt_const*,int,int) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static struct gs_can *FUNC_16(unsigned int VAR_21,
         struct usb_interface *VAR_22,
         struct gs_device_config *VAR_23)
{
 struct gs_can *VAR_24;
 struct net_device *VAR_25;
 int VAR_26;
 struct gs_device_bt_const *VAR_27;

 VAR_27 = FUNC_9(sizeof(*VAR_27), VAR_6);
 if (!VAR_27)
  return FUNC_0(-VAR_5);


 VAR_26 = FUNC_14(FUNC_7(VAR_22),
        FUNC_15(FUNC_7(VAR_22), 0),
        VAR_13,
        VAR_15 | VAR_17 | VAR_16,
        VAR_21,
        0,
        VAR_27,
        sizeof(*VAR_27),
        1000);

 if (VAR_26 < 0) {
  FUNC_4(&VAR_22->dev,
   "Couldn't get bit timing const for channel (err=%d)\n",
   VAR_26);
  FUNC_8(VAR_27);
  return FUNC_0(VAR_26);
 }


 VAR_25 = FUNC_2(sizeof(struct gs_can), VAR_12);
 if (!VAR_25) {
  FUNC_4(&VAR_22->dev, "Couldn't allocate candev\n");
  FUNC_8(VAR_27);
  return FUNC_0(-VAR_5);
 }

 VAR_24 = FUNC_10(VAR_25);

 VAR_25->netdev_ops = &VAR_19;

 VAR_25->flags |= VAR_14;


 FUNC_13(VAR_24->bt_const.name, "gs_usb");
 VAR_24->bt_const.tseg1_min = VAR_27->tseg1_min;
 VAR_24->bt_const.tseg1_max = VAR_27->tseg1_max;
 VAR_24->bt_const.tseg2_min = VAR_27->tseg2_min;
 VAR_24->bt_const.tseg2_max = VAR_27->tseg2_max;
 VAR_24->bt_const.sjw_max = VAR_27->sjw_max;
 VAR_24->bt_const.brp_min = VAR_27->brp_min;
 VAR_24->bt_const.brp_max = VAR_27->brp_max;
 VAR_24->bt_const.brp_inc = VAR_27->brp_inc;

 VAR_24->udev = FUNC_7(VAR_22);
 VAR_24->iface = VAR_22;
 VAR_24->netdev = VAR_25;
 VAR_24->channel = VAR_21;

 FUNC_6(&VAR_24->tx_submitted);
 FUNC_3(&VAR_24->active_tx_urbs, 0);
 FUNC_12(&VAR_24->tx_ctx_lock);
 for (VAR_26 = 0; VAR_26 < VAR_12; VAR_26++) {
  VAR_24->tx_context[VAR_26].dev = VAR_24;
  VAR_24->tx_context[VAR_26].echo_id = VAR_12;
 }


 VAR_24->can.state = VAR_4;
 VAR_24->can.clock.freq = VAR_27->fclk_can;
 VAR_24->can.bittiming_const = &VAR_24->bt_const;
 VAR_24->can.do_set_bittiming = VAR_20;

 VAR_24->can.ctrlmode_supported = 0;

 if (VAR_27->feature & VAR_8)
  VAR_24->can.ctrlmode_supported |= VAR_1;

 if (VAR_27->feature & VAR_9)
  VAR_24->can.ctrlmode_supported |= VAR_2;

 if (VAR_27->feature & VAR_11)
  VAR_24->can.ctrlmode_supported |= VAR_0;

 if (VAR_27->feature & VAR_10)
  VAR_24->can.ctrlmode_supported |= VAR_3;

 FUNC_1(VAR_25, &VAR_22->dev);

 if (VAR_23->sw_version > 1)
  if (VAR_27->feature & VAR_7)
   VAR_25->ethtool_ops = &VAR_18;

 FUNC_8(VAR_27);

 VAR_26 = FUNC_11(VAR_24->netdev);
 if (VAR_26) {
  FUNC_5(VAR_24->netdev);
  FUNC_4(&VAR_22->dev, "Couldn't register candev (err=%d)\n", VAR_26);
  return FUNC_0(VAR_26);
 }

 return VAR_24;
}
