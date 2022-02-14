
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbu2ss_udc {int usb_suspended; int lock; int gadget; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* resume ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct nbu2ss_udc *VAR_0)
{
 if (VAR_0->usb_suspended == 1) {
  VAR_0->usb_suspended = 0;
  if (VAR_0->driver && VAR_0->driver->resume) {
   FUNC_1(&VAR_0->lock);
   VAR_0->driver->resume(&VAR_0->gadget);
   FUNC_0(&VAR_0->lock);
  }
 }
}
