
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int write_urbs_free; } ;
struct urb {struct usb_serial_port* context; } ;
struct keyspan_pda_private {int wakeup_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 struct keyspan_pda_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0)
{
 struct usb_serial_port *VAR_1 = VAR_0->context;
 struct keyspan_pda_private *VAR_2;

 FUNC_1(0, &VAR_1->write_urbs_free);
 VAR_2 = FUNC_2(VAR_1);


 FUNC_0(&VAR_2->wakeup_work);
}
