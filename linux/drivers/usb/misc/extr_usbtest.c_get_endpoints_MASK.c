
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usbtest_dev {int out_int_pipe; TYPE_3__* int_out; int in_int_pipe; TYPE_3__* int_in; int out_iso_pipe; TYPE_3__* iso_out; int in_iso_pipe; TYPE_3__* iso_in; int out_pipe; int in_pipe; TYPE_1__* info; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct TYPE_6__ {scalar_t__ bAlternateSetting; unsigned int bNumEndpoints; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_2__ desc; struct usb_host_endpoint* endpoint; } ;
struct TYPE_7__ {int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_3__ desc; } ;
struct usb_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ alt; int iso; int intr; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int,struct usb_host_endpoint**,struct usb_host_endpoint**,struct usb_host_endpoint*) ;
 scalar_t__ VAR_2 ;
 struct usb_device* FUNC_1 (struct usbtest_dev*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct usb_device*,int) ;
 int FUNC_5 (struct usb_device*,int) ;
 int FUNC_6 (struct usb_device*,int) ;
 int FUNC_7 (struct usb_device*,int ,scalar_t__) ;
 int FUNC_8 (struct usb_device*,int) ;
 int FUNC_9 (struct usb_device*,int) ;
 int FUNC_10 (struct usb_device*,int) ;

__attribute__((used)) static int
FUNC_11(struct usbtest_dev *VAR_3, struct usb_interface *VAR_4)
{
 int VAR_5;
 struct usb_host_interface *VAR_6;
 struct usb_host_endpoint *VAR_7, *VAR_8;
 struct usb_host_endpoint *VAR_9, *VAR_10;
 struct usb_host_endpoint *VAR_11, *VAR_12;
 struct usb_device *VAR_13;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_altsetting; VAR_5++) {
  unsigned VAR_14;

  VAR_7 = VAR_8 = ((void*)0);
  VAR_9 = VAR_10 = ((void*)0);
  VAR_11 = VAR_12 = ((void*)0);
  VAR_6 = VAR_4->altsetting + VAR_5;

  if (VAR_2 >= 0 &&
    VAR_2 != VAR_6->desc.bAlternateSetting)
   continue;




  for (VAR_14 = 0; VAR_14 < VAR_6->desc.bNumEndpoints; VAR_14++) {
   struct usb_host_endpoint *VAR_15;
   int VAR_16;

   VAR_15 = VAR_6->endpoint + VAR_14;
   VAR_16 = FUNC_2(&VAR_15->desc);

   switch (FUNC_3(&VAR_15->desc)) {
   case 130:
    FUNC_0(VAR_16, &VAR_7, &VAR_8, VAR_15);
    continue;
   case 129:
    if (VAR_3->info->intr)
     FUNC_0(VAR_16, &VAR_11, &VAR_12, VAR_15);
    continue;
   case 128:
    if (VAR_3->info->iso)
     FUNC_0(VAR_16, &VAR_9, &VAR_10, VAR_15);

   default:
    continue;
   }
  }
  if ((VAR_7 && VAR_8) || VAR_9 || VAR_10 || VAR_11 || VAR_12)
   goto found;
 }
 return -VAR_0;

found:
 VAR_13 = FUNC_1(VAR_3);
 VAR_3->info->alt = VAR_6->desc.bAlternateSetting;
 if (VAR_6->desc.bAlternateSetting != 0) {
  VAR_5 = FUNC_7(VAR_13,
    VAR_6->desc.bInterfaceNumber,
    VAR_6->desc.bAlternateSetting);
  if (VAR_5 < 0)
   return VAR_5;
 }

 if (VAR_7)
  VAR_3->in_pipe = FUNC_4(VAR_13,
   VAR_7->desc.bEndpointAddress & VAR_1);
 if (VAR_8)
  VAR_3->out_pipe = FUNC_8(VAR_13,
   VAR_8->desc.bEndpointAddress & VAR_1);

 if (VAR_9) {
  VAR_3->iso_in = &VAR_9->desc;
  VAR_3->in_iso_pipe = FUNC_6(VAR_13,
    VAR_9->desc.bEndpointAddress
     & VAR_1);
 }

 if (VAR_10) {
  VAR_3->iso_out = &VAR_10->desc;
  VAR_3->out_iso_pipe = FUNC_10(VAR_13,
    VAR_10->desc.bEndpointAddress
     & VAR_1);
 }

 if (VAR_11) {
  VAR_3->int_in = &VAR_11->desc;
  VAR_3->in_int_pipe = FUNC_5(VAR_13,
    VAR_11->desc.bEndpointAddress
     & VAR_1);
 }

 if (VAR_12) {
  VAR_3->int_out = &VAR_12->desc;
  VAR_3->out_int_pipe = FUNC_9(VAR_13,
    VAR_12->desc.bEndpointAddress
     & VAR_1);
 }
 return 0;
}
