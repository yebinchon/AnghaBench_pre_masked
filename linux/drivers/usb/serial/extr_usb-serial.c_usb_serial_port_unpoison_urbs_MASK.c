
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int interrupt_out_urb; int interrupt_in_urb; int * write_urbs; int * read_urbs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct usb_serial_port *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->read_urbs); ++VAR_1)
  FUNC_1(VAR_0->read_urbs[VAR_1]);
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->write_urbs); ++VAR_1)
  FUNC_1(VAR_0->write_urbs[VAR_1]);

 FUNC_1(VAR_0->interrupt_in_urb);
 FUNC_1(VAR_0->interrupt_out_urb);
}
