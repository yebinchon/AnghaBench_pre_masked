
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {TYPE_2__* altsetting; } ;
struct usb_device {TYPE_4__* config; } ;
struct TYPE_7__ {int bNumInterfaces; } ;
struct TYPE_8__ {TYPE_3__ desc; } ;
struct TYPE_5__ {int bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_device*,char*) ;
 int FUNC_5 (struct usb_device*) ;
 int VAR_0 ;
 int FUNC_6 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_1)
{
 struct usb_device *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = VAR_1->altsetting->desc.bInterfaceNumber;
 FUNC_3(VAR_2);




 if (VAR_2->config->desc.bNumInterfaces != 1 && VAR_3 == 0) {
  FUNC_1(&VAR_0);
  FUNC_6(VAR_1);
  FUNC_2(&VAR_0);
  FUNC_4(VAR_2, "ADSL device removed\n");
 }

 FUNC_5(VAR_2);
}
