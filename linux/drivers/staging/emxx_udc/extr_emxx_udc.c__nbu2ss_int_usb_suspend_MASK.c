
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nbu2ss_udc {int usb_suspended; TYPE_1__* p_regs; int lock; int gadget; TYPE_2__* driver; } ;
struct TYPE_4__ {int (* suspend ) (int *) ;} ;
struct TYPE_3__ {int USB_CONTROL; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_5(struct nbu2ss_udc *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->usb_suspended == 0) {
  VAR_3 = FUNC_1(VAR_1);

  if (VAR_3 == 0)
   return;

  VAR_2->usb_suspended = 1;
  if (VAR_2->driver && VAR_2->driver->suspend) {
   FUNC_3(&VAR_2->lock);
   VAR_2->driver->suspend(&VAR_2->gadget);
   FUNC_2(&VAR_2->lock);
  }

  FUNC_0(&VAR_2->p_regs->USB_CONTROL, VAR_0);
 }
}
