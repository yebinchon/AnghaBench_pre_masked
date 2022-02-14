
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhs_priv {TYPE_1__* pfunc; } ;
struct usbhs_mod_info {int get_vbus; } ;
struct TYPE_2__ {int get_vbus; } ;


 struct usbhs_mod_info* FUNC_0 (struct usbhs_priv*) ;

void FUNC_1(struct usbhs_priv *VAR_0)
{
 struct usbhs_mod_info *VAR_1 = FUNC_0(VAR_0);

 VAR_1->get_vbus = VAR_0->pfunc->get_vbus;
}
