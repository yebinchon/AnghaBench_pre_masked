
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {int (* disconnect ) (TYPE_1__*) ;} ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct mtu3 {int num_eps; int lock; TYPE_1__ g; scalar_t__ out_eps; scalar_t__ in_eps; scalar_t__ ep0; scalar_t__ softconnect; struct usb_gadget_driver* gadget_driver; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mtu3*,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct mtu3 *VAR_2)
{
 struct usb_gadget_driver *VAR_3 = VAR_2->gadget_driver;
 int VAR_4;


 if (VAR_2->g.speed == VAR_1)
  VAR_3 = ((void*)0);
 else
  VAR_2->g.speed = VAR_1;


 if (VAR_2->softconnect) {
  VAR_2->softconnect = 0;
  FUNC_0(VAR_2, 0);
 }





 FUNC_1(VAR_2->ep0, -VAR_0);
 for (VAR_4 = 1; VAR_4 < VAR_2->num_eps; VAR_4++) {
  FUNC_1(VAR_2->in_eps + VAR_4, -VAR_0);
  FUNC_1(VAR_2->out_eps + VAR_4, -VAR_0);
 }

 if (VAR_3) {
  FUNC_3(&VAR_2->lock);
  VAR_3->disconnect(&VAR_2->g);
  FUNC_2(&VAR_2->lock);
 }
}
