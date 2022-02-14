
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct urb {int transfer_flags; int transfer_dma; } ;
struct net_device {int dummy; } ;
struct gs_usb {int rx_submitted; int active_channels; } ;
struct gs_host_frame {int dummy; } ;
struct gs_device_mode {int mode; int flags; } ;
struct TYPE_2__ {int ctrlmode; int state; } ;
struct gs_can {TYPE_1__ can; int channel; int iface; int netdev; int udev; struct gs_usb* parent; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int,int *) ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gs_device_mode*) ;
 struct gs_device_mode* FUNC_3 (int,int ) ;
 int FUNC_4 (struct net_device*,char*,...) ;
 struct gs_can* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int * FUNC_9 (int ,int,int ,int *) ;
 struct urb* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct urb*,int *) ;
 int FUNC_12 (int ,int ,int ,int,int ,int ,struct gs_device_mode*,int,int) ;
 int FUNC_13 (struct urb*,int ,int ,int *,int,int ,struct gs_usb*) ;
 int FUNC_14 (struct urb*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct urb*,int ) ;
 int FUNC_18 (struct urb*) ;

__attribute__((used)) static int FUNC_19(struct net_device *VAR_21)
{
 struct gs_can *VAR_22 = FUNC_5(VAR_21);
 struct gs_usb *VAR_23 = VAR_22->parent;
 int VAR_24, VAR_25;
 struct gs_device_mode *VAR_26;
 u32 VAR_27;

 VAR_24 = FUNC_8(VAR_21);
 if (VAR_24)
  return VAR_24;

 if (FUNC_0(1, &VAR_23->active_channels) == 1) {
  for (VAR_25 = 0; VAR_25 < VAR_14; VAR_25++) {
   struct urb *VAR_28;
   u8 *VAR_29;


   VAR_28 = FUNC_10(0, VAR_7);
   if (!VAR_28)
    return -VAR_6;


   VAR_29 = FUNC_9(VAR_22->udev,
       sizeof(struct gs_host_frame),
       VAR_7,
       &VAR_28->transfer_dma);
   if (!VAR_29) {
    FUNC_4(VAR_21,
        "No memory left for USB buffer\n");
    FUNC_14(VAR_28);
    return -VAR_6;
   }


   FUNC_13(VAR_28,
       VAR_22->udev,
       FUNC_15(VAR_22->udev,
         VAR_8),
       VAR_29,
       sizeof(struct gs_host_frame),
       VAR_20,
       VAR_23);
   VAR_28->transfer_flags |= VAR_16;

   FUNC_11(VAR_28, &VAR_23->rx_submitted);

   VAR_24 = FUNC_17(VAR_28, VAR_7);
   if (VAR_24) {
    if (VAR_24 == -VAR_5)
     FUNC_6(VAR_22->netdev);

    FUNC_4(VAR_21,
        "usb_submit failed (err=%d)\n",
        VAR_24);

    FUNC_18(VAR_28);
    FUNC_14(VAR_28);
    break;
   }




   FUNC_14(VAR_28);
  }
 }

 VAR_26 = FUNC_3(sizeof(*VAR_26), VAR_7);
 if (!VAR_26)
  return -VAR_6;


 VAR_27 = VAR_22->can.ctrlmode;
 VAR_26->flags = 0;

 if (VAR_27 & VAR_2)
  VAR_26->flags |= VAR_10;
 else if (VAR_27 & VAR_1)
  VAR_26->flags |= VAR_9;




 if (VAR_27 & VAR_3)
  VAR_26->flags |= VAR_11;

 if (VAR_27 & VAR_0)
  VAR_26->flags |= VAR_13;


 VAR_26->mode = VAR_12;
 VAR_24 = FUNC_12(FUNC_1(VAR_22->iface),
        FUNC_16(FUNC_1(VAR_22->iface), 0),
        VAR_15,
        VAR_17 | VAR_19 |
        VAR_18,
        VAR_22->channel,
        0,
        VAR_26,
        sizeof(*VAR_26),
        1000);

 if (VAR_24 < 0) {
  FUNC_4(VAR_21, "Couldn't start device (err=%d)\n", VAR_24);
  FUNC_2(VAR_26);
  return VAR_24;
 }

 FUNC_2(VAR_26);

 VAR_22->can.state = VAR_4;

 if (!(VAR_22->can.ctrlmode & VAR_1))
  FUNC_7(VAR_21);

 return 0;
}
