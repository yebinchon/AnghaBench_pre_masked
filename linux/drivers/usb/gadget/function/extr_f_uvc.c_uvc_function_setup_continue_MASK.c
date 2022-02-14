
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* config; } ;
struct uvc_device {TYPE_2__ func; } ;
struct usb_composite_dev {int dummy; } ;
struct TYPE_3__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*) ;

void FUNC_1(struct uvc_device *VAR_0)
{
 struct usb_composite_dev *VAR_1 = VAR_0->func.config->cdev;

 FUNC_0(VAR_1);
}
