
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int interrupt_in_urb; int * read_urbs; } ;
struct usb_serial {struct usb_serial_port** port; } ;
struct f81232_private {int lsr_work; int interrupt_work; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct f81232_private* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct usb_serial *VAR_0, pm_message_t VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_0->port[0];
 struct f81232_private *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->read_urbs); ++VAR_4)
  FUNC_3(VAR_2->read_urbs[VAR_4]);

 FUNC_3(VAR_2->interrupt_in_urb);

 if (VAR_3) {
  FUNC_1(&VAR_3->interrupt_work);
  FUNC_1(&VAR_3->lsr_work);
 }

 return 0;
}
