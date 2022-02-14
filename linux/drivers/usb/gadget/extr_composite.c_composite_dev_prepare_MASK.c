
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_gadget {TYPE_1__* ep0; int dev; } ;
struct usb_composite_driver {int dummy; } ;
struct usb_composite_dev {TYPE_2__* req; struct usb_composite_driver* driver; struct usb_gadget* gadget; } ;
struct TYPE_6__ {int buf; struct usb_composite_dev* context; int complete; } ;
struct TYPE_5__ {struct usb_composite_dev* driver_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct usb_gadget*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (struct usb_gadget*) ;

int FUNC_7(struct usb_composite_driver *VAR_7,
  struct usb_composite_dev *VAR_8)
{
 struct usb_gadget *VAR_9 = VAR_8->gadget;
 int VAR_10 = -VAR_1;


 VAR_8->req = FUNC_3(VAR_9->ep0, VAR_2);
 if (!VAR_8->req)
  return -VAR_1;

 VAR_8->req->buf = FUNC_2(VAR_3, VAR_2);
 if (!VAR_8->req->buf)
  goto fail;

 VAR_10 = FUNC_0(&VAR_9->dev, &VAR_6);
 if (VAR_10)
  goto fail_dev;

 VAR_8->req->complete = VAR_5;
 VAR_8->req->context = VAR_8;
 VAR_9->ep0->driver_data = VAR_8;

 VAR_8->driver = VAR_7;






 if (VAR_0 <= VAR_4)
  FUNC_6(VAR_9);





 FUNC_4(VAR_9);
 return 0;
fail_dev:
 FUNC_1(VAR_8->req->buf);
fail:
 FUNC_5(VAR_9->ep0, VAR_8->req);
 VAR_8->req = ((void*)0);
 return VAR_10;
}
