
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct usb_configuration {unsigned int next_interface_id; struct usb_function** interface; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

int FUNC_0(struct usb_configuration *VAR_2,
  struct usb_function *VAR_3)
{
 unsigned VAR_4 = VAR_2->next_interface_id;

 if (VAR_4 < VAR_1) {
  VAR_2->interface[VAR_4] = VAR_3;
  VAR_2->next_interface_id = VAR_4 + 1;
  return VAR_4;
 }
 return -VAR_0;
}
