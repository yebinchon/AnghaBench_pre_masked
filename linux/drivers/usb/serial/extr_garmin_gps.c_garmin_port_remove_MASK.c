
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int interrupt_in_urb; } ;
struct garmin_data {int timer; int write_urbs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct garmin_data*) ;
 struct garmin_data* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_0)
{
 struct garmin_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_1->write_urbs);
 FUNC_4(VAR_0->interrupt_in_urb);
 FUNC_0(&VAR_1->timer);
 FUNC_1(VAR_1);
 return 0;
}
