
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int kobj; } ;
struct usb_port {TYPE_7__ dev; } ;
struct usb_hub {int child_usage_bits; struct usb_port** ports; } ;
struct TYPE_17__ {int kobj; int devt; } ;
struct usb_device {int devnum; int portnum; TYPE_2__ dev; int ep0; scalar_t__ parent; scalar_t__ manufacturer; scalar_t__ product; scalar_t__ serial; TYPE_1__* bus; } ;
struct TYPE_16__ {int busnum; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (TYPE_2__*,char*,int,int,int) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (struct usb_device*) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int *,int *,char*) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int,int ) ;
 int FUNC_21 (TYPE_2__*,int *,struct usb_device*) ;
 int FUNC_22 (struct usb_device*) ;
 int FUNC_23 (struct usb_device*) ;
 struct usb_hub* FUNC_24 (scalar_t__) ;
 int FUNC_25 (struct usb_device*) ;
 int FUNC_26 (struct usb_device*,int ) ;

int FUNC_27(struct usb_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->parent) {




  FUNC_7(&VAR_2->dev, 0);
 }


 FUNC_13(&VAR_2->dev);
 FUNC_10(&VAR_2->dev);
 FUNC_15(&VAR_2->dev);
 FUNC_9(&VAR_2->dev);




 FUNC_22(VAR_2);

 VAR_3 = FUNC_23(VAR_2);
 if (VAR_3 < 0)
  goto fail;
 FUNC_3(&VAR_2->dev, "udev %d, busnum %d, minor = %d\n",
   VAR_2->devnum, VAR_2->bus->busnum,
   (((VAR_2->bus->busnum-1) * 128) + (VAR_2->devnum-1)));

 VAR_2->dev.devt = FUNC_0(VAR_0,
   (((VAR_2->bus->busnum-1) * 128) + (VAR_2->devnum-1)));


 FUNC_2(VAR_2);

 if (VAR_2->serial)
  FUNC_1(VAR_2->serial, FUNC_17(VAR_2->serial));
 if (VAR_2->product)
  FUNC_1(VAR_2->product, FUNC_17(VAR_2->product));
 if (VAR_2->manufacturer)
  FUNC_1(VAR_2->manufacturer,
          FUNC_17(VAR_2->manufacturer));

 FUNC_6(&VAR_2->dev);


 if (VAR_2->parent)
  FUNC_16(VAR_2);





 VAR_3 = FUNC_5(&VAR_2->dev);
 if (VAR_3) {
  FUNC_4(&VAR_2->dev, "can't device_add, error %d\n", VAR_3);
  goto fail;
 }


 if (VAR_2->parent) {
  struct usb_hub *VAR_4 = FUNC_24(VAR_2->parent);
  int VAR_5 = VAR_2->portnum;
  struct usb_port *VAR_6 = VAR_4->ports[VAR_5 - 1];

  VAR_3 = FUNC_18(&VAR_2->dev.kobj,
    &VAR_6->dev.kobj, "port");
  if (VAR_3)
   goto fail;

  VAR_3 = FUNC_18(&VAR_6->dev.kobj,
    &VAR_2->dev.kobj, "device");
  if (VAR_3) {
   FUNC_19(&VAR_2->dev.kobj, "port");
   goto fail;
  }

  if (!FUNC_20(VAR_5, VAR_4->child_usage_bits))
   FUNC_11(&VAR_6->dev);
 }

 (void) FUNC_21(&VAR_2->dev, &VAR_2->ep0, VAR_2);
 FUNC_25(VAR_2);
 FUNC_12(&VAR_2->dev);
 return VAR_3;

fail:
 FUNC_26(VAR_2, VAR_1);
 FUNC_8(&VAR_2->dev);
 FUNC_14(&VAR_2->dev);
 return VAR_3;
}
