
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int dev; } ;
struct vprbrd {int* buf; TYPE_3__* usb_dev; TYPE_1__ pdev; int lock; } ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_9__ {int devnum; TYPE_2__* bus; } ;
struct TYPE_8__ {int busnum; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int,int,int ,int ) ;
 int FUNC_3 (int *,struct vprbrd*) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct vprbrd*) ;
 struct vprbrd* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*,int,int ,int ,int,int,int*,int,int ) ;
 TYPE_3__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (struct usb_interface*,struct vprbrd*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_14(struct usb_interface *VAR_7,
         const struct usb_device_id *VAR_8)
{
 struct vprbrd *VAR_9;

 u16 VAR_10 = 0;
 int VAR_11, VAR_12;


 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_8(&VAR_9->lock);

 VAR_9->usb_dev = FUNC_10(FUNC_4(VAR_7));


 FUNC_13(VAR_7, VAR_9);
 FUNC_3(&VAR_9->pdev.dev, VAR_9);


 VAR_11 = FUNC_12(VAR_9->usb_dev, 0);
 VAR_12 = FUNC_9(VAR_9->usb_dev, VAR_11, VAR_2,
  VAR_5, 0x0000, 0x0000, VAR_9->buf, 1,
  VAR_4);
 if (VAR_12 == 1)
  VAR_10 = VAR_9->buf[0];

 VAR_12 = FUNC_9(VAR_9->usb_dev, VAR_11, VAR_3,
  VAR_5, 0x0000, 0x0000, VAR_9->buf, 1,
  VAR_4);
 if (VAR_12 == 1) {
  VAR_10 <<= 8;
  VAR_10 = VAR_10 | VAR_9->buf[0];
 }

 FUNC_2(&VAR_7->dev,
   "version %x.%02x found at bus %03d address %03d\n",
   VAR_10 >> 8, VAR_10 & 0xff,
   VAR_9->usb_dev->bus->busnum, VAR_9->usb_dev->devnum);

 VAR_12 = FUNC_7(&VAR_7->dev, VAR_6,
          FUNC_0(VAR_6));
 if (VAR_12 != 0) {
  FUNC_1(&VAR_7->dev, "Failed to add mfd devices to core.");
  goto error;
 }

 return 0;

error:
 if (VAR_9) {
  FUNC_11(VAR_9->usb_dev);
  FUNC_5(VAR_9);
 }

 return VAR_12;
}
