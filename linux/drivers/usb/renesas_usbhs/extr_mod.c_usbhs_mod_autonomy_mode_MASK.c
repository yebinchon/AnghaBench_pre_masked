
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_mod_info {int get_vbus; int irq_vbus; } ;


 int FUNC_0 (struct usbhs_priv*,int *) ;
 struct usbhs_mod_info* FUNC_1 (struct usbhs_priv*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct usbhs_priv *VAR_2)
{
 struct usbhs_mod_info *VAR_3 = FUNC_1(VAR_2);

 VAR_3->irq_vbus = VAR_1;
 VAR_3->get_vbus = VAR_0;

 FUNC_0(VAR_2, ((void*)0));
}
