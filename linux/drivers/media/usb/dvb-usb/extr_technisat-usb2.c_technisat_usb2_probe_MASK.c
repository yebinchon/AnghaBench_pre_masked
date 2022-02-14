
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct technisat_usb2_state {int green_led_work; struct dvb_usb_device* dev; } ;
struct dvb_usb_device {struct technisat_usb2_state* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct usb_interface*,int *,int ,struct dvb_usb_device**,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_6,
  const struct usb_device_id *VAR_7)
{
 struct dvb_usb_device *VAR_8;

 if (FUNC_1(VAR_6, &VAR_4, VAR_1,
    &VAR_8, VAR_2) != 0)
  return -VAR_0;

 if (VAR_8) {
  struct technisat_usb2_state *VAR_9 = VAR_8->priv;
  VAR_9->dev = VAR_8;

  if (!VAR_3) {
   FUNC_0(&VAR_9->green_led_work,
     VAR_5);
   FUNC_3(&VAR_9->green_led_work,
     FUNC_2(500));
  }
 }

 return 0;
}
