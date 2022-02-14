
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_gadget_driver {int dummy; } ;
struct usb_gadget {int dev; int ep0; } ;
struct gserial {int dummy; } ;
struct TYPE_4__ {struct usb_gadget* gadget; int serial; TYPE_1__* req; } ;
struct TYPE_3__ {int length; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct usb_gadget*) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ) ;
 int VAR_5 ;
 TYPE_1__* FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_gadget *VAR_6,
  struct usb_gadget_driver *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_4.gadget = VAR_6;

 VAR_4.req = FUNC_6(VAR_6->ep0, VAR_3);
 if (!VAR_4.req) {
  VAR_8 = -VAR_2;
  VAR_9 = 1;
  goto fail;
 }

 VAR_4.req->buf = FUNC_4(VAR_0, VAR_3);
 if (!VAR_4.req->buf) {
  VAR_8 = -VAR_2;
  VAR_9 = 2;
  goto fail;
 }

 VAR_4.req->length = VAR_0;
 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 < 0) {
  VAR_9 = 5;
  goto fail;
 }

 FUNC_2(&VAR_4.gadget->dev, "bind: success\n");
 return 0;

fail:
 FUNC_2(&VAR_6->dev, "bind: failure (%d:%d)\n", VAR_9, VAR_8);
 FUNC_1(VAR_6);
 return VAR_8;
}
