
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_cardstate {int * udev; int * interface; int * bulk_out_buffer; int * rcvbuf; int * bulk_out_urb; int * read_urb; } ;
struct TYPE_2__ {struct usb_cardstate* usb; } ;
struct cardstate {int * dev; int write_tasklet; TYPE_1__ hw; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct cardstate*) ;
 int FUNC_2 (struct cardstate*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct cardstate* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_10(struct usb_interface *VAR_0)
{
 struct cardstate *VAR_1;
 struct usb_cardstate *VAR_2;

 VAR_1 = FUNC_6(VAR_0);
 VAR_2 = VAR_1->hw.usb;

 FUNC_0(VAR_1->dev, "disconnecting Gigaset USB adapter\n");

 FUNC_7(VAR_2->read_urb);

 FUNC_2(VAR_1);

 FUNC_9(VAR_0, ((void*)0));
 FUNC_4(&VAR_1->write_tasklet);

 FUNC_7(VAR_2->bulk_out_urb);

 FUNC_3(VAR_2->bulk_out_buffer);
 FUNC_5(VAR_2->bulk_out_urb);
 FUNC_3(VAR_2->rcvbuf);
 FUNC_5(VAR_2->read_urb);
 VAR_2->read_urb = VAR_2->bulk_out_urb = ((void*)0);
 VAR_2->rcvbuf = VAR_2->bulk_out_buffer = ((void*)0);

 FUNC_8(VAR_2->udev);
 VAR_2->interface = ((void*)0);
 VAR_2->udev = ((void*)0);
 VAR_1->dev = ((void*)0);
 FUNC_1(VAR_1);
}
