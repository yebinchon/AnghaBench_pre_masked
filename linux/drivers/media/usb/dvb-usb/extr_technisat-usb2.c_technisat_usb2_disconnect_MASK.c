
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct technisat_usb2_state {int green_led_work; } ;
struct dvb_usb_device {struct technisat_usb2_state* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_interface*) ;
 struct dvb_usb_device* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_3(struct usb_interface *VAR_0)
{
 struct dvb_usb_device *VAR_1 = FUNC_2(VAR_0);


 if (VAR_1 != ((void*)0)) {
  struct technisat_usb2_state *VAR_2 = VAR_1->priv;
  if (VAR_2 != ((void*)0))
   FUNC_0(&VAR_2->green_led_work);
 }

 FUNC_1(VAR_0);
}
