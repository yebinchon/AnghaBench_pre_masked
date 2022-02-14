
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bEndpointAddress; } ;
struct usb_host_endpoint {struct ep_device* ep_dev; TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;
struct TYPE_7__ {struct device* parent; int * type; int groups; } ;
struct ep_device {TYPE_2__ dev; struct usb_device* udev; TYPE_1__* desc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 struct ep_device* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;

int FUNC_5(struct device *VAR_4,
   struct usb_host_endpoint *VAR_5,
   struct usb_device *VAR_6)
{
 struct ep_device *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto exit;
 }

 VAR_7->desc = &VAR_5->desc;
 VAR_7->udev = VAR_6;
 VAR_7->dev.groups = VAR_2;
 VAR_7->dev.type = &VAR_3;
 VAR_7->dev.parent = VAR_4;
 FUNC_0(&VAR_7->dev, "ep_%02x", VAR_5->desc.bEndpointAddress);

 VAR_8 = FUNC_2(&VAR_7->dev);
 if (VAR_8)
  goto error_register;

 FUNC_1(&VAR_7->dev);
 VAR_5->ep_dev = VAR_7;
 return VAR_8;

error_register:
 FUNC_4(&VAR_7->dev);
exit:
 return VAR_8;
}
