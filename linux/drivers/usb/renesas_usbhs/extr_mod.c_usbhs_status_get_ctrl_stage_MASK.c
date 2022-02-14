
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_irq_state {scalar_t__ intsts0; } ;


 int VAR_0 ;

int FUNC_0(struct usbhs_irq_state *VAR_1)
{
 return (int)VAR_1->intsts0 & VAR_0;
}
