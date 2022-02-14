
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int data; } ;
struct usb_interface {int dummy; } ;
struct cdc_state {int data; TYPE_1__* ether; } ;
struct TYPE_2__ {int iMACAddress; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct usbnet*,struct usb_interface*) ;
 int FUNC_5 (struct usbnet*,int ) ;

int FUNC_6(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{
 int VAR_2;
 struct cdc_state *VAR_3 = (void *) &VAR_0->data;

 FUNC_0((sizeof(((struct usbnet *)0)->data)
   < sizeof(struct cdc_state)));

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_5(VAR_0, VAR_3->ether->iMACAddress);
 if (VAR_2 < 0) {
  FUNC_3(VAR_3->data, ((void*)0));
  FUNC_2(FUNC_1(VAR_1), VAR_3->data);
  return VAR_2;
 }

 return 0;
}
