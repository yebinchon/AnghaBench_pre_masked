
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ttusbir {int is_led_on; int dev; int * urb; int led; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 struct ttusbir* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_2)
{
 struct ttusbir *VAR_3 = FUNC_2(VAR_2);
 int VAR_4, VAR_5;

 VAR_3->is_led_on = 1;
 FUNC_1(&VAR_3->led);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = FUNC_3(VAR_3->urb[VAR_4], VAR_0);
  if (VAR_5) {
   FUNC_0(VAR_3->dev, "failed to submit urb: %d\n", VAR_5);
   break;
  }
 }

 return VAR_5;
}
