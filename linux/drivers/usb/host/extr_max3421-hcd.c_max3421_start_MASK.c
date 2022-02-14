
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int uses_new_polling; int state; int power_budget; } ;
struct max3421_hcd {int ep_list; int rh_state; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct max3421_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct usb_hcd *VAR_3)
{
 struct max3421_hcd *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(&VAR_4->lock);
 VAR_4->rh_state = VAR_1;

 FUNC_0(&VAR_4->ep_list);

 VAR_3->power_budget = VAR_2;
 VAR_3->state = VAR_0;
 VAR_3->uses_new_polling = 1;
 return 0;
}
