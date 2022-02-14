
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int wIndex; int wLength; int bRequestType; int wValue; } ;
struct nbu2ss_udc {int devstate; TYPE_1__* p_regs; scalar_t__ curr_config; TYPE_2__ ctrl; } ;
struct TYPE_3__ {int USB_CONTROL; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nbu2ss_udc *VAR_4)
{
 u32 VAR_5 = (u32)(FUNC_2(VAR_4->ctrl.wValue) & 0x00ff);

 if ((VAR_4->ctrl.wIndex != 0x0000) ||
     (VAR_4->ctrl.wLength != 0x0000) ||
  (VAR_4->ctrl.bRequestType != 0x00)) {
  return -VAR_1;
 }

 VAR_4->curr_config = VAR_5;

 if (VAR_5 > 0) {
  FUNC_1(&VAR_4->p_regs->USB_CONTROL, VAR_0);
  VAR_4->devstate = VAR_3;

 } else {
  FUNC_0(&VAR_4->p_regs->USB_CONTROL, VAR_0);
  VAR_4->devstate = VAR_2;
 }

 return 0;
}
