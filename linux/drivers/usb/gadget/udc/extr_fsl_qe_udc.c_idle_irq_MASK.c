
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qe_udc {scalar_t__ usb_state; TYPE_1__* usb_regs; } ;
struct TYPE_2__ {int usb_usbs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qe_udc*) ;
 int FUNC_2 (struct qe_udc*) ;

__attribute__((used)) static void FUNC_3(struct qe_udc *VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_0(&VAR_2->usb_regs->usb_usbs);
 if (VAR_3 & VAR_0) {
  if ((VAR_2->usb_state) != VAR_1)
   FUNC_2(VAR_2);
 } else {
  if (VAR_2->usb_state == VAR_1)
   FUNC_1(VAR_2);
 }
}
