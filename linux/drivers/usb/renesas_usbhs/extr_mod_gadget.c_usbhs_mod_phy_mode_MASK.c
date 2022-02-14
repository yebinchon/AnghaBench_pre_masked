
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_mod_info {int get_vbus; int * irq_vbus; } ;
struct usbhs_priv {struct usbhs_mod_info mod_info; } ;


 int FUNC_0 (struct usbhs_priv*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct usbhs_priv *VAR_1)
{
 struct usbhs_mod_info *VAR_2 = &VAR_1->mod_info;

 VAR_2->irq_vbus = ((void*)0);
 VAR_2->get_vbus = VAR_0;

 FUNC_0(VAR_1, ((void*)0));
}
