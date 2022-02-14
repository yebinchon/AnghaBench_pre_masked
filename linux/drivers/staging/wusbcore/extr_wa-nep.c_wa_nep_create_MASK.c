
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wahc {int nep_buffer_size; int nep_buffer; int * nep_urb; int nep_edc; } ;
struct device {int dummy; } ;
struct usb_interface {TYPE_2__* cur_altsetting; struct device dev; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* endpoint; } ;
struct TYPE_3__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int *) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,struct usb_device*,int ,int ,int,int ,struct wahc*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct usb_device*,int ) ;
 int FUNC_9 (struct wahc*,int ) ;
 int VAR_2 ;

int FUNC_10(struct wahc *VAR_3, struct usb_interface *VAR_4)
{
 int VAR_5;
 struct usb_endpoint_descriptor *VAR_6;
 struct usb_device *VAR_7 = FUNC_2(VAR_4);
 struct device *VAR_8 = &VAR_4->dev;

 FUNC_1(&VAR_3->nep_edc);
 VAR_6 = &VAR_4->cur_altsetting->endpoint[0].desc;
 VAR_3->nep_buffer_size = 1024;
 VAR_3->nep_buffer = FUNC_4(VAR_3->nep_buffer_size, VAR_1);
 if (!VAR_3->nep_buffer)
  goto error_nep_buffer;
 VAR_3->nep_urb = FUNC_5(0, VAR_1);
 if (VAR_3->nep_urb == ((void*)0))
  goto error_urb_alloc;
 FUNC_6(VAR_3->nep_urb, VAR_7,
    FUNC_8(VAR_7, VAR_6->bEndpointAddress),
    VAR_3->nep_buffer, VAR_3->nep_buffer_size,
    VAR_2, VAR_3, VAR_6->bInterval);
 VAR_5 = FUNC_9(VAR_3, VAR_1);
 if (VAR_5 < 0) {
  FUNC_0(VAR_8, "Cannot submit notification URB: %d\n", VAR_5);
  goto error_nep_arm;
 }
 return 0;

error_nep_arm:
 FUNC_7(VAR_3->nep_urb);
error_urb_alloc:
 FUNC_3(VAR_3->nep_buffer);
error_nep_buffer:
 return -VAR_0;
}
