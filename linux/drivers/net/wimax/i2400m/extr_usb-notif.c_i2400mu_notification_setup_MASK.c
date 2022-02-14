
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct TYPE_3__ {int notification; } ;
struct i2400mu {int notif_urb; int usb_dev; TYPE_1__ endpoint_cfg; TYPE_2__* usb_iface; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct device*,char*,struct i2400mu*,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400mu*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int,char*,int ,int ,struct i2400mu*,int ) ;
 int FUNC_7 (int ) ;
 struct usb_endpoint_descriptor* FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;

int FUNC_11(struct i2400mu *VAR_5)
{
 struct device *VAR_6 = &VAR_5->usb_iface->dev;
 int VAR_7, VAR_8 = 0;
 struct usb_endpoint_descriptor *VAR_9;
 char *VAR_10;

 FUNC_1(4, VAR_6, "(i2400m %p)\n", VAR_5);
 VAR_10 = FUNC_4(VAR_3, VAR_2 | VAR_1);
 if (VAR_10 == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto error_buf_alloc;
 }

 VAR_5->notif_urb = FUNC_5(0, VAR_2);
 if (!VAR_5->notif_urb) {
  VAR_8 = -VAR_0;
  goto error_alloc_urb;
 }
 VAR_9 = FUNC_8(VAR_5->usb_iface,
     VAR_5->endpoint_cfg.notification);
 VAR_7 = FUNC_9(VAR_5->usb_dev, VAR_9->bEndpointAddress);
 FUNC_6(VAR_5->notif_urb, VAR_5->usb_dev, VAR_7,
    VAR_10, VAR_3,
    VAR_4, VAR_5, VAR_9->bInterval);
 VAR_8 = FUNC_10(VAR_5->notif_urb, VAR_2);
 if (VAR_8 != 0) {
  FUNC_2(VAR_6, "notification: cannot submit URB: %d\n", VAR_8);
  goto error_submit;
 }
 FUNC_0(4, VAR_6, "(i2400m %p) = %d\n", VAR_5, VAR_8);
 return VAR_8;

error_submit:
 FUNC_7(VAR_5->notif_urb);
error_alloc_urb:
 FUNC_3(VAR_10);
error_buf_alloc:
 FUNC_0(4, VAR_6, "(i2400m %p) = %d\n", VAR_5, VAR_8);
 return VAR_8;
}
