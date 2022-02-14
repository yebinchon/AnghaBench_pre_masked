
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct usb_port {int quirks; int dev; } ;
struct usb_hub {TYPE_2__* hdev; int * intfdev; int warm_reset_bits; struct usb_port** ports; } ;
struct usb_hcd {TYPE_1__* driver; } ;
struct usb_device {int bus; } ;
struct TYPE_6__ {int quirks; } ;
struct TYPE_5__ {int (* reset_device ) (struct usb_hcd*,struct usb_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
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
 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 int VAR_15 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (struct usb_hub*,int,int *,int *) ;
 int FUNC_7 (struct usb_hub*,int,struct usb_device*,unsigned int,int) ;
 scalar_t__ FUNC_8 (struct usb_hub*,int,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*,int,int ) ;
 int FUNC_11 (struct usb_hcd*,struct usb_device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct usb_device*,int ) ;
 int FUNC_14 (TYPE_2__*,int,int ) ;
 int FUNC_15 (struct usb_device*,int ) ;
 int FUNC_16 (int,int) ;

__attribute__((used)) static int FUNC_17(struct usb_hub *VAR_16, int VAR_17,
   struct usb_device *VAR_18, unsigned int VAR_19, bool VAR_20)
{
 int VAR_21, VAR_22;
 u16 VAR_23, VAR_24;
 struct usb_port *VAR_25 = VAR_16->ports[VAR_17 - 1];
 int VAR_26;

 if (!FUNC_5(VAR_16->hdev)) {
  if (VAR_20) {
   FUNC_3(VAR_16->intfdev, "only USB3 hub support "
      "warm reset\n");
   return -VAR_0;
  }



  FUNC_4(&VAR_15);
 } else if (!VAR_20) {




  if (FUNC_6(VAR_16, VAR_17, &VAR_24, &VAR_23) == 0)
   if (FUNC_8(VAR_16, VAR_17,
       VAR_24))
    VAR_20 = 1;
 }
 FUNC_1(VAR_17, VAR_16->warm_reset_bits);


 for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++) {
  VAR_22 = FUNC_10(VAR_16->hdev, VAR_17, (VAR_20 ?
     VAR_5 :
     VAR_10));
  if (VAR_22 == -VAR_1) {
   ;
  } else if (VAR_22) {
   FUNC_3(&VAR_25->dev,
     "cannot %sreset (err = %d)\n",
     VAR_20 ? "warm " : "", VAR_22);
  } else {
   VAR_22 = FUNC_7(VAR_16, VAR_17, VAR_18, VAR_19,
        VAR_20);
   if (VAR_22 && VAR_22 != -VAR_2 && VAR_22 != -VAR_1)
    FUNC_2(VAR_16->intfdev,
      "port_wait_reset: err = %d\n",
      VAR_22);
  }


  if (VAR_22 == 0 || VAR_22 == -VAR_2 || VAR_22 == -VAR_1) {
   FUNC_14(VAR_16->hdev, VAR_17,
     VAR_9);

   if (!FUNC_5(VAR_16->hdev))
    goto done;

   FUNC_14(VAR_16->hdev, VAR_17,
     VAR_6);
   FUNC_14(VAR_16->hdev, VAR_17,
     VAR_8);

   if (VAR_18)
    FUNC_14(VAR_16->hdev, VAR_17,
     VAR_7);





   if (FUNC_6(VAR_16, VAR_17,
     &VAR_24, &VAR_23) < 0)
    goto done;

   if (!FUNC_8(VAR_16, VAR_17,
     VAR_24))
    goto done;





   if (!VAR_20) {
    FUNC_2(&VAR_25->dev,
      "hot reset failed, warm reset\n");
    VAR_20 = 1;
   }
  }

  FUNC_2(&VAR_25->dev,
    "not enabled, trying %sreset again...\n",
    VAR_20 ? "warm " : "");
  VAR_19 = VAR_3;
 }

 FUNC_3(&VAR_25->dev, "Cannot enable. Maybe the USB cable is bad?\n");

done:
 if (VAR_22 == 0) {
  if (VAR_25->quirks & VAR_11)
   FUNC_16(10000, 12000);
  else {

   VAR_26 = 10 + 40;


   if (VAR_16->hdev->quirks & VAR_12)
    VAR_26 += 100;

   FUNC_9(VAR_26);
  }

  if (VAR_18) {
   struct usb_hcd *VAR_27 = FUNC_0(VAR_18->bus);

   FUNC_13(VAR_18, 0);



   if (VAR_27->driver->reset_device)
    VAR_27->driver->reset_device(VAR_27, VAR_18);

   FUNC_15(VAR_18, VAR_13);
  }
 } else {
  if (VAR_18)
   FUNC_15(VAR_18, VAR_14);
 }

 if (!FUNC_5(VAR_16->hdev))
  FUNC_12(&VAR_15);

 return VAR_22;
}
