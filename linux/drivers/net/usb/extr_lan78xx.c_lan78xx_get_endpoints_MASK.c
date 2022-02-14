
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct TYPE_3__ {unsigned int bNumEndpoints; } ;
struct usb_host_interface {struct usb_host_endpoint* endpoint; TYPE_1__ desc; } ;
struct TYPE_4__ {int bmAttributes; int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_2__ desc; } ;
struct lan78xx_net {struct usb_host_endpoint* ep_intr; int udev; int pipe_out; int pipe_in; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct lan78xx_net *VAR_2, struct usb_interface *VAR_3)
{
 int VAR_4;
 struct usb_host_interface *VAR_5 = ((void*)0);
 struct usb_host_endpoint *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 struct usb_host_endpoint *VAR_8 = ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_altsetting; VAR_4++) {
  unsigned VAR_9;

  VAR_6 = ((void*)0);
  VAR_7 = ((void*)0);
  VAR_8 = ((void*)0);
  VAR_5 = VAR_3->altsetting + VAR_4;

  for (VAR_9 = 0; VAR_9 < VAR_5->desc.bNumEndpoints; VAR_9++) {
   struct usb_host_endpoint *VAR_10;
   int VAR_11 = 0;

   VAR_10 = VAR_5->endpoint + VAR_9;
   switch (VAR_10->desc.bmAttributes) {
   case 128:
    if (!FUNC_0(&VAR_10->desc))
     continue;
    VAR_11 = 1;

   case 129:
    break;
   default:
    continue;
   }
   if (FUNC_0(&VAR_10->desc)) {
    if (!VAR_11 && !VAR_6)
     VAR_6 = VAR_10;
    else if (VAR_11 && !VAR_8)
     VAR_8 = VAR_10;
   } else {
    if (!VAR_7)
     VAR_7 = VAR_10;
   }
  }
  if (VAR_6 && VAR_7)
   break;
 }
 if (!VAR_5 || !VAR_6 || !VAR_7)
  return -VAR_0;

 VAR_2->pipe_in = FUNC_1(VAR_2->udev,
           VAR_6->desc.bEndpointAddress &
           VAR_1);
 VAR_2->pipe_out = FUNC_2(VAR_2->udev,
     VAR_7->desc.bEndpointAddress &
     VAR_1);
 VAR_2->ep_intr = VAR_8;

 return 0;
}
