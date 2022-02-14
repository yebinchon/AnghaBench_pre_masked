
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qe_udc {TYPE_1__* usb_regs; } ;
struct qe_ep {scalar_t__ state; size_t epnum; scalar_t__ has_data; struct qe_udc* udc; } ;
struct TYPE_2__ {int usb_usbmr; int usb_usber; int * usb_usep; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct qe_ep *VAR_6)
{
 struct qe_udc *VAR_7 = VAR_6->udc;

 if (VAR_6->state == VAR_1) {
  FUNC_0(&VAR_7->usb_regs->usb_usep[VAR_6->epnum],
    VAR_4, VAR_5);


  FUNC_1(&VAR_7->usb_regs->usb_usber,
    VAR_2 | VAR_3);
  FUNC_2(&VAR_7->usb_regs->usb_usbmr,
    (VAR_3 | VAR_2));

  VAR_6->state = VAR_0;
  VAR_6->has_data = 0;
 }

 return 0;
}
