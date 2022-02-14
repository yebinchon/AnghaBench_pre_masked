
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int speed; } ;
struct nbu2ss_udc {scalar_t__ vbus_active; TYPE_2__ gadget; TYPE_1__* p_regs; scalar_t__ driver; } ;
struct TYPE_3__ {int USB_CONTROL; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct nbu2ss_udc *VAR_4, int VAR_5)
{
 u32 VAR_6;

 if (VAR_4->vbus_active == 0)
  return -VAR_1;

 if (VAR_5) {

  if (VAR_4->driver) {
   VAR_6 = (FUNC_0(&VAR_4->p_regs->USB_CONTROL)
    | VAR_2) & ~(u32)VAR_0;

   FUNC_1(&VAR_4->p_regs->USB_CONTROL, VAR_6);
  }

 } else {

  VAR_6 = (FUNC_0(&VAR_4->p_regs->USB_CONTROL) | VAR_0)
   & ~(u32)VAR_2;

  FUNC_1(&VAR_4->p_regs->USB_CONTROL, VAR_6);
  VAR_4->gadget.speed = VAR_3;
 }

 return 0;
}
