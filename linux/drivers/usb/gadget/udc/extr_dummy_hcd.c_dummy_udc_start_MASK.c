
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget_driver {int max_speed; } ;
struct usb_gadget {int speed; } ;
struct dummy_hcd {struct dummy* dum; } ;
struct dummy {int ints_enabled; int lock; struct usb_gadget_driver* driver; scalar_t__ devstatus; } ;


 int VAR_0 ;




 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dummy_hcd*) ;
 struct dummy_hcd* FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct usb_gadget *VAR_1,
  struct usb_gadget_driver *VAR_2)
{
 struct dummy_hcd *VAR_3 = FUNC_2(VAR_1);
 struct dummy *VAR_4 = VAR_3->dum;

 switch (VAR_1->speed) {

 case 129:
 case 131:
 case 130:
 case 128:
  break;
 default:
  FUNC_0(FUNC_1(VAR_3), "Unsupported driver max speed %d\n",
    VAR_2->max_speed);
  return -VAR_0;
 }






 FUNC_3(&VAR_4->lock);
 VAR_4->devstatus = 0;
 VAR_4->driver = VAR_2;
 VAR_4->ints_enabled = 1;
 FUNC_4(&VAR_4->lock);

 return 0;
}
