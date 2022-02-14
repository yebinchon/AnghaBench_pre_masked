
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ttusbir {int bulk_urb; int led; int * urb; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ttusbir* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_1, pm_message_t VAR_2)
{
 struct ttusbir *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_2(VAR_3->urb[VAR_4]);

 FUNC_0(&VAR_3->led);
 FUNC_2(VAR_3->bulk_urb);

 return 0;
}
