
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct redrat3_dev {int flash_urb; int wide_urb; int narrow_urb; int led; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *) ;
 struct redrat3_dev* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct redrat3_dev *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_2->led);
 FUNC_2(VAR_2->narrow_urb);
 FUNC_2(VAR_2->wide_urb);
 FUNC_2(VAR_2->flash_urb);
 return 0;
}
