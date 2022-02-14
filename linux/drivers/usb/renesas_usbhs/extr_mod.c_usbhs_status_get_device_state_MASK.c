
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_irq_state {int intsts0; } ;





 int VAR_0 ;
 int VAR_1 ;


int FUNC_0(struct usbhs_irq_state *VAR_2)
{
 int VAR_3 = VAR_2->intsts0 & VAR_0;

 switch (VAR_3) {
 case 128:
 case 129:
 case 131:
 case 130:
  return VAR_3;
 }

 return -VAR_1;
}
