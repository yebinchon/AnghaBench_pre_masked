
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct moschip_port {struct moschip_port* dr; struct moschip_port* ctrl_buf; int control_urb; struct moschip_port* led_dr; int led_urb; int led_timer2; int led_timer1; scalar_t__ has_led; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct moschip_port*) ;
 struct moschip_port* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (struct usb_serial_port*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct usb_serial_port *VAR_1)
{
 struct moschip_port *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->has_led) {

  FUNC_3(VAR_1, VAR_0, 0x0300);

  FUNC_0(&VAR_2->led_timer1);
  FUNC_0(&VAR_2->led_timer2);

  FUNC_5(VAR_2->led_urb);
  FUNC_4(VAR_2->led_urb);
  FUNC_1(VAR_2->led_dr);
 }
 FUNC_5(VAR_2->control_urb);
 FUNC_4(VAR_2->control_urb);
 FUNC_1(VAR_2->ctrl_buf);
 FUNC_1(VAR_2->dr);
 FUNC_1(VAR_2);

 return 0;
}
