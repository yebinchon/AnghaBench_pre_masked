
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ actual; scalar_t__ length; struct usb_composite_dev* context; scalar_t__ status; } ;
struct usb_ep {scalar_t__ driver_data; } ;
struct usb_composite_dev {int setup_pending; int os_desc_pending; struct usb_request* os_desc_req; struct usb_request* req; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,char*,struct usb_request*) ;

__attribute__((used)) static void FUNC_2(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct usb_composite_dev *VAR_2;

 if (VAR_1->status || VAR_1->actual != VAR_1->length)
  FUNC_0((struct usb_composite_dev *) VAR_0->driver_data,
    "setup complete --> %d, %d/%d\n",
    VAR_1->status, VAR_1->actual, VAR_1->length);
 if (!VAR_1->context)
  return;

 VAR_2 = VAR_1->context;

 if (VAR_2->req == VAR_1)
  VAR_2->setup_pending = 0;
 else if (VAR_2->os_desc_req == VAR_1)
  VAR_2->os_desc_pending = 0;
 else
  FUNC_1(1, "unknown request %p\n", VAR_1);
}
