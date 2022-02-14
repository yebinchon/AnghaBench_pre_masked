
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct mt76_usb {void** out_ep; void** in_ep; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_1 (struct usb_endpoint_descriptor*) ;
 void* FUNC_2 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int
FUNC_3(struct usb_interface *VAR_3,
      struct mt76_usb *VAR_4)
{
 struct usb_host_interface *VAR_5 = VAR_3->cur_altsetting;
 struct usb_endpoint_descriptor *VAR_6;
 int VAR_7, VAR_8 = 0, VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5->desc.bNumEndpoints; VAR_7++) {
  VAR_6 = &VAR_5->endpoint[VAR_7].desc;

  if (FUNC_0(VAR_6) &&
      VAR_8 < VAR_1) {
   VAR_4->in_ep[VAR_8] = FUNC_2(VAR_6);
   VAR_8++;
  } else if (FUNC_1(VAR_6) &&
      VAR_9 < VAR_2) {
   VAR_4->out_ep[VAR_9] = FUNC_2(VAR_6);
   VAR_9++;
  }
 }

 if (VAR_8 != VAR_1 || VAR_9 != VAR_2)
  return -VAR_0;
 return 0;
}
