
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct usbnet {int udev; int out; int in; struct usb_host_endpoint* status; } ;
struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct TYPE_7__ {int bmAttributes; int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_3__ desc; } ;
struct TYPE_5__ {scalar_t__ bNumEndpoints; } ;
struct TYPE_6__ {struct usb_host_endpoint* endpoint; TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct usbnet *VAR_2, struct usb_interface *VAR_3)
{
 struct usb_host_endpoint *VAR_4, *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 u8 VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->cur_altsetting->desc.bNumEndpoints; VAR_7++) {
  VAR_4 = VAR_3->cur_altsetting->endpoint + VAR_7;


  if (!FUNC_1(&VAR_4->desc))
   continue;

  switch (VAR_4->desc.bmAttributes & VAR_1) {
  case 128:
   if (FUNC_0(&VAR_4->desc)) {
    if (!VAR_2->status)
     VAR_2->status = VAR_4;
   }
   break;

  case 129:
   if (FUNC_0(&VAR_4->desc)) {
    if (!VAR_5)
     VAR_5 = VAR_4;
   } else {
    if (!VAR_6)
     VAR_6 = VAR_4;
   }
   break;

  default:
   break;
  }
 }
 if (VAR_5 && !VAR_2->in)
  VAR_2->in = FUNC_2(VAR_2->udev,
       VAR_5->desc.bEndpointAddress &
       VAR_0);
 if (VAR_6 && !VAR_2->out)
  VAR_2->out = FUNC_3(VAR_2->udev,
        VAR_6->desc.bEndpointAddress &
        VAR_0);
}
