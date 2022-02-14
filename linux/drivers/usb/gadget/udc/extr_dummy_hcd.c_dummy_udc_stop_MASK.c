
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct dummy_hcd {struct dummy* dum; } ;
struct dummy {scalar_t__ callback_usage; int lock; int * driver; scalar_t__ ints_enabled; } ;


 struct dummy_hcd* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dummy*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct usb_gadget *VAR_0)
{
 struct dummy_hcd *VAR_1 = FUNC_0(VAR_0);
 struct dummy *VAR_2 = VAR_1->dum;

 FUNC_1(&VAR_2->lock);
 VAR_2->ints_enabled = 0;
 FUNC_3(VAR_2);


 while (VAR_2->callback_usage > 0) {
  FUNC_2(&VAR_2->lock);
  FUNC_4(1000, 2000);
  FUNC_1(&VAR_2->lock);
 }

 VAR_2->driver = ((void*)0);
 FUNC_2(&VAR_2->lock);

 return 0;
}
