
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_mod {scalar_t__ irq_brdysts; scalar_t__ irq_bempsts; int * irq_ready; int * irq_empty; } ;


 struct usbhs_mod* FUNC_0 (struct usbhs_priv*) ;

void FUNC_1(struct usbhs_priv *VAR_0)
{
 struct usbhs_mod *VAR_1 = FUNC_0(VAR_0);

 VAR_1->irq_empty = ((void*)0);
 VAR_1->irq_ready = ((void*)0);
 VAR_1->irq_bempsts = 0;
 VAR_1->irq_brdysts = 0;
}
