
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dev; int * serial; } ;
struct usb_serial {int num_port_pointers; int dev; int interface; struct usb_serial_port** port; TYPE_1__* type; scalar_t__ attached; scalar_t__ minors_reserved; } ;
struct kref {int dummy; } ;
struct TYPE_2__ {int (* release ) (struct usb_serial*) ;} ;


 int FUNC_0 (struct usb_serial*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial*) ;
 int FUNC_3 (struct usb_serial*) ;
 struct usb_serial* FUNC_4 (struct kref*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct kref *VAR_0)
{
 struct usb_serial *VAR_1;
 struct usb_serial_port *VAR_2;
 int VAR_3;

 VAR_1 = FUNC_4(VAR_0);


 if (VAR_1->minors_reserved)
  FUNC_2(VAR_1);

 if (VAR_1->attached && VAR_1->type->release)
  VAR_1->type->release(VAR_1);


 for (VAR_3 = 0; VAR_3 < VAR_1->num_port_pointers; ++VAR_3) {
  VAR_2 = VAR_1->port[VAR_3];
  if (VAR_2) {
   VAR_2->serial = ((void*)0);
   FUNC_1(&VAR_2->dev);
  }
 }

 FUNC_6(VAR_1->interface);
 FUNC_5(VAR_1->dev);
 FUNC_0(VAR_1);
}
