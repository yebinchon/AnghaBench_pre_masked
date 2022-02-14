
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int bRequestType; int wIndex; int wLength; int wValue; } ;
struct nbu2ss_udc {int ep0_buf; TYPE_1__* p_regs; TYPE_2__ ctrl; } ;
struct TYPE_3__ {int USB_ADDRESS; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nbu2ss_udc*,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nbu2ss_udc *VAR_2)
{
 int VAR_3 = 0;
 u32 VAR_4 = FUNC_2(VAR_2->ctrl.wValue);

 if ((VAR_2->ctrl.bRequestType != 0x00) ||
     (VAR_2->ctrl.wIndex != 0x0000) ||
  (VAR_2->ctrl.wLength != 0x0000)) {
  return -VAR_0;
 }

 if (VAR_4 != (VAR_4 & 0x007F))
  return -VAR_0;

 VAR_4 <<= VAR_1;

 FUNC_1(&VAR_2->p_regs->USB_ADDRESS, VAR_4);
 FUNC_0(VAR_2, VAR_2->ep0_buf, 0);

 return VAR_3;
}
