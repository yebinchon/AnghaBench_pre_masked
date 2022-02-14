
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ context; scalar_t__ actual; scalar_t__ status; } ;
struct usb_ep {struct ep_data* driver_data; } ;
struct ep_data {scalar_t__ status; } ;
struct completion {int dummy; } ;


 int FUNC_0 (struct completion*) ;

__attribute__((used)) static void FUNC_1 (struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct ep_data *VAR_2 = VAR_0->driver_data;

 if (!VAR_1->context)
  return;
 if (VAR_1->status)
  VAR_2->status = VAR_1->status;
 else
  VAR_2->status = VAR_1->actual;
 FUNC_0 ((struct completion *)VAR_1->context);
}
