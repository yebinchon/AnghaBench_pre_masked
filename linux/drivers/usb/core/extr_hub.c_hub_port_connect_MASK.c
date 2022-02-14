
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct usb_port {int dev; struct usb_device* child; int port_owner; } ;
struct usb_hub {unsigned int mA_per_port; struct usb_device* hdev; int * intfdev; int leds; int * indicator; scalar_t__ has_indicators; int removed_bits; struct usb_port** ports; } ;
struct usb_hcd {TYPE_1__* driver; scalar_t__ usb_phy; } ;
struct TYPE_4__ {scalar_t__ bDeviceClass; int bcdUSB; } ;
struct usb_device {scalar_t__ speed; unsigned int bus_mA; scalar_t__ devnum; int quirks; scalar_t__ state; scalar_t__ parent; TYPE_2__ descriptor; int dev; int wusb; scalar_t__ level; int bus; } ;
struct TYPE_3__ {int (* relinquish_port ) (struct usb_hcd*,int) ;int (* port_handed_over ) (struct usb_hcd*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_hub*,struct usb_device*,int) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_7 (struct usb_device*) ;
 scalar_t__ FUNC_8 (struct usb_hub*) ;
 scalar_t__ FUNC_9 (struct usb_device*) ;
 int FUNC_10 (struct usb_hub*) ;
 int FUNC_11 (struct usb_hub*,int) ;
 int FUNC_12 (struct usb_hub*,int,int) ;
 int FUNC_13 (struct usb_hub*,struct usb_device*,int,int) ;
 int FUNC_14 (struct usb_hub*) ;
 int FUNC_15 (struct usb_hub*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct usb_hub*,int) ;
 scalar_t__ FUNC_21 () ;
 int FUNC_22 (int ,int *,int ) ;
 int FUNC_23 (struct usb_device*) ;
 int FUNC_24 (struct usb_device*,int,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (struct usb_hcd*,int) ;
 int FUNC_28 (struct usb_hcd*,int) ;
 int VAR_21 ;
 scalar_t__ FUNC_29 (int,int ) ;
 struct usb_device* FUNC_30 (struct usb_device*,int ,int) ;
 int FUNC_31 (struct usb_device**) ;
 int FUNC_32 (struct usb_device*) ;
 int FUNC_33 (struct usb_device*,int ,int ,int*) ;
 int FUNC_34 (struct usb_device*,struct usb_hub*,int,int) ;
 int FUNC_35 (struct usb_port*) ;
 int FUNC_36 (struct usb_device*) ;
 int FUNC_37 (scalar_t__,scalar_t__) ;
 int FUNC_38 (scalar_t__,scalar_t__) ;
 int VAR_22 ;
 int FUNC_39 (struct usb_device*) ;
 int FUNC_40 (struct usb_device*,int ) ;
 int FUNC_41 (struct usb_port*) ;

__attribute__((used)) static void FUNC_42(struct usb_hub *VAR_23, int VAR_24, u16 VAR_25,
  u16 VAR_26)
{
 int VAR_27 = -VAR_0;
 int VAR_28;
 unsigned VAR_29;
 struct usb_device *VAR_30 = VAR_23->hdev;
 struct usb_hcd *VAR_31 = FUNC_0(VAR_30->bus);
 struct usb_port *VAR_32 = VAR_23->ports[VAR_24 - 1];
 struct usb_device *VAR_33 = VAR_32->child;
 static int VAR_34 = -1;


 if (VAR_33) {
  if (VAR_31->usb_phy && !VAR_30->parent)
   FUNC_38(VAR_31->usb_phy, VAR_33->speed);
  FUNC_31(&VAR_32->child);
 }




 if (!(VAR_25 & VAR_8) ||
   (VAR_26 & VAR_9))
  FUNC_3(VAR_24, VAR_23->removed_bits);

 if (VAR_26 & (VAR_9 |
    VAR_10)) {
  VAR_27 = FUNC_11(VAR_23, VAR_24);
  if (VAR_27 < 0) {
   if (VAR_27 != -VAR_0 &&
    VAR_24 != VAR_34 &&
    FUNC_21())
    FUNC_5(&VAR_32->dev, "connect-debounce failed\n");
   VAR_25 &= ~VAR_8;
   VAR_34 = VAR_24;
  } else {
   VAR_25 = VAR_27;
  }
 }




 if (!(VAR_25 & VAR_8) ||
   FUNC_29(VAR_24, VAR_23->removed_bits)) {





  if (FUNC_8(VAR_23)
    && !FUNC_20(VAR_23, VAR_25)
    && !VAR_32->port_owner)
   FUNC_24(VAR_30, VAR_24, VAR_7);

  if (VAR_25 & VAR_11)
   goto done;
  return;
 }
 if (FUNC_9(VAR_23->hdev))
  VAR_29 = 150;
 else
  VAR_29 = 100;

 VAR_27 = 0;
 for (VAR_28 = 0; VAR_28 < VAR_4; VAR_28++) {




  VAR_33 = FUNC_30(VAR_30, VAR_30->bus, VAR_24);
  if (!VAR_33) {
   FUNC_5(&VAR_32->dev,
     "couldn't allocate usb_device\n");
   goto done;
  }

  FUNC_40(VAR_33, VAR_18);
  VAR_33->bus_mA = VAR_23->mA_per_port;
  VAR_33->level = VAR_30->level + 1;
  VAR_33->wusb = FUNC_10(VAR_23);


  if (FUNC_9(VAR_23->hdev))
   VAR_33->speed = VAR_15;
  else
   VAR_33->speed = VAR_16;

  FUNC_2(VAR_33);
  if (VAR_33->devnum <= 0) {
   VAR_27 = -VAR_1;
   goto loop;
  }


  FUNC_35(VAR_32);
  VAR_27 = FUNC_13(VAR_23, VAR_33, VAR_24, VAR_28);
  FUNC_41(VAR_32);
  if (VAR_27 < 0)
   goto loop;

  if (VAR_33->quirks & VAR_12)
   FUNC_17(2000);







  if (VAR_33->descriptor.bDeviceClass == VAR_5
    && VAR_33->bus_mA <= VAR_29) {
   u16 VAR_35;

   VAR_27 = FUNC_33(VAR_33, VAR_13, 0,
     &VAR_35);
   if (VAR_27) {
    FUNC_4(&VAR_33->dev, "get status %d ?\n", VAR_27);
    goto loop_disable;
   }
   if ((VAR_35 & (1 << VAR_6)) == 0) {
    FUNC_5(&VAR_33->dev,
     "can't connect bus-powered hub "
     "to this port\n");
    if (VAR_23->has_indicators) {
     VAR_23->indicator[VAR_24-1] =
      VAR_3;
     FUNC_22(
      VAR_21,
      &VAR_23->leds, 0);
    }
    VAR_27 = -VAR_1;
    goto loop_disable;
   }
  }


  if (FUNC_16(VAR_33->descriptor.bcdUSB) >= 0x0200
    && VAR_33->speed == VAR_14
    && VAR_20 != 0)
   FUNC_1(VAR_23, VAR_33, VAR_24);





  VAR_27 = 0;

  FUNC_18(&VAR_22);





  FUNC_25(&VAR_19);
  if (VAR_30->state == VAR_17)
   VAR_27 = -VAR_1;
  else
   VAR_32->child = VAR_33;
  FUNC_26(&VAR_19);
  FUNC_19(&VAR_22);


  if (!VAR_27) {
   VAR_27 = FUNC_36(VAR_33);
   if (VAR_27) {
    FUNC_18(&VAR_22);
    FUNC_25(&VAR_19);
    VAR_32->child = ((void*)0);
    FUNC_26(&VAR_19);
    FUNC_19(&VAR_22);
   } else {
    if (VAR_31->usb_phy && !VAR_30->parent)
     FUNC_37(VAR_31->usb_phy,
       VAR_33->speed);
   }
  }

  if (VAR_27)
   goto loop_disable;

  VAR_27 = FUNC_15(VAR_23);
  if (VAR_27)
   FUNC_4(VAR_23->intfdev, "%dmA power budget left\n", VAR_27);

  return;

loop_disable:
  FUNC_12(VAR_23, VAR_24, 1);
loop:
  FUNC_32(VAR_33);
  FUNC_23(VAR_33);
  FUNC_7(VAR_33);
  FUNC_39(VAR_33);
  if ((VAR_27 == -VAR_1) || (VAR_27 == -VAR_2))
   break;


  if (VAR_28 == (VAR_4 / 2) - 1) {
   FUNC_6(&VAR_32->dev, "attempt power cycle\n");
   FUNC_34(VAR_30, VAR_23, VAR_24, 0);
   FUNC_17(2 * FUNC_14(VAR_23));
   FUNC_34(VAR_30, VAR_23, VAR_24, 1);
   FUNC_17(FUNC_14(VAR_23));
  }
 }
 if (VAR_23->hdev->parent ||
   !VAR_31->driver->port_handed_over ||
   !(VAR_31->driver->port_handed_over)(VAR_31, VAR_24)) {
  if (VAR_27 != -VAR_1 && VAR_27 != -VAR_0)
   FUNC_5(&VAR_32->dev,
     "unable to enumerate USB device\n");
 }

done:
 FUNC_12(VAR_23, VAR_24, 1);
 if (VAR_31->driver->relinquish_port && !VAR_23->hdev->parent) {
  if (VAR_27 != -VAR_1 && VAR_27 != -VAR_0)
   VAR_31->driver->relinquish_port(VAR_31, VAR_24);
 }
}
