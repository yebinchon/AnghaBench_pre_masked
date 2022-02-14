
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct urb {int transfer_dma; int transfer_flags; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct ems_usb {int free_slots; TYPE_1__ can; struct urb* intr_urb; scalar_t__* intr_in_buffer; int udev; int rx_submitted; struct net_device* netdev; } ;


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
 int FUNC_0 (struct ems_usb*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct ems_usb*,int ) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*,char*,...) ;
 int * FUNC_4 (int ,int ,int ,int *) ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int *) ;
 int FUNC_7 (struct urb*,int ,int ,int *,int ,int ,struct ems_usb*) ;
 int FUNC_8 (struct urb*,int ,int ,scalar_t__*,int ,int ,struct ems_usb*,int) ;
 int FUNC_9 (int ,int ,int *,int ) ;
 int FUNC_10 (struct urb*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (struct urb*,int ) ;
 int FUNC_14 (struct urb*) ;

__attribute__((used)) static int FUNC_15(struct ems_usb *VAR_14)
{
 struct net_device *VAR_15 = VAR_14->netdev;
 int VAR_16, VAR_17;

 VAR_14->intr_in_buffer[0] = 0;
 VAR_14->free_slots = 50;

 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  struct urb *VAR_18 = ((void*)0);
  u8 *VAR_19 = ((void*)0);


  VAR_18 = FUNC_5(0, VAR_6);
  if (!VAR_18) {
   VAR_16 = -VAR_5;
   break;
  }

  VAR_19 = FUNC_4(VAR_14->udev, VAR_9, VAR_6,
      &VAR_18->transfer_dma);
  if (!VAR_19) {
   FUNC_2(VAR_15, "No memory left for USB buffer\n");
   FUNC_10(VAR_18);
   VAR_16 = -VAR_5;
   break;
  }

  FUNC_7(VAR_18, VAR_14->udev, FUNC_11(VAR_14->udev, 2),
      VAR_19, VAR_9,
      VAR_12, VAR_14);
  VAR_18->transfer_flags |= VAR_11;
  FUNC_6(VAR_18, &VAR_14->rx_submitted);

  VAR_16 = FUNC_13(VAR_18, VAR_6);
  if (VAR_16) {
   FUNC_14(VAR_18);
   FUNC_9(VAR_14->udev, VAR_9, VAR_19,
       VAR_18->transfer_dma);
   FUNC_10(VAR_18);
   break;
  }


  FUNC_10(VAR_18);
 }


 if (VAR_17 == 0) {
  FUNC_3(VAR_15, "couldn't setup read URBs\n");
  return VAR_16;
 }


 if (VAR_17 < VAR_8)
  FUNC_3(VAR_15, "rx performance may be slow\n");


 FUNC_8(VAR_14->intr_urb, VAR_14->udev,
    FUNC_12(VAR_14->udev, 1),
    VAR_14->intr_in_buffer,
    VAR_7,
    VAR_13, VAR_14, 1);

 VAR_16 = FUNC_13(VAR_14->intr_urb, VAR_6);
 if (VAR_16) {
  FUNC_3(VAR_15, "intr URB submit failed: %d\n", VAR_16);

  return VAR_16;
 }


 VAR_16 = FUNC_0(VAR_14, VAR_2 | VAR_4);
 if (VAR_16)
  goto failed;


 VAR_16 = FUNC_0(VAR_14, VAR_3 | VAR_4);
 if (VAR_16)
  goto failed;


 VAR_16 = FUNC_0(VAR_14, VAR_1 | VAR_4);
 if (VAR_16)
  goto failed;

 VAR_16 = FUNC_1(VAR_14, VAR_10);
 if (VAR_16)
  goto failed;

 VAR_14->can.state = VAR_0;

 return 0;

failed:
 FUNC_3(VAR_15, "couldn't submit control: %d\n", VAR_16);

 return VAR_16;
}
