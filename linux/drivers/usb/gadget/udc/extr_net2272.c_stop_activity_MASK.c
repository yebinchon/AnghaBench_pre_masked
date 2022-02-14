
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {int (* disconnect ) (TYPE_1__*) ;} ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct net2272 {int lock; TYPE_1__ gadget; int * ep; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net2272*) ;
 int FUNC_2 (struct net2272*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct net2272 *VAR_1, struct usb_gadget_driver *VAR_2)
{
 int VAR_3;


 if (VAR_1->gadget.speed == VAR_0)
  VAR_2 = ((void*)0);




 FUNC_2(VAR_1);
 for (VAR_3 = 0; VAR_3 < 4; ++VAR_3)
  FUNC_0(&VAR_1->ep[VAR_3]);


 if (VAR_2) {
  FUNC_4(&VAR_1->lock);
  VAR_2->disconnect(&VAR_1->gadget);
  FUNC_3(&VAR_1->lock);
 }

 FUNC_1(VAR_1);
}
