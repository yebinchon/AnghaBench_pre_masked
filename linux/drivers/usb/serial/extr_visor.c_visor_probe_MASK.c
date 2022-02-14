
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_serial {TYPE_4__* dev; } ;
struct usb_device_id {scalar_t__ idVendor; scalar_t__ idProduct; scalar_t__ driver_info; } ;
struct TYPE_5__ {scalar_t__ bDeviceClass; scalar_t__ bDeviceSubClass; } ;
struct TYPE_8__ {TYPE_3__* actconfig; int dev; TYPE_1__ descriptor; } ;
struct TYPE_6__ {int bConfigurationValue; } ;
struct TYPE_7__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(struct usb_serial *VAR_5,
     const struct usb_device_id *VAR_6)
{
 int VAR_7 = 0;
 int (*VAR_8)(struct usb_serial *VAR_9,
     const struct usb_device_id *VAR_10);





 if (VAR_6->idVendor == VAR_2 &&
  VAR_6->idProduct == VAR_1 &&
  VAR_5->dev->descriptor.bDeviceClass == VAR_4 &&
  VAR_5->dev->descriptor.bDeviceSubClass ==
   VAR_3)
  return -VAR_0;

 if (VAR_5->dev->actconfig->desc.bConfigurationValue != 1) {
  FUNC_0(&VAR_5->dev->dev, "active config #%d != 1 ??\n",
   VAR_5->dev->actconfig->desc.bConfigurationValue);
  return -VAR_0;
 }

 if (VAR_6->driver_info) {
  VAR_8 = (void *)VAR_6->driver_info;
  VAR_7 = VAR_8(VAR_5, VAR_6);
 }

 return VAR_7;
}
